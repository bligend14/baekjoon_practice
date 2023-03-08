#include<iostream>
using namespace std;
int main(){
    int num=0;
    cin>>num;
    for(int i=1; i<10; i++){
        cout<<num<<" * "<<i<<" = "<<i*num<<endl;
    }
    return 0;
}