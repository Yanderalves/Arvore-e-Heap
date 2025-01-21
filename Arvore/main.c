#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
  No *root = NULL;
  int n = 10;

  int *vector = calloc(n, sizeof(int));

  fill_vector(vector, n);

  printf("Insert %d nodes:", n);

  for (int i = 0; i < n; i++)
  {
    insert_node(&root, vector[i]);
  }

  puts("=================");
  puts("Print Tree In Pre Order");
  pre_order(root);
  puts("\n");

  puts("=================");
  puts("Print Tree In Order");
  in_order(root);
  puts("\n");

  puts("=================");
  puts("Print Tree In post Order");
  post_order(root);
  puts("\n");

  return 0;
}
