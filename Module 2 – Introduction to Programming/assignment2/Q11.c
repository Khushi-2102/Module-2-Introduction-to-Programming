#include<stdio.h>
int main()
{
   char str1[100],str2[100];
   printf("Enter first string: ");
    scanf("%s",str1);  

    printf("Enter second string: ");
    scanf("%s",str2);
    
            strcat(str1, str2);
        size_t strlen(const char *strcat);

    
    printf("\nConcatenated String: %s\n", str1);
   printf("Length of Concatenated String: %lu\n", strlen(str1));
}





