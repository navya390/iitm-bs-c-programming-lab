#include <stdio.h>
#include <string.h>


void sreverse(char* s){
    int n = strlen(s);
    
    for(int i=0;i<n/2;i++){ 
        char temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i]=temp;
    }
}

int main(){
    int n;
    scanf("%d",&n); 
    char s[n];
    scanf("%s", s);
    sreverse(s);
    printf("%s", s);
}
