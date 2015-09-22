#include<cstdio>
#include <iostream>
#include<vector>
using namespace std;
#define N 1000005

vector<int> res[N];
	int arr[N];
int main()
{
	int eNum,que,val,occ;
	while(scanf("%d",&eNum) != EOF){
		scanf("%d",&que);
		//if(eNum==0)break;
		for(int a=0;a<eNum;a++){	scanf("%d",&arr[a]);	}
		for(int a=0;a<eNum;a++){	res[arr[a]].push_back(a+1);	}
		for(int a=0;a<que;a++){
			scanf("%d%d",&occ,&val);
			if(res[val].size()<occ)
			{
				printf("0\n");
			}
			else{
				printf("%d\n",res[val][occ-1]);}
		}
		for(int a=0;a<eNum;a++){	res[arr[a]].clear();	}
	}
	return 0;
}