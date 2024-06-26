
#include <stdio.h>
int main(){
    for (int row = 9; row >= 1; row--){
        for (int space = 1; space <= 9 + row -6; space++){
            printf(" ");
        }
        for (int col = row; col <= 9; col++){
            printf("%d ",col);
        }

        printf("\n");
    }
}
