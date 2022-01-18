/* Command Line Casino Game
 * @author Simran
 */


#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>

using namespace std;

void rules();

int main() {
    string player;
    int accountBalance; // stores player's account balance
    int bettingAmount;
    int guess;
    int dice; // stores the random number
    char choice;

    srand(time(0)); // "Seed" the random generator

    cout << "\n\t\t======== WELCOME TO Mimi's Command Line Casino =======\n\n";
    cout << "\n\nWhat's your Name? : ";
    getline(cin, player); // take player input
    cout << "\n\nEnter your starting account balance to play : $";
    cin >> accountBalance;

    do {
        system("cls");
        rules();
        cout << "\n\nYour current account balance is $ " << accountBalance << "\n";


        do { // Get player's betting accountBalance
            cout << "Hey, " << player<<", enter amount to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > accountBalance)
                cout << "Betting amount can't be more than current account balance!\n"
                     <<"\nRe-enter account balance\n ";
        }
        while(bettingAmount > accountBalance);


        do { // Get player's numbers
            cout << "Bet a number between 1 & 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\nNumber should be between 1 to 10\n"
                     <<"Re-enter number:\n ";
        } while(guess <= 0 || guess > 10);

        dice = rand()%10 + 1;

        if(dice == guess) {
            cout << "\n\nCongrats! You have won $" << bettingAmount * 10;
            accountBalance = accountBalance + bettingAmount * 10;
        } else {
            cout << "Oops, better luck next time! You lost $ "<< bettingAmount <<"\n";
            accountBalance = accountBalance - bettingAmount;
        }

        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<player<<", Your new account balance is $ " << accountBalance << "\n";

        if(accountBalance == 0) {
            cout << "You have no money to play. Please enter new account balance. ";
            break;
        }

        cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> choice;
    } while(choice =='Y'|| choice=='y');

    cout << "\n\n\n";
    cout << "\n\nThanks for playing the game. Your final account balance is $ " << accountBalance << "\n\n";
    return 0;
}

void rules()
{
    system("cls");
    cout << "\t\t====== Game Rules ======\n";
    cout << "\t1. Bet a number between 1 to 10\n";
    cout << "\t2. If you guess correctly you get 10 times of the money bet\n";
    cout << "\t3. If you guess wrong, you lose the amount you bet\n\n";
}
