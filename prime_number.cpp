#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int a,b;
    cin>>a>>b;
    int i;
    for(int num=a; num<=b; num++){
        for(i=2; i<num; i++){
            if(num%2==0){
                break;
            }
        }

        if(i==num){
            cout<<"Prime number is :"<<num<<endl;
        }
    }
    return 0;
}