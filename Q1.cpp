#include <iostream>
using namespace::std;
int main(){
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	if(num>=365){
		cout<<(num/365)<<" years ";
		num%=365;
	}
	if(num>=7){
		cout<<(num/7)<<" weeks ";
		num%=7;
	}
	cout<<num<<" days"<<endl;
	return 0;
}
