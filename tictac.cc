#include <iostream>
#include <iomanip>
using namespace std;

void setboard();
void displayboard();
void p1_turn(int in_x, int in_y);
void p2_turn(int in_x, int in_y);

char game_board [3][3];



int main (int argc,char *argv[]){
string player1;
string player2;
int in_x;
int in_y;


setboard();
displayboard();

cout << "Player 1, type desired name: ";
getline (cin, player1, '\n');
cout << "Player 2, type desired name: ";
getline (cin, player2, '\n');
cout << "Player 1 is 'X', Player 2 is 'O'. Input your move by typing first the horizontal(x), then vertical(y), as x y." << endl;

p1_turn(in_x, in_y);
p2_turn(in_x, in_y);



return 0;
}



void displayboard() {
cout << "     "
    << '0' << "     "
    << '1' << "     "
    << '2'
    << endl;
cout << setw(21)
    << setfill('-')
    << "-"
    << endl;
for (int y = 0; y < 3; y++) {
    cout << y << " |";
    for (int x = 0; x < 3; x++) {
        cout << "  " << game_board[y][x] << "  " << '|';
    }
    cout << endl 
         << setw(21)
         << setfill('-')
         << "-"
         << endl;
}
}

void setboard() {
for (int y = 0; y < 3; y++) {
    for (int x = 0; x < 3; x++) {
        game_board [y][x] = '*';
    }
}
}

void p1_turn(int in_x, int in_y) {
cout << "Player 1, select your square: ";
cin >> in_x >> in_y;
game_board[in_y][in_x] = 'X';
displayboard();
}

void p2_turn(int in_x, int in_y) {
cout << "Player 2, select your square: ";
cin >> in_x >> in_y;
game_board[in_y][in_x] = 'O';
displayboard();
}