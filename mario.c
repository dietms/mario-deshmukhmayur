//CS50 PSet 1-C: Mario
#include<stdio.h>

void triangle(int n)                                                          {
  if (n>1 && n<23)                                                            {
    for (int i=2; i < (n+2); i++)                                             {
      for (int j=0; j < (n+1-i); j++)                                         {
        printf(" ")                                                           ;
                                                                              }
      for (int j=1; j <= i; j++)                                              {
        printf("#")                                                           ;
                                                                              }
      printf("\n")                                                            ;
                                                                              }
                                                                              }
                                                                              }

int main()                                                                    {
  int height                                                                  ;
  printf("Height: ")                                                          ;
  scanf("%d", &height)                                                        ;
  triangle(height)                                                            ;
  return 0                                                                    ;
                                                                              }
