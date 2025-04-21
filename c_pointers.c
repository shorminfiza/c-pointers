/* Day 4 – Pointers
- Pointer to integer
- Swapping values via pointer
- Passed pointer to function
- Traversed array using pointer arithmetic
*/

#include <stdio.h>
void swap(int *a,int *b);
void square(int *n);

int main() {
 int a=12, *ptr;
 ptr = &a;
 printf("Value= %d\n",*ptr);
 printf("Address= %p\n",ptr);
 int b=5;;
 swap(&a,&b);
 printf("Swapped --> a=%d, b=%d\n",a,b);
 square(ptr);
 printf("Square of new a = %d\n",*ptr);
 
 int arr[] = {1, 2, 3, 4, 5};
int *p = arr;
for (int i = 0; i < 5; i++) {
    printf("%d ", *(p + i));
}

 
 
    return 0;
}

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void square(int *n){
    *n = (*n) * (*n);
}