#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int>& arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    int max_sum = sum;
    for(int i=k;i<arr.size();i++){
        sum-=arr[i-k];
        sum+=arr[i];
        max_sum=max(max_sum,sum);
    }
    return max_sum;
}



int main(){
    int k=3;
    cout<<"Trường hợp 1: ";
    vector<int> arr1 = {2, 1, 5, 1, 3, 2};
    cout << maxSum(arr1, k) << endl;

    cout<<"Trường hợp 2: ";
    vector<int> arr2 = {4, 2, 1, 7, 8, 1, 2};
    cout << maxSum(arr2, k) << endl;

    cout<<"Trường hợp 3: ";
    vector<int> arr3 = {1, 2, 3, 4, 5};
    cout << maxSum(arr3, k) << endl;

    return 0;
}


// case 1:
// Input: arr = [2, 1, 5, 1, 3, 2], k = 3
// Output: 9

// case 2:
// Input: arr = [4, 2, 1, 7, 8, 1, 2], k = 3
// Output: 16

// case 3:
// Input: arr = [1, 2, 3, 4, 5], k = 3
// Output: 12