// #include<iostream>
// using namespace std;

// bool isPresent(int arr[][4], int target, int i, int j){

//     return 1;

// }
// int main() {

//     //create 2 d array
//     int arr[3][4];
//     //int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
//    // int arr[3][4] ={ {1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
    
//     //taking input -> row wise input
//     for(int i = 0; i<3; i++){
//         for(int j = 0; j<4; j++){
//             cin >> arr[i][j];
//         }
//     }
// }
//     //take input -> col wise input
//     // for(int i = 0; i<4; i++) {
//     //     for(int j = 0; j<3; j++){
//     //         cin >> arr[j] [i];
//     //     }
//     // }

//     // print -> row wise input
//     for(int i = 0; i<3; i++){
//         for(int j = 0; j<4; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << " Enter the element to search "<< endl;
//     int target;
//     cin >> target;

//     if(isPresent(arr, target,  3, 4)) {
//            cout << " Element found  " << endl; 
//                                             }                                        "
//     }else{
//      cout << "Not Found" << endl;
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool isPresent(int arr[][3], int target, int row, int col) {
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             if(arr[i][j] == target) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// // to print row wise sum
// void printSum(int arr[][3], int row, int col) {
//     cout << "Printing Sum ->" << endl;
//     for(int i = 0; i<3; i++){
//         int sum = 0;
//         for(int j = 0; j<3; j++){
//            sum +=  arr[i][i];
//         }
//         cout << sum << " ";
//     }
//     cout<<endl;
// }

// int main() {

//     // create 2D array
//     int arr[3][3];

//     cout << " Enter the elements "<< endl;

//     // taking input (row-wise)
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             cin >> arr[i][j];
//         }
//         cout <<endl;
//     }

//     cout << " Printing the array " << endl;
//     // printing array
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Enter the element to search: ";
//     int target;
//     cin >> target;

//     if(isPresent(arr, target, 3, 3)) {
//         cout << "Element found" << endl;
//     } else {
//         cout << "Not Found" << endl;
//     }
//     printSum(arr, 3, 3);

//     return 0;
// }

#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

// to print row-wise sum
void printColSum(int arr[][3], int row, int col) {
    cout << "Printing Row-wise Sum ->" << endl;
    for(int j = 0; j < row; j++) {
        int sum = 0;
        for(int i = 0; i < col; i++) {
            sum += arr[i][j];   // ✅ FIXED
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int[][3], int row, int col) {
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << " The maximum sum is " << maxi << endl;
    return i;
}

int main() {

    int arr[3][3];

    cout << "Enter the elements:" << endl;

    // input
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the array:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // cout << "Enter the element to search: ";
    // int target;
    // cin >> target;

    // if(isPresent(arr, target, 3, 3)) {
    //     cout << "Element found" << endl;
    // } else {
    //     cout << "Not Found" << endl;
    // }

    // printColSum(arr, 3, 3);
    cout <<"Max row is at index " << largestRowSum(arr, 3, 3) << endl;
    return 0;
}

