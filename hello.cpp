#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int num1, num2, num3;
    cin>>num1>>num2>>num3;

    cout<<"Numbers are : "<<num1<<","<<num2<<","<<num3<<endl;
    if(num1>num2){
        if(num1>num3){
            cout<<"Largest number is : "<<num1;
        }else{
            cout<<"Largest number is : "<<num3;
        }
    }else{
        if(num2>num3){
            cout<<"Largest number is : "<<num2;
        }else{
            cout<<"Largest number is : "<<num3;
        }
    }
    return 0;
}