#include<iostream>
using namespace std;
char arr[8][8];

int main() {

    for (int a = 0; a < 8; a++) {
        for (int b = 0; b < 8; b++) {
            cin >> arr[a][b];
        }
    }
    cout << endl;
    //for(int a=0;a<8;a++){for(int b=0;b<8;b++){cout<<arr[a][b];}cout<<endl;}
    for (int a = 0; a < 8; a++) {
        for (int b = 0; b < 8; b++) {
            if (arr[a][b] == '*') {
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
    cout<<"valid"<<endl;
    return 0;
}

bool checkLeft(int a, int b) {
    for (int x = b; x >= 0; x--) {
        if (arr[a][x] == '*')
            return true;
    }
    return false;
}

bool checkRight(int a, int b) {
    for (int x = b; x <= 7; x++) {
        if (arr[a][x] == '*')
            return true;
    }
    return false;
}

bool checkUp(int a, int b) {
    for (int x = a; x >= 0; x--) {
        if (arr[x][b] == '*')
            return true;
    }
    return false;
}

bool checkDown(int a, int b) {
    for (int x = a; x <= 7; x++) {
        if (arr[x][b] == '*')
            return true;
    }
    return false;
}


bool checkDownLeft(int a, int b) {
    for (int x = a, y = b; x <= 7 && y>=0; x++,y--) {
        if (arr[x][y] == '*')
            return true;
    }
    return false;
}


bool checkDownRight(int a, int b) {
    for (int x = a , y = b; x <= 7 && y<=7; x++,y++) {
        if (arr[x][y] == '*')
            return true;
    }
    return false;
}

bool checkUpLeft(int a, int b) {
    for (int x = a, y = b; x >= 0 && y>=0; x--,y--) {
        if (arr[x][y] == '*')
            return true;
    }
    return false;
}


bool checkDownRight(int a, int b) {
    for (int x = a , y = b; x >= 0 && y<=7; x--,y++) {
        if (arr[x][y] == '*')
            return true;
    }
    return false;
}