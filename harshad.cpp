#include<iostream>
using namespace std;
int main()
{
	int num, n, temp=0, sum=0;

	cout<<"Enter the number: ";
	cin>>num;
		if(num<=0)
	{
		cout<<"invalid";
		exit(0);
	}
	temp=num;
	while(temp!=0)
	{
		int rem=temp%10;
		sum=sum+rem;
		temp/=10;
	}
	if(num%sum==0)
	{
		cout<<"harshad number1";
	}
	else
	{
		cout<<"not a harshad number";
 }
	return 0;
}
