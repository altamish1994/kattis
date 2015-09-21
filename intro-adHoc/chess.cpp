#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
	vector<int> lpos1,lpos2;
	int t,x1,x2,y1,y2;
	char c1,c2;
	cin>>t;
	while(t--){
		cin>>c1>>y1>>c2>>y2;
		lpos1.clear();
		lpos2.clear();
		x1=c1-'A'+1;
		x2=c2-'A'+1;
		if(x1 == x2 && y1 == y2){
			cout<<"0 "<<(char)(x1+'A'-1)<<" "<<y1<<endl;
		}
		else
		{
			int dist=abs(x1-x2) + abs(y1-y2);
			if(dist%2==1)
			{
				cout<<"Impossible"<<endl;
			}
			else
			{
				for(int a=x1-1,b=y1-1;a>0 && b>0;a--,b--){
						lpos1.push_back(a*10+b);
				}
				for(int a=x1+1,b=y1-1;a<9 && b>0;a++,b--){
						lpos1.push_back(a*10+b);
				}
				for(int a=x1-1,b=y1+1;a>0 && b<9;a--,b++){
						lpos1.push_back(a*10+b);
				}
				for(int a=x1+1,b=y1+1;a<9 && b<9;a++,b++){
						lpos1.push_back(a*10+b);
				}
				int temp=x2*10 + y2;
				bool found = false;
				for(int a=0;a<lpos1.size();a++){
					if(temp==lpos1[a]){found=true;cout<<"1 "<<(char)(x1+'A'-1)<<" "<<y1<<" "
						<<(char)(x2+'A'-1)<<" "<<y2<<endl;}
				}
				if(found==false){
					for(int a=x2-1,b=y2-1;a>0 && b>0;a--,b--){
						lpos2.push_back(a*10+b);
					}
					for(int a=x2+1,b=y2-1;a<9 && b>0;a++,b--){
						lpos2.push_back(a*10+b);
					}
					for(int a=x2-1,b=y2+1;a>0 && b<9;a--,b++){
						lpos2.push_back(a*10+b);
					}
					for(int a=x2+1,b=y2+1;a<9 && b<9;a++,b++){
						lpos2.push_back(a*10+b);
					}

					for(int a=0;a<lpos1.size() && !found;a++){
						for(int b=0;b<lpos2.size() && !found;b++){
							if(lpos1[a]==lpos2[b]){found=true;cout<<"2 "<<(char)(x1+'A'-1)<<" "<<y1<<" "
								<<(char)(lpos1[a]/10+'A'-1)<<" "<<lpos1[a]%10<<" "<<(char)(x2+'A'-1)<<" "<<y2<<endl;}
					}}
				}
			}
		}

	}
	return 0;
}