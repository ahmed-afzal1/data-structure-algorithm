#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int i=0;
        //0   //0  //1    0
    i= i++ - --i + ++i - i--;
    cout<<i<<endl;

    return 0;
}