#include <iostream>

int main()
{
        int rows;
        
        scanf_s("%d", &rows);
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                printf("%d ", j);
            }
            printf("\n");
        }

        printf("\n");

        for (int i = rows; i >= 1; --i) {
            for (int j = 1; j <= i; ++j) {
                printf("%d ", j);
            }
            printf("\n");
        }
}

