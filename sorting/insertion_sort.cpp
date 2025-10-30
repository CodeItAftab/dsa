// Insertion Sort (in-place, stable)
//
// Description:
// Insertion Sort builds the final sorted array one item at a time. It
// iterates through the array, and for each element it inserts it into its
// correct position among the previously-sorted elements.
//
// Time complexity:
// - Best: O(n) (already sorted)
// - Average: O(n^2)
// - Worst: O(n^2)
// Space complexity: O(1) (in-place)
// Stability: Stable
//
// Notes:
// - Efficient for small arrays and nearly-sorted data. Commonly used as the
//   base case sorter in hybrid algorithms (e.g., when array length is small).
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
// - Output: sorted integers printed on one line

#include <iostream>

using namespace std;

void insertion_sort(int arr[],int n){
    for(int i = 0;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main() {

     int n;
    cin >> n;
    int * arr = new int[n];

    for(int i=0;i<n;i++) {cin >> arr[i];}

    insertion_sort(arr,n);

    for(int i=0;i<n;i++) {cout << arr[i]<< " ";}
    cout<<endl;
    
    return 0;
}