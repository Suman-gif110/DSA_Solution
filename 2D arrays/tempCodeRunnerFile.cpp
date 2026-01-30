
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