#include <stdio.h>
#include <math.h> 

int main() {
    
    int a = 2;
    int b = 3;
    int c = 4;

    
    float A;

    
    int expressionInsideSqrt = a + b - c;

    if (expressionInsideSqrt >= 0) {
        A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(expressionInsideSqrt);
        printf("Gia tri bieu thuc A = %.2f\n", A);
    } else {
        printf("Khong the tinh sqrt(%d) vi gia tri am.\n", expressionInsideSqrt);
    }

    return 0;
}

