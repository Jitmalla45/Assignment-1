#include <iostream>
using namespace::std;
int main(){
	double y;
	cout<<"Enter y : ";
	cin>>y;
	double x= y-20.0*6/9;
	cout<<"The Value of X is: "<<x <<endl;
	return 0;
}
/* ans: The result of 120/9 is 13 (integer Division) This will Work
but may not provide the exact result you'd expect if floating-point
precision is needed.

By Changing 20 to 20.0, c++ treats the expressions as a floating-point calculation, ensuring that 120.0/9 results in 13.333 instead of 13.

This modification will give you more accurate result for X; */
