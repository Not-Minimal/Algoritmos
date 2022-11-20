The sprintf and sscanf Functions

A formatted string can be created with the sprintf() function. This is useful for building a string from other data types.
#include <stdio.h>
int main()
{
  char info[100];
  char dept[ ] = "HR";
  int emp = 75;
  sprintf(info, "The %s dept has %d employees.", dept, emp);
  printf("%s\n", info);

  return 0;
} 
Another useful function is sscanf() for scanning a string for values. The function reads values from a string and stores them at the corresponding variable addresses.
For example:
#include <stdio.h>
int main()
{
  char info[ ] = "Snoqualmie WA 13190";
  char city[50];
  char state[50];
  int population;
  sscanf(info, "%s %s %d", city, state, &population);
  printf("%d people live in %s, %s.", population, city, state);

  return 0;
} 