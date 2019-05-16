#include "Carriage.h"
#include "Pumpkin.h"
#include "date.h"
#include "PumpkinPatch.h"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//***************************************************************
PumpkinPatch PumpkinPatch::Create(size_t n, Pumpkin::Colour c){
	std::vector<Pumpkin*> patch_;
	for ( int i=0 ; i<n ; i++){
	patch_.push_back(Pumpkin::Create(c));
	}

return patch_;
}

//***************************************************************
PumpkinPatch::PumpkinPatch(vector<Pumpkin*> patch)
	:size_(patch.size())
{
 	for (int i=0;i<size_;i++){
		newPatch_.push_back(Pumpkin::Create(patch[i]->colour()));		
	}
}

//***************************************************************
PumpkinPatch::PumpkinPatch(const PumpkinPatch& copy)
	:size_(copy.size_)
{
	for (int i=0;i<size_;i++){
		newPatch_.push_back(Pumpkin::Create((copy.newPatch_[i])->colour()));		
	}
}

//***************************************************************
PumpkinPatch::~PumpkinPatch(){
	for( int i=0; i<size_; i++){
		delete newPatch_[i];
	}
}

//***************************************************************
PumpkinPatch& PumpkinPatch::operator = (const PumpkinPatch& p ){
	for( int i=0; i<size_; i++){
		delete newPatch_[i];
	}
	
	for( int i=0; i<p.size_; i++){
		newPatch_.push_back( Pumpkin::Create((p.newPatch_[i])->colour()) );
	}
return *this;
}

//***************************************************************

size_t PumpkinPatch::size() const{
	return size_;
}

//***************************************************************

Pumpkin& PumpkinPatch::operator[] (size_t i){
	return *newPatch_[i];
}

//***************************************************************

Pumpkin** PumpkinPatch::begin(){
	return &newPatch_[0];
}

//***************************************************************

Pumpkin** PumpkinPatch::end(){
	return &newPatch_[size_];
}

//***************************************************************

size_t PumpkinPatch::carve(){
	size_t x=0;
	
	for(unsigned int i=0; i<size_; i++){

				newPatch_[i]->carve();
				x++;

	}
return x;
}

//***************************************************************

size_t PumpkinPatch::light(){
	size_t y=0;
	
	for(unsigned int i=0; i<size_; i++){
		
				newPatch_[i]->light();
				y++;
	
	}
return y;
}

//***************************************************************

std::vector<Carriage> PumpkinPatch::makeCarriages(){
	std::vector<Carriage> myCarriages;
	for (unsigned int i=0;i<size_;i++){
		Pumpkin::Colour colour = newPatch_[i]->colour();
		myCarriages.push_back(Carriage(colour));		
		delete newPatch_[i];
	}	

return myCarriages;
}






