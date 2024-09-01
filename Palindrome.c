#include<string.h>
#include<stdio.h>
int main(){
    int len,start,end;
    char str1[100];
    scanf("%s%n",str1,&len);
    for( start=0,end=len-1;start<end;start++,end--){
        if(str1[start]!=str1[end]){
            printf("Not a Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
return 0;
}
