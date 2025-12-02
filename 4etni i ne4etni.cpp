#include <cstdio>
#include <cmath>

int main() {
    double arr[10];

   
    printf("Enter 10 real numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf_s("%lf", &arr[i]);
    }

   
    for (int i = 0; i < 10; i++) {
        
        if (fmod(arr[i], 2) == 0) {
            arr[i] = pow(arr[i], 3);   
        }
        else {
            arr[i] += 10;             
        }
    }

   
    printf("The result is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}
