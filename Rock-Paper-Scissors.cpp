#include<iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int main() {
    char userInput;
    int compChoose;
    srand(time(0));
    int lost;
    int won;
    int tied;
    char playAgain = 'Y';
    lost = 0; won = 0; tied = 0;
  
    // while loop to loop through the game as long as play again = yes
    while (playAgain == 'Y') {
        cout << "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R, or S)" << endl;
        cout << "Player one: ";
        cin >> userInput;
// User Choices:
        if ((userInput == 'R') || (userInput == 'r')) {
            cout << "\nPlayer chose Rock" << endl;
        } else if ((userInput == 'P') || (userInput == 'p')) {
            cout << "\nPlayer chose Paper" << endl;
        } else if ((userInput == 'S') || (userInput == 's')) {
            cout << "\nPlayer chose Scissors" << endl;
        }
// Comp choices:
        compChoose = rand() % 3;
        if (compChoose == 0) {
            cout << "Computer chose Rock" << endl;
        } else if (compChoose == 1) {
            cout << "Computer chose Paper" << endl;
        } else if (compChoose == 2) {
            cout << "Computer chose Scissors" << endl;
        }
        cout << "\n" << endl;
// Results:
        if (((userInput == 'R') || (userInput == 'r')) && (compChoose == 1)) {
            cout << "Paper beats Rock. Computer Wins!" << endl;
            lost = lost + 1;
        } else if (((userInput == 'P') || (userInput == 'p')) && (compChoose == 2))
{
            cout << "Scissors beats Paper. Computer Wins!" << endl;
            lost = lost + 1;
        } else if (((userInput == 'S') || (userInput == 's')) && (compChoose == 0))
{
            cout << "Rock beats Scissors. Computer Wins!" << endl;
            lost = lost +1;
        } else if (((userInput == 'R') || (userInput == 'r')) && (compChoose == 2))
{
            cout << "Paper beats Rock. You Win! " << endl;
            won = won + 1;
        } else if (((userInput == 'P') || (userInput == 'p')) && (compChoose == 0))
{
            cout << "Paper beats Rock. You Win! " << endl;
            won = won + 1;
        } else if (((userInput == 'S') || (userInput == 's')) && (compChoose == 1))
{
            cout << "Scissors beats Paper. You Win! " << endl;
            won = won + 1;
        } else {
            cout << "It's a tie!" << endl;
            tied = tied + 1;
        }
        // Lab 3A:
        cout << "Do you want to play again? (Y/N)";
        cin >> playAgain;
    }
        cout << "Thanks for playing!" << endl;
        cout << "You won " << won << " game(s), " << "lost " << lost << " game(s), " << "and tied " << tied << " game(s)." << endl;
    return 0;
}
