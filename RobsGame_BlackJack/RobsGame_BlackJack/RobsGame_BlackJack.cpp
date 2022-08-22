// RobsGame_BlackJack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void Rules()
{
    cout << "=========================== \n";
    cout << "======= The Rules  ======== \n";
    cout << "=========================== \n";
    //Rules of the game
    cout << "the rules are symple try get to as close as you can to 21\n";
    cout << "you will get a 2 number rangeing 1-12 you can either keep the numbers and stick,\n";
    cout << "or you can twist and get a new number wich will add to your value.\n";
    cout << "lets get started\n\n";
}
int main()
{
    //values of cards
    int rngNumb1, rngNumb2, Playertotal = 0, rngNumb3, dealersNumber , rngNumbdealer1, rngNumbdealer2;

    //gives random numb ranging between 1-12 for representing ace to king;
    rngNumb1 = rand() % 12;
    rngNumb2 = rand() % 12;

    rngNumbdealer1 = 11;
    rngNumbdealer2 = rand() % 11;

    dealersNumber = rngNumbdealer2 + rngNumbdealer1;
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

    //function contaning the rules
    Rules();

    //dysplays name of player
    cout << "welcome " << NameOfPlayer << " lets begine\n";
    cout << "\n";

    //Calculationg player start numbers
    Playertotal = rngNumb1 + rngNumb2;
    cout << "Here your first 2 numbers\n";
    cout << rngNumb1 << ", " << rngNumb2 << " This is your numbers";
    cout << "your total is" << Playertotal << "\n";

    //do loop containg if statments so if the player was to go over a spasific value then it will do as follows
    // 1. over 21 will make the player bust and lose and show delers value
    // 2. equle to 21 then the player instanlty wins
    // 3. can requset or deney another card
    do
    {
        //1.
        if (Playertotal > 21)
        {
            cout << "You are bust you have lost against the dealer!!\n";
            cout << "His total was :" << dealersNumber;
            break;
        }
        //2.
        else if (Playertotal == 21)
        {

            cout << "congatulations you have a total of 21 the best score you won against the dealer!!";
            break;
        }
        //3.
        else 
        {
            cout << "do you want anotehr card? (y/n)";
            cin >> StickOrTwist;

            rngNumb3 = (1 + rand() % 10);
            cout << "Number: " << rngNumb3 << endl << endl;
            cout << "Your total now is: " << Playertotal + rngNumb3 << endl << endl;
            Playertotal = Playertotal + rngNumb3;

            

        }

    }
    // a while loop for the input from the qustion y/Y being yes
    while (StickOrTwist == "y");
   

    return 0;
}

1