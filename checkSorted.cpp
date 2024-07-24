#include <iostream>
using namespace std;

bool checkSorted(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i] >= arr[i+1]) return false;
    }
    return true;
}

int main(){

    int arr[5] = {12,0, 34, 11,23};
    cout<<checkSorted(arr, 5);
    cout<<endl;
    int brr[7] = {1,2,3,4,5,6,7};
    cout<<checkSorted(brr, 7);

    return 0;
}