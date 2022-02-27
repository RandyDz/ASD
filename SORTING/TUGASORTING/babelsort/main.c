#include <stdio.h>
#include <stdlib.h>

//BABEL SORT
void tukar(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubble_sort(int arr[],int n){
for(int i=1;i<n;i++)
{
    for(int j=n-1;j>=i;j--)
    {
        if(arr[j]<arr[j-1]) tukar(&arr[j],&arr[j-1]);
    }
}
}


int main()
{
    int n,bil[100];
    printf("Masukkan ukuran data : ");
    scanf(" %d", &n);
    printf("Masukkan angka : \n");
    for(int i=0; i<n;i++){
    scanf(" %d", &bil[i]);
    }
   bubble_sort(bil,n);
   printf("Hasil pengurutan sebagai berikut:\n");
    for(int i = 0; i < n; i++){
    printf("%d ", bil[i]);
  }
  printf("\n");
  return 0;
}
