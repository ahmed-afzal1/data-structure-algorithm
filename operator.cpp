#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    /*
    int i=1;
    int j=2;
    int k;

        //1 //2 //1  //2   //3   //4
    k = i + j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<k<<endl;
    */

   /*
    int i=0;
        //0   //0  //1    0
    i= i++ - --i + ++i - i--;
    cout<<i<<endl;
    */

    int i=1, j=2, k=3;
           //1    //2   //3
    int m = i-- - j-- - k--;

    cout<<i<<endl; // 0
    cout<<j<<endl; // 1
    cout<<k<<endl; // 2
    cout<<m<<endl; // -4


    return 0;
}