#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0;
    int index = 0;

    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, index);
        binary /= 10;
        index++;
    }

    return decimal;
}

int main() {
    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    int decimal = binaryToDecimal(binary);

    printf("Decimal: %d\n", decimal);

    return 0;
}
