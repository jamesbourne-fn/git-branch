#ifndef CALCULATOR_H_
#define CALCULATOR_H_

class Calculator
{
public:
	/**
	 * This is a utility add method
	 * @param lhs The lhs value to add
	 * @param rhs The rhs value to add
	 * @return The result of the add 
	 */
	int add(int lhs, int rhs);	

	/**
	 * This is a utility subract method
	 * @param lhs The lhs value to subtract from
	 * @param rhs The rhs value to subtract
	 * @return The result of the subtract 
	 */
	int subtract(int lhs, int rhs);

};

#endif