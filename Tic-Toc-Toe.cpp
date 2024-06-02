#include <iostream>
#include <vector>
using namespace std;

void display_board(const vector<vector<char>>&board) {
    cout<< "current board: "<<endl;
    for (auto &row : board) {
        for (auto &position : row) {
            cout<<position<<" ";
        }
        cout<<endl;
    }
}

bool check_for_win(const vector<vector<char>>& board, char player) {
    // check rows and columns
    for(int i=0;i<=2;i++) {
        if((board[i][0]==player && board[i][1]==player && board[i][2]==player)||
           (board[0][i]==player && board[1][i]==player && board[2][i]==player)) {
            return true;
        }
    }
    // check diagonals 
    if((board[0][0]==player && board[1][1]==player && board[2][2]==player)||
       (board[0][2]==player && board[1][1]==player && board[2][0]==player)) {
        return true;
    }
    return false;
}

bool check_for_draw(const vector<vector<char>>&board) {
    for(auto &row : board) {
        for(auto &position : row) {
            if(position=='_'){
                return false;
            }
        }
    }
    return true;
}

void execute_move(vector<vector<char>>&board,char player) {
    int row,col;
    while (true) {
        cout <<"player "<<player<< ",enter your move(row & column):";
        cin >>row>>col;
        
        if (row>=0 && row<=2 && col>=0 && col<=2 && board[row][col]=='_') {
            board[row][col]=player;
            break;
        } 
        else{
            cout<<"Invalid move try again!"<<endl;
        }
    }
}

void letsplay() {
    vector<vector<char>>board(3,vector<char>(3,'_'));
    char curr_player='X';
    while(1){
        display_board(board);
        execute_move(board,curr_player);
        if(check_for_win(board,curr_player)) {
            display_board(board);
            cout <<"player"<<curr_player<<"win"<<endl;
            break;
        } else if(check_for_draw(board)) {
            display_board(board);
            cout << "Current game result is draw"<<endl;
            break;
        }
        curr_player=(curr_player=='X')? 'O':'X';
    }
}

int main() {
    char playagain;
    do{
        letsplay();
        cout << "Wanna play again? (y/n): ";
        cin >> playagain;
    }while (playagain=='y');
    return 0;
}
