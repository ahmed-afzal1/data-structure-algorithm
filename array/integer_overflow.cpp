#include<iostream>
#include<climits>
using namespace std;

int check_overflow(int num1, int num2){
    if(num1>INT_MAX -num2)
        return -1;
    else 
      return num1 + num2;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int num1 = 2147483627;
    int num2 = 20;

    int result =  check_overflow(num1,num2);
    if(result == -1)
     cout<<"Integer Overflow Occured";
    else
        cout<<result;
}