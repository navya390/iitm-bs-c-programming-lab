#include <stdio.h>

int check_palindrome(int arr, int n){ 
    int is_palindrome = 1;
    for (int i=0;i<n;i++){
        if (arr[i] == arr[n-i]){ 
            is_palindrome = 0;
        }
    }
    return is_palindrome;
}

int main(){
    int n;
    scanf("%d", &n); // &n
    int a[n];
    for (int i=0 ;i<n; i++){
        scanf("%d", &a[i]); // &a[i]
    }
}
