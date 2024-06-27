#include <iostream>
using namespace std;

int main(){
    //{"Rock", "Scissors", "Paper"}
    //{"石头", "剪刀",      "布"}
    int n; cin >> n;
    string player1[n];
    string player2[n];
    for (int i = 0; i < n; i++){
        string a, b; cin >> a >> b;
        player1[i] = a;
        player2[i] = b;
    }

    for (int i = 0; i < n; i++){
        if ((player1[i] == "Scissors" && player2[i] == "Paper") || (player1[i] == "Rock" && player2[i] == "Scissors") || (player1[i] == "Paper" && player2[i] == "Rock")){
            printf("Player1\n");
        }
        else if (player1[i] == player2[i]){
            printf("Tie\n");
        }
        else printf("Player2\n");
    }
    return 0;
}