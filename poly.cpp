#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
string s;//="wearediscoveredsaveyourself";
cin>>s;
string k="deceptive";
for(int i=0;i<s.length();i++)
{
s[i]=(s[i]-97+k[i%9]-97)%26 +97;
}
cout<<"encryption :"<<s<<endl;

for(int i=0;i<s.length();i++)
{
if(s[i]>k[i%9])
s[i]=(s[i]-k[i%9])+97;
else
s[i]=(s[i]+26-k[i%9])%26+97;
}
cout<<"decryption "<<s<<endl;


}
