extern void *malloc(unsigned long size);

int *add (int first, int second)
{
  int *i = malloc(sizeof (int));
  *i = first + second;
  return i;
}
