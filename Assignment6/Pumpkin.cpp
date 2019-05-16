#include "Carriage.h"
#include "Pumpkin.h"
#include "date.h"

#include <iostream>
#include <vector>
#include <string>
using namespace std;


PumpkinException::PumpkinException(string message)
	:error_(message)
{
}

string PumpkinException::message() const {
return error_;
}

Pumpkin* Pumpkin::Create(Pumpkin::Colour c){
Pumpkin *pump =new Pumpkin();
pump->colour_=c;

return pump;
}

vector<Pumpkin>
		Pumpkin::CreatePumpkins(unsigned int n, Pumpkin::Colour c, bool carved){
	
	static Pumpkin *pumpkin_=Pumpkin::Create(c);	
	vector<Pumpkin> massPumpkins( n , *pumpkin_) ;
	
	if(carved)
	 for( int i =0; i<n; i++){
		massPumpkins[i].carved_=carved;
		
		}		 
return massPumpkins;
}

Pumpkin::Colour Pumpkin::colour() const {
return colour_;
}

bool Pumpkin::carved() const {
	return carved_;
}

void Pumpkin::carve(){

		if(carved_==false){
			carved_=true;
			}
		else if(carved_==true){
			throw PumpkinException("pumpkin is already carved") ;
			}
}

bool Pumpkin::alight() const {
	if (lit_==true and carved_==true){
		return true;
	}
return false;
}

void Pumpkin::light(){
	alight();
		if (lit_==false and carved_==true){
			lit_=true;
		}
		else if (lit_==true or carved_==false){
			throw PumpkinException("Pumpking is alread lit or isn't carved");
		}
}
