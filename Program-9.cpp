//Find the missing parts of the C++ program to compute remainder

//Expected input and output
//Input: 12 6
//Output: 0

#include <iostream>
using namespace std;
int main()
{    
    int a, b, r;
    std::cout << "Enter two numbers: ";
    std::cin >>a>>b; //Read the variables
    r = a % b; //find the suitable operator
    std::cout << r; //print the result
    return 0;
}
