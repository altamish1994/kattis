#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
	int p=0;
	char prev=s[0],pol='U';
	for(int i=1;i<s.length();i++)
	{
		if(prev!=s[i])
		{	p++;	}
		prev=s[i];
		if(prev!='U')
		{p++;prev='U';
		}
	}
	cout<<p<<endl;
	p=0;
	prev=s[0],pol='D';
	for(int i=1;i<s.length();i++)
	{
		if(prev!=s[i])
		{	p++;	}
		prev=s[i];
		if(prev!='D')
		{p++;prev='D';
		}
	}
	cout<<p<<endl;
	p=0;
	prev=s[0];
	for(int i=1;i<s.length();i++)
	{
		if(prev!=s[i])
		{	p++;	}
		prev=s[i];
		
	}
	cout<<p<<endl;
}