#include <stdio.h>

int main() {
    int predefinedNumber = 42; // So nguyên duoc danh truoc
    int userInput;

    printf("Hãy doán so nguyên dúng!\n");

    // Lap cho den khi ngupi dùng nhap dúng s?
    do {
        printf("Nhap mot so: ");
        scanf("%d", &userInput);

        if (userInput != predefinedNumber) {
            printf("Sai roi, hãy thu lai!\n");
        }
    } while (userInput != predefinedNumber);

    printf("Chúc mung! Ban dã doán dúng so %d.\n", predefinedNumber);

    return 0;
}

