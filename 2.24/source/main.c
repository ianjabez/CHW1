#include <stdio.h>

int main() {
    int num;

    printf("叫块俱计\n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d 琌案计\n", num);
    }
    else {
        printf("%d 琌膀计\n", num);
    }

    return 0;
}
