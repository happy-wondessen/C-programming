#include <stdio.h>
#include <stdlib.h>


int main() {

    int p, *score, size;

    printf("How many scores \n");
    scanf("%d", &size);

    score = (int*) malloc (size * sizeof(int));
        if(score == NULL) {
            printf("No memory available");
        }
    printf("\nAddress of the first byte is %d", score);
    printf("\nInput the scores\n");

    for(p = 0; p< size; p++) {

        scanf("%i", (score + p));

    }
    printf("The entered scores are\n");
     for(p = 0; p< size; p++) {

        printf("%d\n", *(score + p));

    }

    free(score);


    return 0;
}