#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n){

    /* Bruteforce Approach

    // Yaha hamne set isliye use kiya he kyuki set ke andar sirf unique elements hi store kar sakte he 
    // space complexity = O(n)  -> as we have a created a hash set
    // time complexity = O(n)

    // First decalare a hashset
    set<int> s;

    // Put every element of the array in the hashset    
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }

    // Store the size of the hashset in a variable k
    int k = s.size();

    // Now put all the elements of the set in the array from the starting to the end of the array 
    int j=0;
    for(int x: s){
        arr[j++] = x;
    }

    // Return k
    return k;

    */

    // Optimal Approach

    // First take a variable as i=0
    int i= 0;

    // Run a loop from 1 to length of the array
    for(int j=1; j<n; j++){

        // If arr[i] != arr[j] , increase i and update arr[i] = arr[j];
        if(arr[i] != arr[j]){
            i++;
        }
        arr[i] = arr[j];
    }
    // After completion return i+1; 
    return i+1;
}

int main(){

    int arr[11] = {1,1,1,2,2,3,3,3,3,4,5};
    cout<<removeDuplicates(arr, 11);

    return 0;
    
}