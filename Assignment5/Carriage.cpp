#include "Carriage.h"
#include "Pumpkin.h"
#include "date.h"

#include <iostream>
#include <vector>
#include <string>

Carriage::Carriage(Pumpkin::Colour c)
	:colour_(c), day_(currentDate())
{
};

Pumpkin::Colour Carriage::colour() const{

return colour_;
}

Pumpkin* Carriage::change(){
	if( day_ < currentDate() ){
		return Pumpkin::Create(colour_);
		}
	else{
		return nullptr;
	}
}


