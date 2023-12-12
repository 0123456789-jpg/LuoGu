//2023.12.12
//C191239
//AC
#include<stdio.h>
int main(int argc,char** argv){
    char c;
    int x=0;
    scanf("%c",&c);
    while(c!='@'){
        switch(c){
            case'(':{
                x++;
                break;
            }
            case')':{
                x--;
                break;
            }
            default:
                break;
        }
        if(x<0)break;
        scanf("%c",&c);
    }
    //printf("%i",x);
    if(x!=0)printf("NO");
    else printf("YES");
    return 0;
}