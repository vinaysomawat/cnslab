#include<bits/stdc++.h>
using namespace std;

string temp="abcdefghijklmnopqrstuvwxyz";
map<char, int> m;

string encrypt(string s,int n, int k)
{
	for(int i=0;i<n;i++)
	{
		if(s[i]!=' ')
		s[i]=temp[(m[s[i]]+k)%26];
	}
	return s;
}

string decrypt(string s, int n, int k)
{
	for(int i=0; i<n;i++)
	{
		if(s[i]!=' ')
		{
			int j=m[s[i]]-k;
			if(j>=0)
			s[i]=temp[(j)%26];
			else
			s[i]=temp[(26-abs(j))%26];
		}
	}
	return s;
}

int main()
{	
	int k,i;
	string s,s1;
	cout<<"Enter the plain text: ";
	getline(cin,s1);

	for(i=0;i<26;i++)
	{
		m[temp[i]]=i;
	}

	cout<<"Enter the key: ";
	cin>>k;
cout<<endl;

	int n=s1.length();
	s= encrypt(s1,n,k);
	cout<<"Encrypted key: ";
	cout<<s<<endl;

	cout<<endl;

	s=decrypt(s,n,k);
	cout<<"descryted key: ";
	cout<<s<<endl;
}
