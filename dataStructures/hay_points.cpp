#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<string,int> lis;
	int n,v,p;
	long long int t;
	string s;
	cin>>n>>p;
	while(n--)
	{
		cin>>s>>v;
		lis[s]=v;
	}
	while(p--){
		t=0;
		while(cin>>s){
			if(s==".")break;
			t+=lis[s];
		}
		cout<<t<<endl;
	}
	return 0;
}