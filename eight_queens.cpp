#include<iostream>
using namespace std;
char arr[8][8];

bool checkLeft(int a,int b);
bool checkRight(int a,int b);
bool checkUp(int a,int b);
bool checkDown(int a,int b);
bool checkUpLeft(int a,int b);
bool checkUpRight(int a,int b);
bool checkDownLeft(int a,int b);
bool checkDownRight(int a,int b);
int main() {

    for (int a = 0; a < 8; a++) {
        for (int b = 0; b < 8; b++) {
            cin >> arr[a][b];
        }
    }
    int c=0;
    //cout << endl;
    //for(int a=0;a<8;a++){for(int b=0;b<8;b++){cout<<arr[a][b];}cout<<endl;}
    for (int a = 0; a < 8; a++) {
        for (int b = 0; b < 8; b++) {
            if (arr[a][b] == '*') {
                c++;
                if(checkLeft(a, b) ||
                checkRight(a, b) ||
                checkUp(a, b) ||
                checkDown(a, b) ||
                        checkUpLeft(a,b)||
                        checkUpRight(a,b) ||
                        checkDownLeft(a,b) ||
                        checkDownRight(a,b))
                {
                    cout<<"invalid"<<endl;
                    return 0;
                }
            }
        }
    }
    if(c!=8)
    {
        cout<<"invalid"<<endl;
    }
    else{
    cout<<"valid"<<endl;
    }
    return 0;
}

bool checkLeft(int a, int b) {
    for (int x = b-1; x >= 0; x--) {
        if (arr[a][x] == '*'){
            return true;
        }
    }
    return false;
}

bool checkRight(int a, int b) {
    for (int x = b+1; x <= 7; x++) {
        if (arr[a][x] == '*'){
            return true;
        }
    }
    return false;
}

bool checkUp(int a, int b) {
    for (int x = a-1; x >= 0; x--) {
        if (arr[x][b] == '*'){
            return true;
        }
    }
    return false;
}

bool checkDown(int a, int b) {
    for (int x = a+1; x <= 7; x++) {
        if (arr[x][b] == '*'){
            return true;
        }
    }
    return false;
}


bool checkDownLeft(int a, int b) {
    for (int x = a+1, y = b-1; x <= 7 && y>=0; x++,y--) {
        if (arr[x][y] == '*'){
            return true;
        }
    }
    return false;
}


bool checkDownRight(int a, int b) {
    for (int x = a+1 , y = b+1; x <= 7 && y<=7; x++,y++) {
        if (arr[x][y] == '*'){
            return true;
        }
    }
    return false;
}

bool checkUpLeft(int a, int b) {
    for (int x = a-1, y = b-1; x >= 0 && y>=0; x--,y--) {
        if (arr[x][y] == '*'){
            return true;
        }
    }
    return false;
}


bool checkUpRight(int a, int b) {
    for (int x = a-1 , y = b+1; x >= 0 && y<=7; x--,y++) {
        if (arr[x][y] == '*'){
            return true;
        }
    }
    return false;
}