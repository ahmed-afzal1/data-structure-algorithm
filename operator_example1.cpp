#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int i=1;
    int j=2;
    int k;

        //1 //2 //1  //2   //3   //4
    k = i + j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<k<<endl;

    return 0;
}