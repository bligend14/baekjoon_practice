#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;

int main(){
    int dic[3]={0};

    cin>>dic[0]>>dic[1]>>dic[2];
    if(dic[0]==dic[1] && dic[1]==dic[2]){
        cout<<10000+dic[0]*1000<<endl;
    }else if(dic[0]==dic[1] && dic[1]!=dic[2]){
        cout<<1000+dic[0]*100<<endl;
    }else if(dic[0]==dic[2] && dic[2]!=dic[1]){
        cout<<1000+dic[0]*100<<endl;
    }else if(dic[1]==dic[2] && dic[2]!=dic[0]){
        cout<<1000+dic[1]*100<<endl;
    }else{
        int size = sizeof(dic) / sizeof(*dic);
        int max=*max_element(dic,dic+size);
        cout<<max*100<<endl;
    }
}