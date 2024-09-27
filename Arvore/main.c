#include <stdio.h>
#include <stdlib.h>
#include "lib.c"

int main()
{
  No *raiz = (No *)calloc(sizeof(No), 1);
  No *node2 = (No *)calloc(sizeof(No), 1);
  No *node3 = (No *)calloc(sizeof(No), 1);
  No *node4 = (No *)calloc(sizeof(No), 1);
  No *node5 = (No *)calloc(sizeof(No), 1);

  raiz->chave = 15;
  node2->chave = 16;
  node3->chave = 17;
  node4->chave = 98;
  node5->chave = 77;

  raiz->esq = node2;
  raiz->dir = node3;
  node2->esq = node4;
  node4->dir = node5;

  pos_ordem(raiz);

  printf("Altura da arvore: %d\n", raiz->altura);

  return 0;
}
