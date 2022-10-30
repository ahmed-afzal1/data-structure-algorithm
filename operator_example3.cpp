#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int i=1, j=2, k=3;
           //1    //2   //3
    int m = i-- - j-- - k--;

    cout<<i<<endl; // 0
    cout<<j<<endl; // 1
    cout<<k<<endl; // 2
    cout<<m<<endl; // -4


    return 0;
}