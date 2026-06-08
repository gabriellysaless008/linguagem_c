#include <stdio.h>
#include <string.h>

int main(){
     
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[50] ;

    printf("%s", str1);
    printf("%s\n", str2);
    fgets(str3, sizeof(str3), stdin);
    printf("Digite o s");

    return 0;
}
