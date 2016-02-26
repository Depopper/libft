#include "libft.h"

void swap(void **one, void **two)
{
  void *temp;

  temp = *one;
  *one = *two;
  *two = temp;
}
