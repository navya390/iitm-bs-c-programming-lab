#include <stdio.h>
#include <string.h>


void sreverse(char* s){
    int n = strlen(s);
    for(int i=0;i<n/2;i++){
        char temp=s[i];
        // range should be n/2
        s[i] = s[n-1-i];
        s[n-1-i]=temp;// should use a temp swap swap(s[i], s[n-1-i])
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
 
