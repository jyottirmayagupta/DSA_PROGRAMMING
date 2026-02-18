#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = 1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Skip if already printed
        int alreadyPrinted = 0;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if (!alreadyPrinted) {
            printf("%d:%d", arr[i], count);
            if (i < n - 1) printf(" ");
        }
    }
    printf("\n");
    return 0;
}
