#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int i=10, j=20, k;
        //10   //9  //19 //20  //9   //20  //10   19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
      
    cout<<i<<endl; // 10
    cout<<j<<endl; // 20
    cout<<k<<endl; // -20


    return 0;
}