#include<iostream>
using namespace std;

int CountDigit( long long n)
  {
  	int count =0;
  	while(n!=0)
  	{
  		n=n/10;
  		++count;
  	}
  	return count;
	}
	int main(void)
	{
		long long n=345289456;
		cout<<"Number of digits:"<<CountDigit(n);
		return 0;
	
  }
