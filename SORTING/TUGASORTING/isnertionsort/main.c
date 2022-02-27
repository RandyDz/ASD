#include <stdio.h>
#include <stdlib.h>
//INSERTION
int main()
{
int n,  i, j,array[50], tmp;
 printf("Masukkan jumlah banyaknya data: ");
  scanf("%d", &n);
  printf("Masukkan angka :\n");
  for(i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }


for(int i=1;i<n;i++)
{
tmp = array[i];
j = i -1;
while(array[j]>tmp && j>=0)
{
array[j+1] = array[j];
j--;
}
array[j+1] = tmp;
}
  printf("Hasil pengurutan insertion sort sebagai berikut:\n");
  for (i = 0; i <= n-1; i++){
    printf("%d ", array[i]);
  }
  printf("\n");

    return 0;
}
