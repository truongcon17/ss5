#include <stdio.h>

int main() {
    int predefinedNumber = 42; // So nguy�n duoc danh truoc
    int userInput;

    printf("H�y do�n so nguy�n d�ng!\n");

    // Lap cho den khi ngupi d�ng nhap d�ng s?
    do {
        printf("Nhap mot so: ");
        scanf("%d", &userInput);

        if (userInput != predefinedNumber) {
            printf("Sai roi, h�y thu lai!\n");
        }
    } while (userInput != predefinedNumber);

    printf("Ch�c mung! Ban d� do�n d�ng so %d.\n", predefinedNumber);

    return 0;
}

