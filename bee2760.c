#include <stdio.h>

#include <string.h>
int
main ()
{
  char a[100], b[100], c[100], a1[10], b1[10], c1[10];
  printf ("give me a bottle of rum!\n");
  gets (a);
  gets (b);
  gets (c);
  memcpy (a1, a, 10);
  memcpy (b1, b, 10);
  memcpy (c1, c, 10);
  printf ("%s%s%s\n", a1, b1, c1);
  printf ("%s%s%s\n", b1, c1, a1);
  printf ("%s%s%s\n", c1, a1, b1);
  printf ("%s%s%s\n", a1, b1, c1);


  return 0;
}
