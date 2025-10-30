// Merge Sort (divide and conquer, stable)
//
// Description:
// Merge Sort splits the array into two halves, recursively sorts each half,
// and then merges the two sorted halves. This implementation uses a
// temporary vector to hold merged results before copying back.
//
// Time complexity: O(n log n) for best/average/worst cases
// Space complexity: O(n) extra space for merging (not in-place)
// Stability: Stable
//
// Notes:
// - This implementation allocates a temporary vector for each merge call.
//   For large arrays, an optimized implementation can reuse a single
//   auxiliary buffer to reduce allocations.
//
// Example usage (stdin -> stdout):
// Input:
// 6
// 10 7 8 9 1 5
// Output:
// 1 5 7 8 9 10
//
// Contract:
// - Input: integer n followed by n integers
// - Output: sorted integers printed on one line

#include <iostream>
#include<vector>

using namespace std;

void merge(int arr[], int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    // copy temp back to original array
    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

void merge_sort(int arr[],int low, int high){
   // base case: single element or invalid range
   if(low>=high) return;

   int mid = (low+high)/2;
   merge_sort(arr, low, mid);
   merge_sort(arr,mid+1,high);
   merge(arr,low,mid,high);
}

int main() {

    int n;
    cin >> n;
    int * arr = new int[n];

    for(int i=0;i<n;i++) {cin >> arr[i];}

    merge_sort(arr,0, n-1);

    for(int i=0;i<n;i++) {cout << arr[i]<< " ";}
    cout<<endl;
    
    return 0;
}