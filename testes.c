
#include "lib.h"
#include "sizes.h"

int main()
{

  srand(time(NULL));

  teste_heap_sort_1BI();
  return 0;
}

void teste_insertion_sort_1K()
{
  clock_t inicio, final;
  double tempo_total;
  long *array;

  array = gerar_array_vindo_do_arquivo("1K.txt");

  inicio = clock();

  insertion_sort(array, size_1K);

  final = clock();

  tempo_total = (final - inicio) / CLOCKS_PER_SEC;

  printf("Array ordenado com insertion sort sort: ");
  print(array, size_1K);

  printf("Tempo total: %f\n", tempo_total);

  free(array);
}

void teste_heap_sort_1K()
{
  clock_t inicio, final;
  double tempo_total;
  long *array;

  array = gerar_array_vindo_do_arquivo("1K.txt");

  inicio = clock();

  heap_sort(array, size_1K);

  final = clock();

  tempo_total = (final - inicio) / CLOCKS_PER_SEC;

  printf("Array ordenado com heap sort: ");
  print(array, size_1K);

  printf("Tempo total: %f\n", tempo_total);

  free(array);
}

void teste_insertion_sort_100K()
{
  clock_t inicio, final;
  double tempo_total;
  long *array;

  array = gerar_array_vindo_do_arquivo("100K.txt");

  inicio = clock();

  insertion_sort(array, size_100K);

  final = clock();

  tempo_total = (final - inicio) / CLOCKS_PER_SEC;

  printf("Array ordenado com heap sort: ");
  print(array, size_100K);

  printf("Tempo total: %f\n", tempo_total);

  free(array);
}

void teste_heap_sort_100K()
{
  clock_t inicio, final;
  double tempo_total;
  long *array;

  array = gerar_array_vindo_do_arquivo("100K.txt");

  inicio = clock();

  heap_sort(array, size_100K);

  final = clock();

  tempo_total = (final - inicio) / CLOCKS_PER_SEC;

  printf("Tempo total: %f\n", tempo_total);

  free(array);
}

void teste_insertion_sort_10M()
{
  clock_t inicio, final;
  double tempo_total;
  long *array;

  array = gerar_array_vindo_do_arquivo("10M.txt");

  inicio = clock();

  insertion_sort(array, size_10M);

  final = clock();

  tempo_total = (final - inicio) / CLOCKS_PER_SEC;

  printf("Array ordenado com heap sort: ");
  print(array, size_10M);

  printf("Tempo total: %f\n", tempo_total);

  free(array);
}

void teste_heap_sort_10M()
{
  clock_t inicio, final;
  double tempo_total;
  long *array;

  array = gerar_array_vindo_do_arquivo("10M.txt");

  inicio = clock();

  heap_sort(array, size_10M);

  final = clock();

  tempo_total = (final - inicio) / CLOCKS_PER_SEC;

  printf("Tempo total: %f\n", tempo_total);

  free(array);
}

void teste_insertion_sort_1BI()
{
  clock_t inicio, final;
  double tempo_total;
  long *array;

  array = gerar_array_vindo_do_arquivo("1K.txt");

  inicio = clock();

  heap_sort(array, size_1BI);

  final = clock();

  tempo_total = (final - inicio) / CLOCKS_PER_SEC;

  printf("Array ordenado com heap sort: ");
  print(array, size_1BI);

  printf("Tempo total: %f\n", tempo_total);

  free(array);
}

void teste_heap_sort_1BI()
{
  clock_t inicio, final;
  double tempo_total;
  long *array;

  array = gerar_array_vindo_do_arquivo("1BI.txt");

  inicio = clock();

  heap_sort(array, size_1BI);

  final = clock();

  tempo_total = (final - inicio) / CLOCKS_PER_SEC;

  printf("Tempo total: %f\n", tempo_total);

  free(array);
}