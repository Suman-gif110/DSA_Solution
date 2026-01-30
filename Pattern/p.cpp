#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    while(row <= n){
        //PRINT KARO SPACE (1st triangle)
        int space = n - row;
        while(space){
             cout << " ";
             space = space - 1;
        }
        //print 2nd trianle
        int col = 1;
        while(col <= row){
            cout << col;
            col = col + 1;
        }
        // print 3rd triangle
        cout << endl;
        row = row + 1;
    }
    return 0;
}