#include "lib.h"

struct _no
{
  int key;
  No *left;
  No *rigth;
};

void pre_order(No *no)
{
  printf("%d\n", no->key);
  if (no->left != NULL)
  {
    pre_order(no->left);
  }

  if (no->rigth != NULL)
  {
    pre_order(no->rigth);
  }
}

void post_order(No *no)
{
  if (no->left != NULL)
  {
    post_order(no->left);
  }
  if (no->rigth != NULL)
  {
    post_order(no->rigth);
  }
  printf("%d\n", no->key);
}

void in_order(No *no)
{
  if (no->left != NULL)
  {
    in_order(no->left);
  }
  printf("%d\n", no->key);
  if (no->rigth != NULL)
  {
    in_order(no->rigth);
  }
}

int heigth(No *no)
{
  int hl = 0, hr = 0;
  if (no == NULL)
    return -1;
  else if (no->left == NULL && no->rigth == NULL)
    return 0;
  else
  {
    if (no->left != NULL)
      hl = heigth(no->left);
    if (no->rigth != NULL)
      hr = heigth(no->rigth);
  }

  return 1 + max_number(hl, hr);
}

int max_number(int a, int b)
{
  return a > b ? a : b;
}

No *create_node(int value)
{
  No *node = calloc(1, sizeof(No));
  node->key = value;
  node->left = NULL;
  node->rigth = NULL;

  return node;
}

void insert_node(No **node, int value)
{
  if (*node == NULL)
  {
    *node = create_node(value);
  }
  else
  {
    if ((*node)->key == value)
      puts("Element already exists in the tree. ");
    else if (value < (*node)->key)
    {
      insert_node(&(*node)->left, value);
    }
    else
    {
      insert_node(&(*node)->rigth, value);
    }
  }
}