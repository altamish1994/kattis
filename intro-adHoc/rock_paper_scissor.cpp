/* 
 * File:   rock_paper_scissor.cpp
 * Author: altamisharif
 *
 * Created on September 21, 2015, 2:00 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include<cstdio>
using namespace std;

/*
 * 
 */
int main() {

    int players,matches;
    
	//scanf("%d",&players);
        //scanf("%d",&matches);
    char s1[10],s2[10];
	string p1,p2;
    int n1,n2;
	float arr[101];
	float arr2[101];
	bool o=true;
    while(1){
			//scanf("%d",&matches);
		cin>>players;
		if(players==0){return 0;}
		cin>>matches;
		//kn(n−1)/2;
		matches=(matches*players*(players-1))/2;
        for(int a=0;a<=players;a++){arr[a]=0;arr2[a]=0;}
        while(matches--){
            cin>>n1>>p1>>n2>>p2;
			//scanf("%d",&n1);
			//scanf("%s",&s1);
			//scanf("%d",&n2);
			//scanf("%s",&s2);
			//p1;
			//p2;
			if(p1!=p2){
            if(p1 == "rock" && p2 == "scissors")
            {
                    arr[n1]+=1;arr2[n2]+=1;
			}
            else if(p1 == "rock" && p2 == "paper"){
                    arr[n2]+=1;arr2[n1]+=1;
            }
            
            else if(p1 == "paper" && p2 == "rock")
            {
                    arr[n1]+=1;arr2[n2]+=1;
            }
            else if(p1 == "paper" && p2 == "scissors"){
                    arr[n2]+=1;arr2[n1]+=1;
            }
           
            else if(p1 == "scissors" && p2 == "paper")
            {
                    arr[n1]+=1;arr2[n2]+=1;
            }
           else if(p1 == "scissors" && p2 == "rock"){
                    arr[n2]+=1;arr2[n1]+=1;
            }
			}
        }
		if(o==false)
			printf("\n");
		for(int a=1;a<players+1;a++){
			if(arr[a]==0 && arr2[a]==0){
				printf("-\n");
			}
			else{
				float x=arr[a]/(arr[a]+arr2[a]);
				printf("%.3f\n", x);
			}
		}
		o=false;
		//cin>>players;//scanf("%d",&players);
    }
    return 0;
}
