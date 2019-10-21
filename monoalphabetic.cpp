#include <bits/stdc++.h>
using namespace std;
void cipher(string &a,string key)
{
	for(int i = 0;i < a.length();i++){
		a[i] = key[a[i] - 'a'] ;
	}
}
void decipher(string &a,string key)
{
	for(int j = 0;j < a.length();j++)
	{
		for(int i = 0;i < key.length();i++){
			if(key[i] == a[j]){
				a[j] = i + 'a';
				break;
			} 
		}
	}
}
int main()
{
	string a;
	string key = "dkvqfibjwpescxhtmyauolrgzn";
	cout<<"Enter plain text"<<endl;
	cin>>a;
	cipher(a,key);
	cout<<"cipher text is "<<a<<endl;
	decipher(a,key);
	cout<<"decipher text is "<<a<<endl;
	return 0;
}
