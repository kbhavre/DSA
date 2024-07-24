#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int target)
{

    for (int i = 0; i < n; i++)
        if (arr[i] == target)
            return true;

    return false;
}

int main()
{

    int arr[5] = {1, 2, 3, 40, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    bool find = linearSearch(arr, n , 10);

    if(find) cout<<"Yes the target is present in the array ."<<endl;
    else cout<<"The target is not present in the array ."<<endl;


    return 0;
}