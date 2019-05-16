/*!
 * @file      Expression.h
 * @brief     Declaration of the calc::Expression class.
 *
 * @author    Jonathan Anderson <jonathan.anderson@mun.ca>
 * @copyright (c) 2016 Jonathan Anderson. All rights reserved.
 * @license   Apache License, Version 2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License.  You may obtain a copy
 * of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#if !defined(EXPRESSION_H)
#define EXPRESSION_H

#include <memory>

namespace calc {

class Expression;
typedef std::unique_ptr<Expression> ExpPtr;

//! A mathematical operation.
class Expression
{
public:
	//! Evaluate this operation (reduce to a single value).
	virtual double evaluate() const = 0;

	//! Construct the simplest expression: a literal value.
	static ExpPtr Literal(double);
};


//! An operation on two operands, which are themselves expressions.
class BinaryOperation : public Expression
{
public:
	//! Construct an operation that will add two expressions together.
	static ExpPtr Add(ExpPtr lhs, ExpPtr rhs);

	//! Construct an operation to subtract two expressions.
	static ExpPtr Subtract(ExpPtr lhs, ExpPtr rhs);

	//! Construct an operation to multiply two expressions.
	static ExpPtr Multiply(ExpPtr lhs, ExpPtr rhs);

	//! Construct an operation to divide two expressions.
	static ExpPtr Divide(ExpPtr lhs, ExpPtr rhs);

protected:
	//! Constructor: must be implemented, should not be modified.
	BinaryOperation(ExpPtr lhs, ExpPtr rhs);

	ExpPtr left_;
	ExpPtr right_;
};




class cLiteral: public Expression
{
	public:
	double evaluate() const override;
	cLiteral (double);

	protected:
	double lit_;
};

class cAdd: public BinaryOperation
{
	public:
	cAdd(ExpPtr lhs, ExpPtr rhs);
	double evaluate() const override;
};

class cSubtract: public BinaryOperation
{
	public:
	cSubtract(ExpPtr lhs, ExpPtr rhs);
	double evaluate() const override;
};

class cMultiply: public BinaryOperation
{
	public:
	cMultiply(ExpPtr lhs, ExpPtr rhs);
	double evaluate() const override;
};

class cDivide: public BinaryOperation
{
	public:
	cDivide(ExpPtr lhs, ExpPtr rhs);
	double evaluate() const override;
};


} // namespace calc



#endif  // !defined(EXPRESSION_H)
