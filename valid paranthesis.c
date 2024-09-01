#include<stdio.h>
int main(){
    char str[100];
    int len,open=0,close=0,start,end,i;
    scanf("%s",str);    //hello'\0'
    for(len=0;str[len];len++);

    for( start=0,end=len-1;str[start];start++,end--){
        if(str[start]=='('){
            open++;
        }else if(str[start]==')'){
            open--;
        }
        if(open==-1){
            str[start]='*';
            open=0;
        }
        if(str[end]==')'){
            close++;
        }else if(str[end]=='('){
            close--;
        }
        if(close==-1){
            str[end]='*';
            close=0;
        }
    }
    for(i=0;str[i];i++){
        if(str[i]!='*')
        printf("%c",str[i]);
    }
    return 0;
}
