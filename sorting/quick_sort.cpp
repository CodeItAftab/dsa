// Quick Sort implementation (in-place)
//
// Description:
// This file implements the Quick Sort algorithm using the Lomuto/Hoare-style
// partitioning where the pivot is chosen as the first element of the current
// subarray (index `low`). The algorithm recursively sorts elements less than
// the pivot to its left and greater elements to its right.
//
// Time complexity:
// - Average: O(n log n)
// - Worst-case: O(n^2) (occurs for already sorted or reverse-sorted input when
//   pivot selection is poor)
// Space complexity: O(log n) average recursion depth (O(n) worst-case)
//
// Notes and guarantees:
// - This implementation reads an integer n from stdin followed by n integers.
// - It prints the sorted array (space-separated) to stdout.
// - Pivot is chosen as the first element of the current segment (index `low`).
// - This is an educational implementation — for production code prefer randomized
//   pivot selection or introsort to avoid worst-case behavior.
//
// Example usage (stdin -> stdout):
// Input:
// 5
// 3 5 1 2 4
// Output:
// 1 2 3 4 5
//
// Another example:
// Input:
// 6
// 10 7 8 9 1 5
// Output:
// 1 5 7 8 9 10
//
// Quick contract:
// - Input: n (int), followed by n integers (can be separated by spaces or newlines)
// - Output: sorted list of the n integers printed on a single line separated by spaces
// - Error modes: no explicit checks for malformed input; passing fewer than n
//   integers will cause undefined behavior.

#include <iostream>

using namespace std;

int partition(int arr[],int low,int high){
    int pivot = low;
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=arr[pivot]){
            i++;
        }
        while(arr[j]>arr[pivot]){
            j--;
        }

        if(i<j) swap(arr[i],arr[j]);
    }

    swap(arr[pivot],arr[j]);

    return j;
}

void quick_sort(int arr[],int low, int high){
   if(low<high){
        int p = partition(arr,low,high);
        quick_sort(arr,low,p-1);
        quick_sort(arr,p+1,high);
   }
}

int main() {

    int n;
    cin >> n;
    int * arr = new int[n];

    for(int i=0;i<n;i++) {cin >> arr[i];}

    quick_sort(arr,0,n-1);

    for(int i=0;i<n;i++) {cout << arr[i]<< " ";}
    cout<<endl;
    
    return 0;
}