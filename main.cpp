#include <iostream>
#include <cstdlib>

/*
Random direction generator to play at timber lakes elementary
a random direction out of 3 (up, Left, Right) will be chosen.
the students must match the direction or be considered out.


TODO
Generate basic structure (done)
Create Random Number (done)
Create a countdown maybe
Create an automatic mode

*/

using namespace std;

void menue();
void playGame(int);
bool exitGame();
void upDirection();
void leftDirection();
void rightDirection();
void credits();


int main()
{
    cout << "Hello world!" << endl;

    menue();
    //Start Game
    //Credits



    return 0;
}
//------------------------------------------------------------------------------------
void menue(){

    bool menueAgain = true;
    int input;
    int numberOfRounds;

    cout << "This is the menue function \n";

    do{
        cout << "Welcome To Direction" << endl;
    cout << "select your option:" << endl;

    cout << "(1) start game\n";
    cout << "(2) view credits \n";
    cout << "(3) end game\n";

    cin >> input;
    switch(input){
    case 1:
        cout << "Starting game ...\n Enter The Number of rounds \n >";
        cin >> numberOfRounds;
        playGame(numberOfRounds);
        break;
    case 2:
        //Viewing Credits
        credits();
        break;
    case 3:
        //end
        menueAgain = exitGame();
        break;
    default:
        cout << "Incorrect Input \n";
        cout << "Try again\n";
        break;

    }

    }while(menueAgain);


}
//-------------------------------------------------------------------------------

void playGame(int numberOfRounds){
    cout << "Play Game\n";
    // pause system when ready press enter
    for(int i = 0; i < numberOfRounds;i++){
        // round ___
        // randomly generate a direction
        //Direction image
        //pause system to generate next image

        while(i != numberOfRounds){

            cout << "Round " << i << endl;
            cout << "Ready ? ..." << endl;
            system("pause");
            int randomNum = rand() % 3;
            switch(randomNum)
            {
            case 0:
                upDirection();
                break;
            case 1:
                leftDirection();
                break;
            case 2:
                rightDirection();
                break;
            default:
                cout << "inpropper rand num generated " << endl;
                cout << "num generated = " << randomNum << endl;
                break;
            }
        }



    }
    //how many rounds
    //starting now
    // Round ____
    //generate direction
    //pause wait for input
    //next round continue until rounds are over
    //
    //Need Random number generator
}

bool exitGame(){
    cout << "Exiting Game... Press enter to exit \n";
    //add a system pause
    system("pause");
    return false;
}
//----------------------------------------------------------------------------------

void upDirection(){
    cout << "UP" << endl;
}

void leftDirection(){
    cout << "LEFT" << endl;
}

void rightDirection(){
    cout << "RIGHT" << endl;
}

void credits(){
    cout << "CREDITS" << endl;
}
