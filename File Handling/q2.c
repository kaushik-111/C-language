#include <stdio.h>

int main() {
    FILE *fp;
    int i;

    fp = fopen("divisible_numbers.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            fprintf(fp, "%d\n", i);
        }
    }


    // fclose(fp);

    // printf("Data written to file successfully.\n");

    return 0;
}
