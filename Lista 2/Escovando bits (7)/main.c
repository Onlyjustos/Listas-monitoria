#include <stdio.h>
#include <stdlib.h>
void print_bytes(const unsigned char *end_byte, int n) {
    const unsigned char *byte = end_byte;
    for (int i = 0; i < n; i++) {
        //printf("Byte %d: ", i);
        for (int j = 7; j >= 0; j--) {
            printf("%d", (byte[i] >> j) & 1);
        }
        printf(" ");
        //printf("\n");
    }
}
int main() {
    double real_number;
    char c;
    char bit = 'o';
    char *pointer = &c;
    *pointer = bit ;
    printf("%c",c);
   // printf("Digite um n�mero real (double): ");
   
}
