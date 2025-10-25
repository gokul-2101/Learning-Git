#include <stdio.h>
#include "name.h"

void getName() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Name: %s", name);
}
