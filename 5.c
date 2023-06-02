#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char* brand;
	char* model;
    int price;
};

struct Car* longestCarModelName(struct Car cars[], int n) {
    int maxl = 0;
    struct Car* maxmodel = &cars[0];

    for (int i = 0; i < n; i++) {
        if (strlen(cars[i].model) > maxl) {
            maxl = strlen(cars[i].model);
            maxmodel = &cars[i];
        }
    }

    printf("%s", maxmodel->model);
}

int main() {
    struct Car cars[3] = {
        {"Toyota", "Corolla", 10000},
        {"Nissan", "Note", 15000},
        {"Subaru", "Forester", 20000}
    };

    longestCarModelName(cars, 3);
    return 0;
}