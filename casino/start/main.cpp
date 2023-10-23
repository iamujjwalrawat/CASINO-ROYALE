#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void terms();
void playGame(string Player, int &balance);

int main() {
    string Player;
    int balance;
    srand(static_cast<unsigned>(time(0)));

    cout << "===== WELCOME TO CASINO WORLD =====\n";
    cout << "Enter your name: ";
    getline(cin, Player);
    terms();
    cout << "Enter the starting balance to play the game: $";
    cin >> balance;
    cin.ignore(); // Clear the newline character from the input buffer
    playGame(Player, balance);

    return 0;
}

void terms() {
    cout << "Disclaimer: Gambling may not be safe for individuals and can lead to addiction. Be smart and aware. We take no responsibility.\n";
}

void playGame(string Player, int &balance) {
    // Your game logic here
}
    do
    {
        terms();
        cout << "\n\nYour current balance is $ " << balance << "\n";
        // Get player's betting balance
        do
        {
            cout << "Hey, " << Player<<", enter amount to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > balance)
            cout << "Betting balance can't be more than current balance!\n"<<"\nRe-enter balance\n ";
        }while(bettingAmount > balance);
        // Get player's numbers
        do
        {
            cout << "Guess any betting number between 1 & 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\nNumber should be between 1 to 10\n"
                <<"Re-enter number:\n ";
        }while(guess <= 0 || guess > 10);
        craps = rand()%10 + 1;
        if(craps == guess)
        {
            cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 10;
            balance = balance + bettingAmount * 10;
        }
        else
        {
            cout << "Oops, better luck next time !! You lost $ "<< bettingAmount <<"\n";
            balance = balance - bettingAmount;
        }
        cout << "\nThe winning number was : " << craps <<"\n";
        cout << "\n"<<Player<<", You have balance of $ " << balance << "\n";
        if(balance == 0)
        {
            cout << "You have Insufficient Balance ";
            break;
        }
        cout << "\n\n-->Do you want to bet again (y/n)? ";
        cin >> choose;
    }while(choose =='Y'|| choose=='y');
    cout << "\n\n\n";
    cout << "\n\nThanks for playing the game. Your balance is $ " << balance << "\n\n";
    return 0;
}
void terms()
{
    cout << "\n\n======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}

