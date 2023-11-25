// #include <iostream>
// #include <algorithm>
// using namespace std;

// int ascbubbleSort(int arr[], int n) { 
//   int count=0;
//   int temp[n];
//   for (int i=0; i<n; i++){
//     temp[i]=arr[i];
//   }
//   for (int i=0; i<n-1; i++){
//     for (int j=0; j<n-i-1; j++){
//       if (temp[j]>temp[j+1]){
//         swap(temp[j], temp[j+1]);
//         count+=1;
//       }
//     }
//   }
//   return count;
// } 
      
// int desbubbleSort(int arr[], int n) { 
//   int count2=0;
//     for (int i = 0; i < n - 1; i++){  
//         for (int j = 0; j < n - i - 1; j++){ 
//             if (arr[j] < arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]); 
//   count2++;
//   			}
//         }
//     }
// return count2++;
// } 
// int main(){
//    int n;
//   cin>>n;
//   int arr[n];
//   for (int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   int acount = ascbubbleSort(arr,n);
//   int dcount = desbubbleSort(arr,n);
//   if(acount>dcount){
//      cout<<dcount;
//   }
//   else{
//   cout<<acount;
//   } 
//   return 0;

// }

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int originalArr[n];
    copy(arr, arr + n, originalArr);

    // Sort the array in ascending order
    sort(arr, arr + n);
    int acount = 0;

    // Count the number of swaps needed to transform the original array into the sorted array
    for (int i = 0; i < n; i++) {
        if (arr[i] != originalArr[i]) {
            acount++;
        }
    }

    // Sort the array in descending order
    sort(arr, arr + n, greater<int>());
    int dcount = 0;

    // Count the number of swaps needed to transform the original array into the sorted array
    for (int i = 0; i < n; i++) {
        if (arr[i] != originalArr[i]) {
            dcount++;
        }
    }

    // Output the minimum of acount and dcount
    cout << min(acount, dcount) << endl;

    return 0;
}
