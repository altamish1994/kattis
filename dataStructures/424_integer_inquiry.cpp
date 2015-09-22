#include<iostream>
#include<string>
using namespace std;
string s[100];int i=-1;
string sum;
void add(string x,string y);
int main()
{
	sum="";
	for(int a=sum.length();a<105;a++){
			sum.insert(0,"0");
	}
	while(1){
		i++;
		
		cin>>s[i];
		if(s[i]=="0")break;
		for(int a=s[i].length();a<105;a++){
			s[i].insert(0,"0");
		}
		add(sum,s[i]);
	}
	bool con=true;
	int x=0;
	while(sum[x]=='0'){x++;}
	for(int a=x;a<105;a++){
		con=false;
		cout<<sum[a];
	}
	if(con)
		cout<<"0";
	cout<<endl;
}
void add(string x, string y){
	int r=0,c=0;
	for(int a=104;a>=0;a--){
		r=((x[a]-'0')+(y[a]-'0')+c)%10;
		c=((x[a]-'0')+(y[a]-'0')+c)/10;
		sum[a]=char(r+'0');
	}
}