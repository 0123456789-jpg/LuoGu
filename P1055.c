//2023.11.17
//C191239
//AC
#include<stdio.h>
int main(int argc,char** argv){
    char str[14],id;
    int num[10],mod;
    long long sum=0;
    scanf("%s",str);
    num[0]=str[0]-48;
    num[1]=str[2]-48;
    num[2]=str[3]-48;
    num[3]=str[4]-48;
    num[4]=str[6]-48;
    num[5]=str[7]-48;
    num[6]=str[8]-48;
    num[7]=str[9]-48;
    num[8]=str[10]-48;
    if(str[12]=='X'){
        num[9]=10;
    }else{
        num[9]=str[12]-48;
    }
    for(int i=1;i<=9;i++){
        sum+=num[i-1]*i;
    }
    mod=sum%11;
    if(mod==num[9]){
        printf("Right");
        return 0;
    }
    if(mod==10){
        id='X';
    }else{
        id=mod+48;
    }
    for(int i=0;i<12;i++){
        printf("%c",str[i]);
    }
    printf("%c",id);
    return 0;
}