#include<bits/stdc++.h>

using namespace std;

const string wordList[] = {"angle", "ant"};
const int wordCount = sizeof(wordList) / sizeof(string);
const int maxScore = 100;

string chooseWord();
bool playGame(int userScore, string systemWord);
string inputFromUser();
void wordSize(int systemWord_length);
int currentScore(int userScore, bool flag);
bool checkWord(string systemWord, string userWord);
char playAgain();

int main(){
    while (1){
        srand(time(0));
        string systemWord = chooseWord();
        wordSize(systemWord.length());
        int userScore = maxScore;
        playGame(userScore, systemWord);
        char option = playAgain();
        if(option == 'n' || option == 'N'){
            break;
        }
    }
    return 0;
}

string chooseWord()
{
	int randomIndex = rand() % wordCount;
    return wordList[randomIndex];
}

bool playGame(int userScore, string systemWord){
    string userWord;
    bool flag = false;
    while(1){
        if(userScore <= 0){
            cout << "Your score less than 0! You lose."<<endl;
            return false;
        }
        userWord = inputFromUser();
        if (checkWord(systemWord, userWord)){
            flag = true;
            userScore = currentScore(userScore, flag);
            return true;
        } else {
            userScore = currentScore(userScore, flag);
        }
    }
}

string inputFromUser(){
    string input;
    cout<< "Please type your answer: " << endl;
    cin>>input;
    return input;
}

void wordSize(int systemWord_length){
    cout << "There are " << systemWord_length << " characters" <<endl;
}

int currentScore(int userScore, bool flag){
    if(flag == false){
        userScore-=10;
    }
    cout <<"Your score is: " << userScore << "." <<endl;
    return userScore;
}

bool checkWord(string systemWord, string userWord){
    if(userWord.length() < systemWord.length()){
        cout<<"Error: Less than "<<systemWord.length()<<" characters !" <<endl;
        return false;
    } else if (userWord.length() < systemWord.length()){
        cout<<"Error: More than "<<systemWord.length()<<" characters !" <<endl;
        return false;
    }else if (userWord.length() == systemWord.length() && userWord == systemWord){
        cout << "Exactly !" << endl;
        return true;
    }
    cout<<"Not Correct! Please try again."<<endl;
    return false;
}

char playAgain(){
    char option;
    cout << "Do you want to play again? Press ANY KEYS to play again or N to quit."<<endl;
    cin >> option;
    return option;
}
