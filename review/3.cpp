#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[8];
    int index = 0;

    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }

    // เติม 0 ข้างหน้าเพื่อให้เลขฐานสองมี 8 หลัก
    while (index < 8) {
        binary[index] = 0;
        index++;
    }

    // พิมพ์ผลลัพธ์เป็นตัวอักษร 0-1
    for (int i = 7; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

void asciiToCharacter(int decimal) {
    char character = decimal;
    printf("%c", character);
}

int main() {
    int decimal;

    printf("Enter an ASCII decimal number: ");
    scanf("%d", &decimal);

    printf("Binary (0-1): ");
    decimalToBinary(decimal);

    printf("\nCharacter: ");
    asciiToCharacter(decimal);

    printf("\n");

    return 0;
}
