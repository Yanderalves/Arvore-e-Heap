#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
  No *root = NULL;

  insert_node(&root, 15);
  insert_node(&root, 18);
  insert_node(&root, 13);

  int h = heigth(root);

  printf("Heigth Tree: %d\n", h);

  return 0;
}
