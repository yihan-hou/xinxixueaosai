from matplotlib import pyplot as plt
from torch import nn 
import numpy as np
import torch


def f(x):
    #a = 0.5 b = 7 n = 10
    a = 0
    for i in range(21):
        a += 10*(0.75)**i*np.cos(3**i*np.pi*x)
    return a

X = np.arange(-2, 2, 0.001, dtype=np.float32)
Y = np.array([f(x) for x in X], dtype=np.float32)

class Model(nn.Module):
    def __init__(self):
        super().__init__()
        self.l = nn.Sequential(
            nn.Linear(1, 16), 
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
            nn.Linear(32, 1)
        )
        
    def forward(self, X):
        return self.l(X)
    
def show(X, Y1, Y):
    X = X.cpu().numpy()
    Y = Y.cpu().numpy()
    Y1 = Y1.cpu().detach().numpy()
    plt.plot(X, Y, 'b')
    plt.plot(X, Y1, 'r')
    plt.grid(True)
    plt.draw()
    plt.pause(0.1)
    
m = Model().cuda()
opt = torch.optim.AdamW(m.parameters(), 0.001)
def train(m, X, Y):
    X = torch.tensor(X).cuda()
    Y = torch.tensor(Y).cuda()
    for k in range(1000000):
        Y1 = m(X[:, None])
        Y1 = Y1[:, 0]
        loss = nn.functional.mse_loss(Y1, Y)
        opt.zero_grad()
        loss.backward()
        opt.step()
        if k%1000 == 0:
            print(loss)
            show(X, Y1, Y)
    
train(m, X, Y)  
plt.plot(X, Y)
plt.grid(True)
plt.show()