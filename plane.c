#include <stdio.h>
#include <string.h>

int main() {
    int n; // Edit this to change the size
    int t; // Edit this to change the space between the squares
    char str[n];
    char str2[n];
    for (int i = 0; i < n; ++i) {
        str[i] = '*';
        str2[i] = '*';
    }
    printf("%s", str);
    for (int i = 0; i < t; ++i) {
        printf(" ");
    }
    printf("%s\n", str2);
    str[0] = '*';
    str[n-1] = '*';
    str2[0] = '*';
    str2[n-1] = '*';
    for (int i = 1; i < n-1; ++i) {
        str[i] = ' ';
        str2[i] = ' ';
    }
    for (int i = 0; i < n; ++i) {
        printf("%s", str);
        for (int u = 0; u < t; ++u) {
            printf(" ");
        }
        printf("%s\n", str2);
    }
    memset(str, '*', n);
    memset(str2, '*', n);
    printf("%s", str);
    for (int i = 0; i < t; ++i) {
        printf(" ");
    }
    printf("%s\n", str2);
    return 0;
}
