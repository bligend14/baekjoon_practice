#include<iostream>
using namespace std;
int main(){
    int num; cin>>num;
    int hap=0;
    for(int i=1; i<=num; i++){
        hap+=i;
    }
    cout<<hap<<endl;
}