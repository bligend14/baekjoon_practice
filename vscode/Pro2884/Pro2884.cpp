#include<stdio.h>
int main(){
    int hour,minute;
    scanf("%d %d",&hour,&minute);
    int res=minute-45;
    if(res>=0){
        minute=res;
    }else if(res<0){
        hour-=1;
        minute=res+60;
    }
    if(hour<0){
        hour+=24;
    }
    printf("%d %d",hour,minute);

}