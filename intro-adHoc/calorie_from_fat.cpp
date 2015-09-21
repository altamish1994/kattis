#include<iostream>
#include<string>
using namespace std;
void calculateFat();
int main()
{
	string s;
	int i[5];
	char c[5];
	int m[5] = {9,4,4,4,7};
	float totF=0,totC=0;
	while(1)
	{
		cin>>s;
		if(s[0]=='-'){
			calculateFat();
			int fin=(totF*10000)/totC;
			if(fin%100>49){
				fin=fin/100;fin++;
			}
			else{fin=fin/100;}
			cout<<fin<<"%"<<endl;
			totF=totC=0;
			cin>>s;
			if(s[0]=='-'){
				break;
			}
		}
		c[0]=s[s.length()-1];
		s[s.length()-1]='\0';
		i[0]=stoi(s);
		for(int a=1;a<5;a++){
			cin>>s;
			c[a]=s[s.length()-1];
			s[s.length()-1]='\0';
			i[a]=stoi(s);
		}
		float tempT=0,tempF=0,tempP=0;
		//for(int a=0;a<5;a++){cout<<i[a]<<" "<<c[a]<<endl;}
		///
		if(c[0] == 'g' || c[0] == 'C'){
			for(int a=0;a<5;a++){
				if(c[a]=='g'){
					tempT+=i[a]*m[a];
					if(a==0){
						tempF+=i[a]*m[a];
					}}
				else if(c[a] == 'C'){
					tempT+=i[a];
					if(a==0){
						tempF+=i[a];
					}}
				else{
					tempP+=i[a];
				}
			}
			float res=(tempT*100.0)/(100-tempP);
		totC+=res;
		totF+=tempF;
		}
		//////
		else{
			for(int a=0;a<5;a++){
				if(c[a]=='g'){
					tempT+=i[a]*m[a];
					if(a==0){
						tempF+=i[a]*m[a];
					}}
				else if(c[a] == 'C'){
					tempT+=i[a];
					if(a==0){
						tempF+=i[a];
					}}
				else{
					tempP+=i[a];
				}
			}
			float res=(tempT*100.0)/(100-tempP);
			totC+=res;
			totF+=(res*i[0]/100);
		}
		//////
		
		/////
	}
}

void calculateFat()
{
}