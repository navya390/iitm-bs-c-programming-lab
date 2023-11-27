#include <stdio.h>

int check_palindrome(int arr[], int n) {
    int is_palindrome = 1;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            is_palindrome = 0;
            break;  
        }
    }
    return is_palindrome;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (check_palindrome(a, n)) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}
