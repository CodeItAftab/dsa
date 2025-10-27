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