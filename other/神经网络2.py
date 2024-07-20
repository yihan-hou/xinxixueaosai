from matplotlib import pyplot as plt
from torch import nn
import numpy as np
import torch


def f(x, y):
    return np.cos((x**2 + y ** 2)**(0.5))

X, Y = (np.mgrid[:1001, :1001] / 1000 - 0.5) * 4 * np.pi
X, Y = X.astype(np.float32), Y.astype(np.float32)
Z = f(X, Y)

def draw(X, Y, Z):
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')
    ax.plot_surface(X, Y, Z)
    plt.show()
    
class Model(nn.Module):
    def __init__(self):
        super().__init__()
        self.l = nn.Sequential(
            nn.Linear(2, 16), 
            nn.LayerNorm(16),
            nn.ReLU(), 
            nn.Linear(16, 32),
            nn.LayerNorm(32),
            nn.ReLU(),
            nn.Linear(32, 64),
            nn.LayerNorm(64),
            nn.ReLU(),
            nn.Linear(64, 128),
            nn.LayerNorm(128),
            nn.ReLU(),
            nn.Linear(128, 64),
            nn.LayerNorm(64),
            nn.ReLU(),
            nn.Linear(64, 32),
            nn.LayerNorm(32),
            nn.ReLU(),
            nn.Linear(32, 1),
            nn.Flatten()
        )
        
    def forward(self, X):
        return self.l(X).view(-1)

m = Model()
opt = torch.optim.AdamW(m.parameters())
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
@torch.inference_mode()
def show(m):
    ax.cla()
    ax.plot_surface(X, Y, Z)
    a = torch.stack([torch.as_tensor(X).flatten(), torch.as_tensor(Y).flatten()], -1)
    Z1 = m(a.cuda()).view_as(torch.as_tensor(Z))
    Z1 = Z1.cpu().numpy()
    ax.plot_surface(X, Y, Z1)
    plt.draw()
    plt.pause(0.1)
    

def train(m):
    m.cuda()
    for k in range(10**6):
        X = (torch.rand(64) - 0.5) * 4 * np.pi
        Y = (torch.rand(64) - 0.5) * 4 * np.pi
        Z = torch.cos((X**2 + Y**2)**(0.5))
        a = torch.stack([X.float(), Y.float()], -1)
        Z1 = m(a.cuda())
        loss = nn.functional.mse_loss(Z1, Z.cuda())
        opt.zero_grad()
        loss.backward()
        opt.step()
        if k%10 == 0:
            print(loss)
            show(m)
            
train(m)
          