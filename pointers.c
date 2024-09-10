#include <stdio.h>
#include <stdlib.h>

void pointers(int *x);

int main()
{
  int *a;
  int b = 778;

  a = &b;

  printf("Conteudo de B: %d\n", b);

  printf("Endereco de B: %p\n", &b);

  printf("O que A guarda: %p\n", a);

  pointers(a);

  printf("Conteudo de B: %d\n", b);

  return 0;
}

void pointers(int *x)
{
  *x = 87;
}