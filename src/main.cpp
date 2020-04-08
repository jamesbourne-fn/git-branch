#include <iostream>
#include <sstream>
#include <string>

/**
 * This is a utility add method
 * @param lhs The lhs value to add
 * @param rhs The rhs value to add
 * @return The result of the add 
 */
int add(int lhs, int rhs)
{
    return lhs + rhs;  
}

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

    std::stringstream ss;

    ss << "4+5=" << add(4, 5);
	print(std::cout, ss.str());

    return 0;
}
