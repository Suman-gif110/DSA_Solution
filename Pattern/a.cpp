// #include<iostream> 
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int i = 1;
//     while( i <= n){
//         int j = 1;
//         while( j <= n){
//             cout << i;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std ;
// int main (){
//     int n;
//     cin >> n;
//     int row = 1;
//     int limit = 1;
//     while(row <= n){
//         int col = 1;
//         while(col <= row){
//              cout << limit << " " ;
//             limit = limit + 1;
//              col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n - i + 1){
            cout << "* " ;
            j = j + 1;
        }
         i = i + 1;
        cout << endl;
    }
    return 0;
}

