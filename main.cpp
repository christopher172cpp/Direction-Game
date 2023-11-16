#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

/*
Random direction generator to play at timber lakes elementary
a random direction out of 3 (up, Left, Right) will be chosen.
the students must match the direction or be considered out.


TODO
Generate basic structure (done)
Create Random Number (done)
Create the function to loop # of times (done)
Create a countdown maybe (in progress)
Create an automatic mode

*/

using namespace std;

void menue();
void playGame(int);
void countDown(int);
bool exitGame();
void upDirection();
void leftDirection();
void rightDirection();
void credits();


int main()
{
    menue();
    return 0;
}
//------------------------------------------------------------------------------------
void menue(){
/* old welecome
    cout << "$$___$$___________$$__________________________________" << endl;
    cout << "$$___$$__$$$$_____$$_____$$$$____$$$$___$$$$$$___$$$$_" << endl;
    cout << "$$_$_$$_$$__$$____$$____$$__$$__$$__$$__$$_$_$$_$$__$$" << endl;
    cout << "$$_$_$$_$$__$$____$$____$$______$$__$$__$$_$_$$_$$__$$" << endl;
    cout << "$$_$_$$_$$$$$$____$$____$$______$$__$$__$$_$_$$_$$$$$$" << endl;
    cout << "_$$_$$__$$________$$____$$______$$__$$__$$_$_$$_$$____" << endl;
    cout << "_$$_$$__$$________$$____$$__$$__$$__$$__$$_$_$$_$$____" << endl;
    cout << "_$$_$$___$$$$___$$$$$$___$$$$____$$$$___$$___$$__$$$$\n" << endl;
*/

cout << "                                                    _..._                  .-'''-.                " << endl;
cout << "_______                                          .-'_..._''.              '   _    \\              " << endl;
cout << "\\  ___ `'.   .--.              __.....__       .' .'      '.\\      .--. /   /` '.   \\    _..._    " << endl;
cout << " ' |--.\\  \\  |__|          .-''         '.    / .'                 |__|.   |     \\  '  .'     '.  " << endl;
cout << " | |    \\  ' .--..-,.--.  /     .-''\"'-.  `. . '               .|  .--.|   '      |  '.   .-.   . " << endl;
cout << " | |     |  '|  ||  .-. |/     /________\\   \\| |             .' |_ |  |\\    \\     / / |  '   '  | " << endl;
cout << " | |     |  ||  || |  | ||                  || |           .'     ||  | `.   ` ..' /  |  |   |  | " << endl;
cout << " | |     ' .'|  || |  | |\\    .-------------'. '          '--.  .-'|  |    '-...-'`   |  |   |  | " << endl;
cout << " | |___.' /' |  || |  '-  \\    '-.____...---. \\ '.          .|  |  |  |               |  |   |  | " << endl;
cout << "/_______.'/  |__|| |       `.             .'   '. `._____.-'/|  |  |__|               |  |   |  | " << endl;
cout << "\\_______|/       | |         `''-...... -'       `-.______ / |  '.'                   |  |   |  | " << endl;
cout << "                 |_|                                      `  |   /                    |  |   |  | " << endl;
cout << "                                                             `'-'                     '--'   '--' " << endl;



    bool menueAgain = true;
    int input;
    int numberOfRounds;



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

            cout << "Round " << i +1 << endl;
            cout << "Ready ? ...";
            countDown(5);
            cout << endl;
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

            cout << "Next Round" << endl;
            system("pause");

    }

}

void countDown(int seconds){
    for(int i = 0; i < seconds; i++){
        cout << " " << seconds - i << " " ;
        this_thread::sleep_for(chrono::seconds(1));
    }
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
    cout << "     ." << endl;
cout << "   .:;:." << endl;
cout << " .:;;;;;:." << endl;
cout << "   ;;;;;" << endl;
cout << "   ;;;;;" << endl;
cout << "   ;;;;;" << endl;
cout << "   ;;;;;" << endl;
cout << "   ;:;;;" << endl;
cout << "   : ;;;" << endl;
cout << "     ;:;" << endl;
cout << "   . :.;" << endl;
cout << "     . :" << endl;
cout << "   .   ." << endl;
cout << "" << endl;
cout << "      ." << endl;

}

void leftDirection(){
    cout << "LEFT" << endl;
    cout << "       ." << endl;
cout << "     .;;............ .." << endl;
cout << "   .;;;;::::::::::::.." << endl;
cout << "    ':;;:::::::::::: . ." << endl;
cout << "      ':" << endl;

}

void rightDirection(){
    cout << "RIGHT" << endl;
    cout << "                  ." << endl;
cout << "   .. ............;;." << endl;
cout << "    ..::::::::::::;;;;." << endl;
cout << "  . . ::::::::::::;;:'" << endl;
cout << "                  :'" << endl;

}

void credits(){
    cout << "CREDITS: Coded / created by Christopher Bain\n" << endl;
    cout << "I wanna thank me for taking no days off \n";
    cout << "Made possible with the help of Josias Bain \n";
    cout << "This is the coded version of a game that I made up on the spot to keep the kids busy at TLE Extended Day\n";
    cout << "In the first version of the game we would stand on stage and Josias would choose a random direction \n";
    cout << "the reason down is not an option is because when we did this game in person\n";
    cout << "if he choose down the kids wouldnt be able to see his hands because he isnt facing them";

}
