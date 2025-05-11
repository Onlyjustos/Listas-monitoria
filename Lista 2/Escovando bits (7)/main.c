#include <stdio.h>
#include <stdlib.h>
void print_bytes(const unsigned char *end_byte/* ponteiro do começo da */, int n) {
    const unsigned char *byte = end_byte;
    int j,i;
    
    for (i = 0; i < n; i++) {
        
        for (j= 7; j >= 0; j--) {
            printf("%d", (byte[i] >> j) & 1);
        }
        printf(" ");
    }
}
int main() {
    double real_number;

    
    scanf("%lf", &real_number);

    // Conversoes e impressao dos bits
    unsigned char char_var = (unsigned char)real_number;
    unsigned short short_var = (unsigned short)real_number;
    unsigned int int_var = (unsigned int)real_number;
    float float_var = (float)real_number;
    double double_var = real_number;

    
    print_bytes(&char_var, sizeof(char_var));

    printf("\n");
    print_bytes(&short_var, sizeof(short_var));

    printf("\n");
    print_bytes(&int_var, sizeof(int_var));

    printf("\n");
    print_bytes(&float_var, sizeof(float_var));

    printf("\n");
    print_bytes(&double_var, sizeof(double_var));

    return 0;
}
