//2023.11.17
//C191239
//AC
#include<stdio.h>
int main(int argc,char** argv){
    long long n,x;
    scanf("%lli",&n);
    for(int i=0;i<n;i++){
        scanf("%lli",&x);
        if(x%2==0){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
    }
    return 0;
}