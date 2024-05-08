#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOTTO_SIZE 6
#define MAX_NUM 45

void generateLotto(int* lotto);
void sortLotto(int* lotto);
void printLotto(int* lotto);

int main() {
    int lotto[LOTTO_SIZE];

    srand((unsigned)time(NULL));

    generateLotto(lotto);
    sortLotto(lotto);
    printLotto(lotto);

    return 0;
}

void generateLotto(int* lotto) {
    int i, j;
    for (i = 0; i < LOTTO_SIZE; i++) {
        lotto[i] = rand() % MAX_NUM + 1;

        
        for (j = 0; j < i; j++) {
            if (lotto[i] == lotto[j]) {
                i--; 
                break;
            }
        }
    }
}

void sortLotto(int* lotto) {
    int i, j, temp;
    for (i = 0; i < LOTTO_SIZE - 1; i++) {
        for (j = 0; j < LOTTO_SIZE - 1 - i; j++) {
            if (*(lotto + j) > *(lotto + j + 1)) {
                temp = *(lotto + j);
                *(lotto + j) = *(lotto + j + 1);
                *(lotto + j + 1) = temp;
            }
        }
    }
}

void printLotto(int* lotto) {
    printf("로또 번호: ");
    for (int i = 0; i < LOTTO_SIZE; i++) {
        printf("%d ", *(lotto + i));
    }
    printf("\n");
}
