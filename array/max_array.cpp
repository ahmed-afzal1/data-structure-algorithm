#include<iostream>
#include<climits>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int biggestNumber = a[0];
    for(int i=1; i<n; i++){
        if(a[i]>biggestNumber){
            biggestNumber = a[i];
        }
    }

    cout<<"Biggest number is : "<<biggestNumber<<endl;

    cout << INT_MAX << endl;
    cout << INT_MIN;
    return 0;
}