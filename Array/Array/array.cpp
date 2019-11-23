#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
	int num[5];
	int x;
	int small;

	for(x=0;x<5;x++)
	{
		cout<<x+1<<" :  Enter Number : ";
		cin>>num[x];
	}

	small=num[0];

	for(x=1;x<5;x++)
	{
		if(num[x]<small)
			small=num[x];
	}

	cout<<"\nSmallest Number is :"<<small;
    
	getch();
}