// Selection Sort (in-place selection)
//
// Description:
// Selection Sort repeatedly selects the minimum (or maximum) element from
// the unsorted portion and swaps it into its correct position. It performs
// n passes, each time fixing one element.
//
// Time complexity:
// - Best/Average/Worst: O(n^2)
// Space complexity: O(1) (in-place)
// Stability: Not stable (unless modified)
//
// Notes:
// - Simple but inefficient for large arrays. It performs fewer swaps than
//   bubble sort (one swap per pass), which can be useful when writes are
//   expensive.
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
#include<vector>

using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }

        swap(arr[min],arr[i]);
    }

}

int main() {

    int n; 
    cin >> n;
    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    selection_sort(arr,n);

     for( int i=0;i<n;i++){
        cout << arr[i];
    }

    cout << endl;
    
    return 0;
}