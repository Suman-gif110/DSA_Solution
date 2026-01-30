#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int J = 1;
        while( J <= n){
            cout << J;
            J = J + 1;
        }
        cout << endl;
        i = i+1;
    }
    return 0;
}