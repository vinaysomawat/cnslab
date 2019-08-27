#include<gmp.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<iostream>

const int MAX=100;

char binaryGenerator(int n)
{
	char a[MAX];

	for(int i=0; i<=n; i++)
	{
		itoa(i,a,2);
		cout<<a<<endl;
	}
}


int main()
{
	int p,n;
	cout<<"Enter n: ";
	cin>>n;
	binaryGenerator(n);
	return 0;
}
