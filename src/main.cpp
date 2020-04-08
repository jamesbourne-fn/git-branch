#include <iostream>
#include <string>

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
    return 0;
}
