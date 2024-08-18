#include <stdio.h>

#include "inc/std_c_funcs.hpp"

void test_atoi()
{
    printf("atoi(123)          : %d\n", STD_C_FUNCS::atoi("123"));
}
void test_bzero()
{
    char str[10] = "123456789";
    STD_C_FUNCS::bzero(str, 5);
    printf("bzero(123456789)   : %s\n", str);
}
void test_calloc()
{
    char *str = (char*) STD_C_FUNCS::calloc(10, sizeof(char));
    printf("calloc()           : %s\n", str);
    //(int *)calloc(num_elements, sizeof(int)) does the same thing as (int *)malloc(num_elements * sizeof(int))
    // but it also initializes the memory to zero.
}
void test_isalnum()
{
    printf("isalnum(b)         : %d\n", STD_C_FUNCS::isalnum('b'));
    printf("isalnum(1)         : %d\n", STD_C_FUNCS::isalnum('1'));
    printf("isalnum( )         : %d\n", STD_C_FUNCS::isalnum(' '));
}
void test_isalpha()
{
    printf("isalpha(b)         : %d\n", STD_C_FUNCS::isalpha('b'));
    printf("isalpha(1)         : %d\n", STD_C_FUNCS::isalpha('1'));
    printf("isalpha( )         : %d\n", STD_C_FUNCS::isalpha(' '));
}


int main(int, char**)
{
    test_atoi();
    test_bzero();
    test_calloc();
    test_isalnum();
    test_isalpha();
    return 0;
}