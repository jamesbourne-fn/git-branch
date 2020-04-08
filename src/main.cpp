#include <iostream>
#include <sstream>
#include <string>
#include "Calculator.h"

/**
 * This is a utility method to print to output
 * to a stream
 * @param os This is the output stream
 * @param msg This is the message to print
 */
void print(std::ostream& os, std::string msg)
{
    os << msg << std::endl;
}

/** 
 *  This is the main method
 */
int main(int argc, char *argv[]) 
{
    print(std::cout, "Hello World!!");

    Calculator calc;
    std::stringstream ss;

    ss << "4+5=" << calc.add(4, 5);
	print(std::cout, ss.str());


    return 0;
}
