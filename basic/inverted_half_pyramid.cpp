#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int n,m;
    cin>>n;

    /*
    m=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<"* ";
        }
        m--;
        cout<<endl;
    }
    */

   for(int i=n; i>=1; i--){
    for(int j=1; j<=i; j++){
        cout<<"* ";
    }
    cout<<endl;
   }

    return 0;
}