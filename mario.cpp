#include "iostream"
using namespace std                                                           ;

int main() {
  int n                                                                       ;
  cout << "Height: "                                                          ;
  cin >> n                                                                  ;
  for (int i=2; i < (n+2); i++)                                               {
    for (int j=1; j < (n+1-i); j++)                                           {
      cout << " "                                                             ;
                                                                              }
    for (int j=1; j <= i; j++)                                                {
      cout << "#"                                                             ;
                                                                              }
    cout << "\n"                                                              ;
                                                                              }
                                                                              }
