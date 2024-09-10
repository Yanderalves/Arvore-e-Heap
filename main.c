#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void subir(int i, int array[]);
void construir(int *array, int *n);
void descer(int i, int *n, int *array);
// void remover();
void print(int *array, int *n);

int main()
{
  int n = 6;
  // int *array = (int *)calloc(n, sizeof(int));

  // for (int i = 0; i < n; i++)
  //{
  //   array[i] = rand() % 1000;
  // }

  int array[] = {17, 8, 21, 6, 2, 9};
  construir(array, &n);

  printf("Heap:");
  print(array, &n);

  return 0;
}

void troca(int i, int j, int *array)
{
  int aux = array[i];
  array[i] = array[j];
  array[j] = aux;
}

void subir(int i, int array[])
{
  int j = (i / 2) + 1;
  if (j >= 1)
  {
    if (array[i] > array[j])
    {
      troca(i, j, array);
      subir(j, array);
    }
  }
}

void descer(int i, int *n, int *array)
{
  int j = (2 * i) + 1;
  if (j <= *n)
  {
    if (j + 1 < *n)
    {
      if (array[j + 1] > array[j])
      {
        j = j + 1;
      }
    }
    if (array[i] < array[j])
    {
      troca(i, j, array);
    }
    descer(j, n, array);
  }
}

void construir(int array[], int *n)
{
  for (int i = (*n / 2) - 1; i >= 0; i--)
  {
    descer(i, n, array);
  }
}

// void remover(int *n, int *array)
// {
//   if (*n > 0)
//   {
//     array[0] = array[*n];
//     *n = *n - 1;
//     descer(0, n, array);
//   }
//   else
//   {
//     puts("Underflow");
//   }
// }

void print(int *array, int *n)
{
  puts("");
  for (int i = 0; i < *n; i++)
  {
    printf("%d ", array[i]);
  }
  puts("");
}