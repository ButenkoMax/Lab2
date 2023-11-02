#include <iostream>
#include <cmath>
using namespace std;




int main()
{
 
 float z,a;
 cout << "a = ";
 cin >> a;
 

  z = (((a+2)/sqrt(2*a))-(a/(sqrt(2*a)+2))+(2/a-sqrt(2*a)))*(sqrt(a)-sqrt(2))/(a+2) ;
  cout << z;

}