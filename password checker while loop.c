#include <stdio.h>

int main() {
    int password, attempt = 0;

    while (attempt < 3) {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password == 1234) {
            printf("Login Successful!");
            break;
        } else {
            printf("Wrong Password!\n");
            attempt++;
        }
    }

    if (attempt == 3)
        printf("Maximum attempts reached!");

    return 0;
}
