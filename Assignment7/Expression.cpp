#include "Expression.h"

using namespace calc;
using namespace std;

namespace calc{
//**************************************************************************

//constructor for literal
cLiteral::cLiteral( double x )
	 :lit_(x)
{
}

//return the literal value
double cLiteral::evaluate() const{
	return lit_;
}

//turns type double to pointer
ExpPtr Expression::Literal(double x){
	ExpPtr newLit( new cLiteral(x) );
	return newLit;
}

//**************************************************************************

// Binary Operation Constructor
BinaryOperation::BinaryOperation(ExpPtr lhs, ExpPtr rhs)
	:left_( move(lhs)) , right_(move(rhs)) 
{
}

//**************************************************************************

//Add operation conctructor
cAdd::cAdd(ExpPtr lhs, ExpPtr rhs)
	:BinaryOperation( move(lhs) , move(rhs) )
{
}

//turns type double to pointer
ExpPtr BinaryOperation::Add(ExpPtr lhs, ExpPtr rhs){
	ExpPtr newADD ( new cAdd(move(lhs), move(rhs) ) );
	return newADD;
}

//evaluates addition expression
double cAdd::evaluate() const{
	return ( left_->evaluate()  + right_->evaluate() );
}

//**************************************************************************

//Subtract Operation Constructor
cSubtract::cSubtract(ExpPtr lhs, ExpPtr rhs)
	:BinaryOperation(move(lhs),move(rhs))
{
}

//turns type double to pointer
ExpPtr BinaryOperation::Subtract(ExpPtr lhs, ExpPtr rhs){
	ExpPtr newSUBTRACT ( new cSubtract(move(lhs), move(rhs) ) );
	return newSUBTRACT;
}

//evaluates subtraction expression
double cSubtract::evaluate() const{
	return ( left_->evaluate()  - right_->evaluate() );
}

//**************************************************************************

//multiply operation constructor
cMultiply::cMultiply(ExpPtr lhs, ExpPtr rhs)
	:BinaryOperation(move(lhs),move(rhs))
{
}

////turns type double to pointer
ExpPtr BinaryOperation::Multiply(ExpPtr lhs, ExpPtr rhs){
	ExpPtr newMULTIPLY ( new cMultiply(move(lhs), move(rhs) ) );
	return newMULTIPLY;
}

//evaluates multiplication expression
double cMultiply::evaluate() const{
	return ( left_->evaluate()  * right_->evaluate() );
}

//**************************************************************************

//divide operation constructor
cDivide::cDivide(ExpPtr lhs, ExpPtr rhs)
	:BinaryOperation(move(lhs),move(rhs))
{
}

//turns type double to pointer
ExpPtr BinaryOperation::Divide(ExpPtr lhs, ExpPtr rhs){
	ExpPtr newDIVIDE ( new cDivide(move(lhs), move(rhs) ) );
	return newDIVIDE;
}

//evaluates division expression
double cDivide::evaluate() const{
	return ( left_->evaluate() / right_->evaluate() );
}




















}
