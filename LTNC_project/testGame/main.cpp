#include<bits/stdc++.h>

using namespace std;

const string wordList[] = {"angle", "ant"};
const int wordCount = sizeof(wordList) / sizeof(string);
const int maxScore = 1000;

string chooseWord();
string inputFromUser();
void wordSize(int systemWord_length);
bool checkWord(string systemWord, string userWord);

int main(){
    srand(time(0));
    string systemWord = chooseWord();
    wordSize(systemWord.length());
    string userWord = inputFromUser();
    int yourScore = maxScore;
    if(checkWord(systemWord, userWord)){

    }
    return 0;
}

string chooseWord()
{
	int randomIndex = rand() % wordCount;
    return wordList[randomIndex];
}

string inputFromUser(){
    string input;
    cout<< "Please answer: " << endl;
    cin>>input;
    return input;
}

void wordSize(int systemWord_length){
    cout << "There are " << systemWord_length << " characters" <<endl;
}

bool checkWord(string systemWord, string userWord){
    if(userWord.length() < systemWord.length()){
        cout<<"Error: Less than "<<systemWord.length()<<" characters !" <<endl;
        return false;
    } else if (userWord.length() < systemWord.length()){
        cout<<"Error: More than "<<systemWord.length()<<" characters !" <<endl;
        return false;
    } else if (userWord == systemWord){
        cout << "Exactly !" << endl;
        return true;
    }
    return false;
}
