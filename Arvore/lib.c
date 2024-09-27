#include "lib.h"

struct _no
{
  int chave;
  int altura;
  No *esq;
  No *dir;
};

void pre_ordem(No *no)
{
  printf("%d\n", no->chave);
  if (no->esq != NULL)
  {
    pre_ordem(no->esq);
  }

  if (no->dir != NULL)
  {
    pre_ordem(no->dir);
  }
}

void pos_ordem(No *no)
{
  if (no->esq != NULL)
  {
    pos_ordem(no->esq);
  }
  if (no->dir != NULL)
  {
    pos_ordem(no->dir);
  }
  printf("%d\n", no->chave);
}

void in_ordem(No *no)
{
  if (no->esq != NULL)
  {
    in_ordem(no->esq);
  }
  printf("%d\n", no->chave);
  if (no->dir != NULL)
  {
    in_ordem(no->dir);
  }
}

void visitar(No *no)
{
  int ah1 = 0;
  int ah2 = 0;
  if (no->esq != NULL)
  {
    ah1 = no->esq->altura;
  }
  else
  {
    ah1 = 0;
  }

  if (no->dir != NULL)
  {
    ah2 = no->dir->altura;
  }
  else
  {
    ah2 = 0;
  }

  if (ah1 > ah2)
  {
    no->altura = ah1 + 1;
  }
  else
  {
    no->altura = ah2 + 1;
  }
}

void calcular_altura(No *no)
{
  if (no->esq != NULL)
  {
    pos_ordem(no->esq);
  }
  if (no->dir != NULL)
  {
    pos_ordem(no->dir);
  }
  visitar(no);
}