#include <stdio.h>
#include <stdlib.h>


int main() {

    int p, *score, size, n;
    
    printf("Enter the nuber of blocks\n");
    scanf("%d", &n);

    score = (int*) calloc (n, sizeof(int));

    if(score == NULL){

        printf("memory space unavailable");
    }
    
    printf("Enter the elements\n");
    for (p=0; p<n; p++) {

        scanf("%d", (score+p));
    }

   
    for (p=0; p<n; p++) {

        printf(" %d is sored in %d adress\n", *(score + p), (score + p));
    }

    free(score);





    return 0;
}