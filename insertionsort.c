#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertionSort(int *array, int n);
void print(int *array, int n);

int main()
{
  int *arrayPointer = (int *)calloc(15, sizeof(int));

  int array[] = {17, 8, 21, 6, 2, 9};

  memcpy(arrayPointer, array, sizeof(array));

  print(arrayPointer, 6);
  insertionSort(arrayPointer, 6);

  return 0;
}

void insertionSort(int *array, int n)
{
  for (int j = 1; j < n; j++)
  {
    int chave = array[j];
    int i = j - 1;
    while ((array[j] > chave) && i >= 0)
    {
      array[i + 1] = array[i];
      i--;
    }
    array[i + 1] = chave;
  }
}

void print(int *array, int n)
{
  puts("");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", array[i]);
  }
  puts("");
}
