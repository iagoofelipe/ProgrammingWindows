/*

Reference: Chapter 2, A Brief History of CHaracter Sets

*/

#include <stdio.h>

int main() {

    // "Hello World!" using ASCII code
    char c[] = { 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33, 0 };
    printf("%s\n", c);

    return 0;
}