#include<stdio.h>
#include<stdlib.h>

struct rec
{
        int i;
        float PI;
        char A;
};

int main()
{
        struct rec *ptr_one;

        /* 1.allocate memory - use malloc() */
        ptr_one = malloc(sizeof(ptr_one));
        printf("Memory is allocated at %p (size: %d)\n", ptr_one, sizeof(*ptr_one));
        printf("--------------------------------------------\n");
        ptr_one -> i=10;
        ptr_one -> PI=3.140000;
        ptr_one -> A = 'a';
        printf("First value: %d\n", ptr_one->i);
        printf("Second value: %f\n", ptr_one->PI);
        printf("Third value: %c\n", ptr_one->A);
        printf("--------------------------------------------\n");
        printf("Memory is deallocated at %p\n", ptr_one);
        free(ptr_one);
        printf("--------------------------------------------\n");


        return 0;
}
