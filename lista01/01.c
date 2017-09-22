#include <stdio.h>

int main() {
    int valor;
    printf("entre com um valor");
    scanf("%d",&valor);

    if ((valor%2)==0) {
        printf("numero e par\n");
    } else {
	printf("numero e impar\n");
    }

    return 0;
}

