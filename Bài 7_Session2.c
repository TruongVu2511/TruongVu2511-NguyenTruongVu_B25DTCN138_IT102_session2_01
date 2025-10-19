#include <stdio.h>

int main() {
    
    int number = 12345;
    int tong = 0;

    
    int temp = number;

    
    while (temp > 0) {
        tong += temp % 10;  
        temp = temp / 10;   
    }

    
}

