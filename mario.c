#include<stdio.h>

int main()                                                                    {
  int n                                                                       ;
  printf("Height: ")                                                          ;
  scanf("%d", &n)                                                             ;
  for (int i=2; i < (n+2); i++)                                               {
    for (int j=1; j < (n+1-i); j++)                                           {
      printf(" ")                                                             ;
                                                                              }
    for (int j=1; j <= i; j++)                                                {
      printf("#")                                                             ;
                                                                              }
    printf("\n")                                                              ;
                                                                              }
                                                                              }
