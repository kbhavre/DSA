#include <bits/stdc++.h>
using namespace std;

int findLargest(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0; i<n; i++) maxi=max(maxi, arr[i]);
    return maxi;
}

int findSmallest(int arr[], int n){
    int mini = INT_MAX;
    for(int i=0; i<n; i++) mini=min(mini, arr[i]);
    return mini;
}


int main(){

    int arr[5] = {1,32,6,12,988};
    int size = 5;

    cout<<"The largest number is : ";
    cout<<findLargest(arr, size);
    cout<<endl;
    cout<<"The smallest number is : ";
    cout<<findSmallest(arr, size);


    return 0;
}