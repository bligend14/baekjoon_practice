#include<iostream>

using namespace std;

int sync_with_studio(false);

int main(){
    cin.tie(NULL);
    int num=0; cin>>num;
    for(int i=0; i<num; i++){
        int num1,num2;
        cin>>num1>>num2;
        cout<<num1+num2<<"\n";
    }
}