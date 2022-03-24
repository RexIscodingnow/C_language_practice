/*
    1D array for print 1 to 9
    一維陣列，印 1 到 9
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    // 長: 9
    int i, n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // (sizeof(n) / sizeof(n[0])) = 陣列長度
    for (i = 0; i < (sizeof(n) / sizeof(n[0])); ++i) {
        printf("%d", n[i]);
        printf("\n");
    }

    system("pause");
    return 0;
}

