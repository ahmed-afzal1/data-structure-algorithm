#include<iostream>
#include<climits>
using namespace std;

int compute_min(int arr[], int n)
{
    int MIN = INT_MAX;
 
    for (int i = 0; i < n; i++)
        MIN = min(MIN, arr[i]);
 
    cout << MIN;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int arr[] = { 10,30,40,20 };

    int n = sizeof(arr) / sizeof(arr[0]);
    compute_min(arr, n);

    return 0;
}