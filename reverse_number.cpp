#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,result;
    cin>>n;

    while(n>0){
        result = n%10;
        n = n/10;
        cout<<result;
    }

    return 0;
}