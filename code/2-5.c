#include <stdio.h>

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int* p =arr;
    int** pp = &p;
    for (int i =0; i<row_size; i++){
        printf("%d ",*(*pp+i))
    }
}
