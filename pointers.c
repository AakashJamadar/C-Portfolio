#include <stdio.h>

int main(void) {
    // int n = 50;
    // int *p = &n;
    // printf("%p", p);
    typedef char* string;
    string s = "Hi!";
    // printf("%s\n", s);
    // printf("%p\n", s);
    // printf("%p\n", &s[0]);
    // printf("%p\n", &s[1]);
    // printf("%p\n", &s[2]);
    // printf("%p\n", &s[3]);

    // Pointer Arithmetic
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%s\n", s + 1);
    printf("%s\n", s + 2);

    // Whenever we create pointers the pointer for any integer stores the address of the variable, and for 
    // arrays and strings created like char * str or int *arr the arr or str(are pointers now) store the
    // address of the first element of array or string(taking full 32 or 64 bits as per system) and the elements are stored  
    // contiguously, this extra storage is the trade off for allocating them dynamically and in heap where there is high storage.

    // But in int arr[5], the arr even though contains the address of first element isn't a pointer and doesn't take extra space to store 
    // it's first element's addresss
}