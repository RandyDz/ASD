#include <stdio.h>
#include <stdlib.h>

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int array[], int n){
    for(int step=0; step < n-1; step++){
        int min_idx = step;
        for (int i = step+1; i<n; i++){
            if(array[i]<array[min_idx])
            min_idx = i;
        }
        tukar(&array[min_idx],&array[step]);
    }
}


void printArray(int array[], int n){
    for(int i=0; i<n; ++i){
    printf("%d ",array[i]);
    }
    printf("\n");
}


int main(){
  int n, array[50], i, j, tmp;
  printf("Masukkan jumlah data: ");
  scanf("%d", &n);
  printf("Masukkan angka integer\n");
  for(i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }
 selection_sort (array,n);
 printf("Hasil pengurutan selection sort sebagai berikut:\n");
 printArray( array, n);

}
