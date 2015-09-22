#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
//#define gc getchar_unlocked
//
//void scanint(int &x)
//{
//    register int c = gc();
//    x = 0;
//    for(;(c<48 || c>57);c = gc());
//    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
//}
int main()
{
	int a,b,count;
	map<long long int,int> lis;
	bool con=true;
	char arr[1200];
	while(con){
		scanf("%d%d",&a,&b);
		//scanint(a);
		//scanint(b);
		//cin>>a>>b;
		lis.clear();
		count=0;
		if(a==0 && b==0){con=false;}
		else{
			int te;
			for(int x=0;x<a;x++){
				//scanint(te);
				scanf("%d",&te);
				//cin>>te;
				lis[te]=1;
			}
			for(int x=0;x<a;x++){
				//scanint(te);
				scanf("%d",&te);//cin>>te;
				if(lis[te]==1){
					count++;	
				}
			}
			cout<<count<<endl;
		}
	}
	return 0;
}