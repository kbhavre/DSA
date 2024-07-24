#include <bits/stdc++.h>
using namespace std;

void getSecondLargest(int arr[], int n){
    // Edge cases
    if(n==0 || n==1) cout<<"-1"<<endl;

    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    // First find the largest number
    for(int i=0; i<n;i ++){
        largest=max(largest, arr[i]);
        smallest= min(smallest, arr[i]);
    }

    // Now find the second largest number 
    for(int i=0; i<n; i++){
        if(arr[i]>secondLargest && arr[i] != largest)
            secondLargest = arr[i];

        if(arr[i]<secondSmallest && arr[i]!= smallest)
            secondSmallest = arr[i];
    }
        

    cout<<"Second Smallest number in the array is : "<<secondSmallest<<endl;
    cout<<"Second Largest number in the array is : "<<secondLargest;
    
}

int main(){

    int arr[5] = {1,2,3,4,5};
    getSecondLargest(arr, 5);


    return 0;
}