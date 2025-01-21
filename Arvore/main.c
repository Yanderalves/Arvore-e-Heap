#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
  No *root = NULL;

  insert_node(&root, 15);
  insert_node(&root, 18);
  insert_node(&root, 13);

  No *node_search = search(&root, 78);

  if (node_search != NULL)
    puts("Element found");
  else
    puts("Element not found");

  return 0;
}
