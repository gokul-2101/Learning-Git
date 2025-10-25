#include <stdio.h>
#include "age.h"

void getAge() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Age: %d\n", age);
}
