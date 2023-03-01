#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void free_matrix(int **a, int rows){
    // free(a); // wrong as cols array are not free
    for(int i=0; i<rows; i++){
        free(a[i]);
    }
    free(a); 
}
int main(){
    
return 0;
}