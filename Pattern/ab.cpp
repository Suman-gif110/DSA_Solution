#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int row = 1, num= 1;
    while(row <= n){
        int col = 1, space = 1;
        while(space <= n - row){
            cout << " "; // notice two spaces
            space = space + 1;
        }
        
        while(col <= row){
            cout << num << " ";
            num = num + 1;
            col = col + 1;
        }
        col = col + 1;
        cout << endl;
    }
}