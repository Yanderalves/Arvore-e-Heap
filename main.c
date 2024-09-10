#include <stdio.h>

void subir(int i, int array[]);
void construir(int array[], int n);
void descer(int i, int n, int array[]);

int main()
{
  int array[] = {17, 8, 9, 6, 2, 21};

  construir(array, 6);

  for (int i = 0; i < 6; i++)
  {
    printf("%d ->", array[i]);
  }
  return 0;
}

void troca(int i, int j, int array[])
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

void descer(int i, int n, int array[])
{
  int j = (2 * i) + 1;
  if (j <= n)
  {
    if (j + 1 < n)
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

void construir(int array[], int n)
{
  for (int i = (n / 2) - 1; i >= 0; i--)
  {
    descer(i, n, array);
  }
}