#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    printf("Vui long nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = 0;
    printf("Chuoi ban vua nhap la: %s\n", chuoi);
    printf("Do dai cua chuoi la: %lu\n", strlen(chuoi));
    return 0;
}
