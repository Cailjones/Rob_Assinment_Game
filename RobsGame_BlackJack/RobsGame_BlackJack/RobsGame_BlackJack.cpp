// RobsGame_BlackJack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int rngNumb1, rngNumb2, Playertotal;

    //gives random numb ranging between 1-12 for representing ace to king;
    rngNumb1 = rand() % 12;
    rngNumb2 = rand() % 12;

    //players name
    string NameOfPlayer, StickOrTwist;

    //ints for dealars numbers
    //int dealersNumber1;

    //dysplays apone opening
    cout << " =============================== \n";
    cout << " ======= Welcome to 21  ======== \n";
    cout << " =============================== \n";

    //grabbs the players name
    cout << "What is your name ?\n";
    cin >> NameOfPlayer ;
    cout << "\n";

    //dysplays name of player
    cout << "welcome " << NameOfPlayer << " lets begine\n";
    cout << "\n";

    cout << "=========================== \n";
    cout << "======= The Rules  ======== \n";
    cout << "=========================== \n";
    //Rules of the game
    cout << "the rules are symple try get to as close as you can to 21\n";
    cout << "you will get a card rangeing 1-12 you can either keep the card and stick,\n";
    cout << "or you can twist and get a new card wich will add to your value.\n";
    cout << "lets get started\n\n";

    cout << "Here your first card\n";
    cout << rngNumb1 << "This is your number";
    cout << "\n";
    cout << "Would you like to stck or twist?";
    cin >> StickOrTwist;

    if (StickOrTwist == "Y" || "y")
    {
        Playertotal = rngNumb2 + rngNumb1;
        cout << "your number was :" << rngNumb1 << endl;
        cout << Playertotal << endl;

        if (Playertotal >= 21)
        {
            cout << "You are bust! you had " << Playertotal << " as your total.";
            return 0;

        }
    }
    else if (StickOrTwist == "N" || "n")
    {
        cout << "your final numb is : " << Playertotal << endl;

    }
}

