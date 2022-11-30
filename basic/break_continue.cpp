#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int pocketMoney = 3000;
    for(int date=1; date<=30; date++){
        if(date%2==0){
            continue;
        }

        if(pocketMoney == 0){
            break;
        }
        cout<<"Go out today :"<<date<<" Money :"<<pocketMoney<<endl;
        pocketMoney = pocketMoney - 300;
    }

    return 0;
}