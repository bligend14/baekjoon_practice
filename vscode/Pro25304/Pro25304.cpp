#include<iostream>

using namespace std;

int main(){
    int total_prc, prize_num=0;
    //int price[prize_num][prize_num]={0}; 
    cin>>total_prc>>prize_num;
    int hap=0;
    for(int i=0; i<prize_num; i++){
        int price, num=0;
        cin>>price>>num;
        hap+=price*num;
    }
    if(total_prc==hap){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}