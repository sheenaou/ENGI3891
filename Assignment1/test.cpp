#include <iostream>
#include "hangman.h"
using namespace std;


int main(int argc, char *argv[]){
	bool winner=0;	
	char letter;
	std::string word;
	string name;
	cout << "Welcome to hangman!! What's your name?"<<endl;
	cin >> name;
	cout << "Let's play a game "<< name<<"! get someone to input a word for you"<<endl;
	cin >>  word;
	cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"Let's Begin"<<endl;
	winner=playHangman(word);
	
	if (winner==1){

                cout<<"You win!"<<endl;

        }
        if (winner==0){

                cout<<"You were hanged! You lose!"<<endl;
		cout<<"The word was "<<word<<endl;
        }

return 0;
}




char getNextGuess(const char letters[], unsigned int length){

        char guessedletter;

        for (int i=0; i<length; i++){
                cout<<letters[i];
        }

        cout<<endl<<"Pick a letter"<<endl;

        cin>>guessedletter;

        return guessedletter;

}
