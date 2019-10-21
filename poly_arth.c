#include<gmp.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include <queue> 
#include<iostream> 
 

const int MAX = 100; 

char binaryGenerator(int n) 
{ 
	char a[MAX]; 

	for (int i = 0; i <= n; i++) { 
		itoa(i, a, 2); 
		cout << a << endl; 
	} 
} 

// Driven program 
int main() 
{ 
int p,n;
	cout<<"enter n";
	//cin>>p;
	cin>>n;
	binaryGenerator(n); 
	return 0; 
} 
