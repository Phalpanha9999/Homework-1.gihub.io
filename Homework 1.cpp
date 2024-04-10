#include <iostream>
using namespace std;
int main() 
{
 	int number1;
 	int number2;
 	int number3;
	int  total;
 	
 	cout <<"Calculator"endl;
 	cout <<"Please Enter 2 number to Calculator:"<<endl;
 	
	cout <<"First number = ";
 	cin >> number1;
 	cout <<"Secound number = ";
 	cin >> number2;
 	cout <<"Third number = ";
 	cin>> number3;
 	
 	cout<<number1<<"+"<<number2<<"+"<<number3<<"="<<number1+number2+number3<<endl;
 	cout<<number1<<"*"<<number2<<"*"<<number3<<"="<<number1*number2*number3<<endl;
 	cout<<number1<<"-"<<number2<<"-"<<number3<<"="<<number1-number2-number3<<endl;
 	cout<<number1<<"/"<<number2<<"/"<<number3<<"="<<number1/number2/number3<<endl;
 	
 	
  return 0;
}