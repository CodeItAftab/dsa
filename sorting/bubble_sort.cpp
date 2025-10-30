// Bubble Sort (simple in-place implementation)
//
// Description:
// This file implements the Bubble Sort algorithm. Bubble Sort repeatedly
// steps through the list, compares adjacent elements and swaps them if they
// are in the wrong order. Each pass bubbles the largest remaining element to
// the end of the array.
//
// Time complexity:
// - Best: O(n) (when already sorted, with an optimized flag)
// - Average: O(n^2)
// - Worst: O(n^2)
// Space complexity: O(1) (in-place)
// Stability: Stable (this implementation preserves equal-ordering)
//
// Notes:
// - This is a straightforward educational implementation. It does not use
//   the common early-exit optimization (tracking whether a swap happened)
//   which can make the best-case O(n).
//
// Example usage (stdin -> stdout):
// Input:
// 5
// 3 5 1 2 4
// Output:
// 1 2 3 4 5
//
// Contract:
// - Input: integer n followed by n integers
// - Output: sorted integers printed on one line (no extra checks for malformed input)

#include <iostream>

using namespace std;

void bubble_sort(int arr[],int n){

    for(int i = n-1;i>=1;i--){
        for(int j = 0; j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

int main() {
    
    int n;
    cin >> n;
    int * arr = new int[n];

    for(int i=0;i<n;i++) {cin >> arr[i];}

    bubble_sort(arr,n);

    for(int i=0;i<n;i++) {cout << arr[i];}
    cout<<endl;
    
    return 0;
}