/* 
 * File:   t9_spelling.cpp
 * Author: altamisharif
 *
 * Created on September 20, 2015, 2:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string arr[10] = {" ","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string inp;
    int prev;
    int t;
    cin>>t;
    getline(cin,inp);
    for(int i=0;i<t;i++){
        prev=-1;
        getline(cin,inp);
        cout<<"Case #"<<i+1<<": ";
        for(int i=0;i<inp.length();i++){
            for(int a=0;a<10;a++){
                if(arr[a].find(inp[i])<arr[a].length()){
                    if(prev==a)
                        cout<<" ";
                    prev=a;
                    for(int b=0;arr[a][b]!=inp[i];b++){
                        cout<<a;}
                    cout<<a;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

