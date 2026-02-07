#include <stdio.h>

void dis(int arr[], int x){
    printf("\nArr: ");
    for (int i = 0; i < x; i++){
        printf("%d ", arr[i]);
    }
}

int main()
{
    int x;
    printf("-> ");
    scanf("%d", &x);

    int arr[x];
    for (int i = 0; i < x; i++){
        int inp;
        scanf("\n%d", &inp);
        arr[i] = inp;
    }

    dis(arr, x);

    int d = x;
    while (d > 0){
        for (int i = x; i > 0; i--){
            int temp;
            int y = arr[i];
            if (arr[i] < arr[i - 1]){
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
        d--;
    }

    dis(arr, x);

    return 0;
}
