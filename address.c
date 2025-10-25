#include <stdio.h>
#include "address.h"

void getAddress() {
    char address[200];
    getchar();
    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);
    printf("Address: %s", address);
}
