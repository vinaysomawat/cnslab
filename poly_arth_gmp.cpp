#include<gmp.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include <queue> 
#include<iostream>
#include<stdlib.h> 
#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 
 

const int MAX = 100; 

char binaryGenerator(int n) 
{ 
	char a[MAX]; 

	for (int i = 0; i <= n; i++) { 
		itoa(i, a, 2); 
		cout << a << endl; 
	} 
} 
int main() 
{ 
int p,n;
	cout<<"enter n";
	//cin>>p;
	cin>>n;
	binaryGenerator(n); 
	return 0; 
} 


/*void generatePrintBinary(int n) 
{ 
	queue<string> q; 
	q.push("1"); 
	while (n--) 
	{ 
		string s1 = q.front(); 
		q.pop(); 
		cout << s1 << "\n"; 

		string s2 = s1; 
		q.push(s1.append("0")); 
		q.push(s2.append("1")); 
	} 
} 


int main(){
	int p,n;
	cout<<"enter p,n";
	//cin>>p;
	cin>>n;
	generatePrintBinary(n-1);
	return 0;

}
*/
