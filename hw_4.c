#include<stdio.h>
#include<stdlib.h>

int main()
{
        char* str1;
        char str2[100];

        str1 = malloc(sizeof(*str1));
        strcpy(str1, "18102091");
        printf("str1: %s, %p\n", str1, str1);
        strcpy(str2, "18102091");
        printf("str2: %s, %p\n", str2, &str2);
        free(str1);

        return 0;

}
