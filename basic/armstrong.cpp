#include<iostream>
#include <math.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int n,reminder,result,givenNumber;
    cin>>n;
    givenNumber = n;
    result = 0;
    while(n>0){
        reminder = n%10;
        n = n/10;
        result += pow(reminder,3);
    }

    if(givenNumber==result){
        cout<<givenNumber<<" is an armstrong number\n";
    }else{
        cout<<givenNumber<<" is not an armstrong number\n";
    }

    return 0;
}