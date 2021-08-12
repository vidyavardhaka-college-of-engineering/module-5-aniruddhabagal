//Find the missing in the given C++ program which computes the area of a rectangle.
//Expected input & output:
//Input: 4 8
//Output: 32

#include <iostream>
using namespace std;
int main() 
{
   
   int l, b, area; // Declare Variables
   std::cout << "\nEnter the Length and Breadth of Rectangle : ";
   std::cin >> l >> b;
   
   area = l*b;    //complete the missing code to caluculate area
   std::cout << area;
   return 0;
}
