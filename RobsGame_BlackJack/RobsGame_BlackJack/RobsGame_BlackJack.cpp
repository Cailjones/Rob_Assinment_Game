// RobsGame_BlackJack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void title()
{
    //dysplays apone opening
    cout << " =============================== \n";
    cout << " ======= Welcome to 21  ======== \n";
    cout << " =============================== \n";

}
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
    int rngNumb1, rngNumb2, Playertotal = 0, rngNumb3, dealersNumber, rngNumbdealer1, rngNumbdealer2;

    //gives random numb ranging between 1-11;
    srand(time(0));

    rngNumb1 = (1 + rand() % 10);
    rngNumb3 = (1 + rand() % 10);
    rngNumb2 = (1 + rand() % 10);

    rngNumbdealer1 = 10;
    rngNumbdealer2 = rand() % 11;

    dealersNumber = rngNumbdealer2 + rngNumbdealer1;
    //players name
    string NameOfPlayer, goAgain, goAgain1, StickOrTwist;
   
    //function contaning the title
    title();

    //grabbs the players name
    cout << "What is your name ?\n";
    cin >> NameOfPlayer ;
    cout << "\n";

    //function contaning the rules
    Rules();
    // allows the player to play again
    do{

        //dysplays name of player
        cout << "Welcome " << NameOfPlayer << " lets begine.\n";
        cout << "\n";

        //Calculationg player start numbers
        Playertotal = rngNumb1 + rngNumb2;
        cout << "Here your first 2 numbers\n";
        cout << rngNumb1 << ", " << rngNumb2 << " This is your numbers.";
        cout << "Your total is" << Playertotal << "\n";

        //do loop containg if statments so if the player was to go over a spasific value then it will do as follows
        // 1. over 21 will make the player bust and lose and show delers value
        // 2. equle to 21 then the player instanlty wins
        // 3. can requset or deney another card
        do
        {

            if (Playertotal > 21)
            {
                cout << "You are bust you have lost against the dealer!!\n";
                cout << "His total was : " << dealersNumber << "\n";
                break;
            }

            else if (Playertotal == 21)
            {

                cout << "Congatulations you have a total of 21 the best score you won against the dealer!!\n";
                break;
            }

            else
            {
                cout << "Do you want anotehr card? (y/n)\n";
                cin >> StickOrTwist;

                if (StickOrTwist == "y")
                {
                    Playertotal = Playertotal + rngNumb3;
                    cout << "Your total is now : " << Playertotal << "\n";
                }
            }

        } while (StickOrTwist == "y");
        // a while loop for the input from the qustion y/Y being yes loop continues as long as y is inputed

        //nested if statment when input of n is form the do loop
        if (StickOrTwist == "n")
        {
            //gives the 2 total dealers and player
            cout << "Your Total was :\n " << Playertotal;
            cout << "The dealers totasl was :\n " << dealersNumber;

            // if the players total id grater than the dealers then the player wins
            if (Playertotal >= dealersNumber)
            {
                cout << "You win against the dealer congatulatuions!!\n ";
            }

            //otherwise the player loses
            else
            {
                cout << "You have lost against the dealer unlucky maybe next time.\n ";

            }

        }
        
        cout << "would you like to go again ? y/n";
        cin >> goAgain1;
        cout << "\n\n\n\n";
    } 
    while (goAgain1 == "y");
    
    return 0;
}

