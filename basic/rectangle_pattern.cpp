#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int row, column;
    cin>>row>>column; 
    cout<<"Number of row & column is:"<<row<<" "<<column<<endl;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}