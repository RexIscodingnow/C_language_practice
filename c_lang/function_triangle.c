/*
    funtion for print triangle
    自定義函式，印出三角形
    集大成 -> 四種方向

    In function() were used by triangle_[dirction].c source file.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void up_left(int);
void up_right(int);
void down_left(int);
void down_right(int);

int main(int argc, char const *argv[]) {

    int n, start_flag = 1;
    char dirct[2];
    printf("Print triangle\nChooose one dirction(UL(ul), UR(ur), DL(dl), Dr(dr)): ");
    scanf("%s", dirct);
    printf("%s\n", dirct);
    printf("n = ");
    
    /* strcmp -> from <string.h>，
                 字串判斷: (str1, str2) 兩者相同，回傳 0 ; 否則其他值 
    */
    if (!strcmp(dirct, "UL") || !strcmp(dirct, "ul") && scanf("%d", &n) == 1) {
        up_left(n);
    }
    else if (!strcmp(dirct, "UR") || !strcmp(dirct, "ur") && scanf("%d", &n) == 1) {
        up_right(n);
    }
    else if (!strcmp(dirct, "DL") || !strcmp(dirct, "dl") && scanf("%d", &n) == 1) {
        down_left(n);
    }
    else if (!strcmp(dirct, "Dr") || !strcmp(dirct, "dr") && scanf("%d", &n) == 1) {
        down_right(n);
    }

    else {
        system("cls");
        printf("Type error\n");
    }

    system("pause");
    return 0;
}

void up_left(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("*");
            }
            else if (i < j) {
                printf("*");
            }
        }
        printf("\n");
    }
}

void up_right(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || i <= j) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void down_left(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("*");
            }
            else if (i > j) {
                printf("*");
            }
        }
        printf("\n");
    }
}

void down_right(int n) {
    int i, j;

    for (i = 0; i < n; i++) {   //  i = 1; i <= n; ++i
        for (j = 0; j < n; j++) {   // j = 1; j <= n; ++j
            if (i + j >= n - 1) {   // i+j >= n+1
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}