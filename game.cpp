#include <iostream>
using namespace std;

int main() {

    int player = 0;
    int cpu = 0;
    

    cout << "ROCK PAPER SCISSORS SHOOT!" << endl;
    cout << "1) Rock" << endl;
    cout << "2)Paper" << endl;
    cout << "3)Scissors" << endl;
    cin >> player;

    if (player == 1){
        cout << "You choose Rock"<< endl;
    } 
    else if (player == 2) {
        cout << "You choose Paper"<< endl;
    }
    else {
        cout<< "You choose Scissors"<<endl;
    }
    
    cpu = rand()%3+1;

  if (cpu == 1){
        cout << "CPU choose Rock"<< endl;
    } 
    else if (cpu == 2) {
        cout << "CPU choose Paper"<< endl;
    }
    else {
        cout<< "CPUs choose Scissors"<<endl;
    }
    
    // match
    if (player==cpu){
        cout << "It is a tie"<< endl;
    } 
    //user chooses rock
    else if (player==1){
        if (cpu ==2) {
            cout << "You Lose"<<endl;
        }; 
        
        if (cpu ==3) {
            cout << "You win"<< endl;
        }
        
    }

    return 0;
};