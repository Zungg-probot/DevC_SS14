#include <stdio.h>
#include <string.h>

int main(){
    char chuoi[] = "Hello World";
    int n = strlen(chuoi);
    printf("Chuoi dao nguoc: ");
    for(int i = n - 1; i >= 0; i--){
        printf("%c ", chuoi[i]);
    }
    printf("\n");
    return 0;
}
