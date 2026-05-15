#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    cout<<"\n=======>Number-Hunt<========"<<endl;

    cout<<"\nChoose Range to Play :";

    int userChoice = 0;

    cin>> userChoice;

    cout<<"\nYou have choosen "<<userChoice << "."<<endl;
    
    cout<< "\nLet's start the game...."<<endl;
    while(true){

        srand(time(0));
    
        int randomNum = (rand() % userChoice) + 1;
        int userInput;
    
        cout<< "\nEnter you gussed no. : ";
        cin>> userInput;
    
        if(userInput == randomNum){
            cout<< "Perfect you have gussed..."<< endl;
        }else{
            cout<< "Better Luck Next Time..!"<< endl;
        }
    
        cout << "\nCorrect no. is "<< randomNum << endl;

    }

    return 0;

}