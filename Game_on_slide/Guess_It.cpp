#include<bits/stdc++.h>

using namespace std;

int genNumber(){
    return rand() % 100 +1;
}

int playerGuess(){
    int number;
    cout<<"Please enter your number between 1 and 100: ";
    cin>>number;
    return number;
}

void printAnswer(int number, int x){
    if(number < x){
        cout<<"Your number is lower!"<<endl;
    } else if(number > x){
        cout<<"Your number is higher!"<<endl;
    } else {
        cout<<"You win!"<<endl;
    }
}



void play (){
    int x = genNumber();
    int number;
    do{
        number=playerGuess();
        printAnswer(number, x);

    } while (number != x);

}

int main(){
    srand(time(0));
    char option;
    do {
        play();
        cout<<"Play again(Y/N) ?"<<endl;
        cin>>option;
    } while (option=='Y' || option=='y');
    return 0;
}
