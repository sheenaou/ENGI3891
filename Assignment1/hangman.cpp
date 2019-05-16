#include <iostream>
#include <string>
#include "hangman.h"
using namespace std;

bool playHangman(std::string word, unsigned int maxWrong){
	int length=word.length();
	char guessword[length];
	int tries=0;
	int unknownletter='*';
	int check=0;
	int win=0;
	for(int i=0;i<length;i++){			//make displayed array letters fill with stars
		guessword[i]=unknownletter;
		}

	while ((tries<maxWrong)&&(win==0)){
	int matches=guessLetter(word,(getNextGuess(guessword,length)),guessword);		//see how many of that letter is in the word, return # of letters found if any
		if(matches==0){								
			cout <<endl<< "That letter isn't in there! Please try again!";
			cout<<endl<<"you have "<<maxWrong-tries-1<<" tries left"<<endl;
			tries++;							//if letter is not found, increase tries
			}
		else {
			check+=matches;							//increas the number of correctly guessed letters						
			cout << "You found a letter! Try another!"<<endl;
			}
		if (check==length){						//if the number of correctly guessed letters is equal to the number of letters in the word you win
			win=1;
			}
	}
	if(win==1){
		return 1;				//if you win, return true
		}
return 0;				//if you exceed the number of max wrongs, return false
}



int guessLetter(const string& word, char letter, char letters[]){
	int matches=0;
	int length=word.length();
	
	for(int j=0;j<length;j++){
		if (word.at(j)==letter){			//if the guessed letter is found in the word, the displayed array will fill the correct position with the right letter
			letters[j]=letter;
			matches++;		// if letter is found, the number of matches increase	
			}
		cout <<letters[j];			//output the array with any letters that have been guessed correctly
	}
	cout <<endl<<"there are "<<matches<<" "<<letter<<"'s found"<<endl;
return matches;
}
