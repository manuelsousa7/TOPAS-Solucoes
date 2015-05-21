#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

char * prepare(char * str) {
  char * iter = str;

  while (*iter != '\0')
  {
    *iter = tolower(*iter);
    iter++;
  }

  sort(str,str+strlen(str));
  while (*str < 'a')
    str++;

  return str;
}

int main()
{
        char string[201],string1[201],* str1i = NULL, * str2i = NULL;
        fgets (string, 201, stdin);
        str1i = prepare(string);
        fgets (string1, 201, stdin);
        str2i = prepare(string1);
        if(strcmp(str2i,str1i)==0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        return 0;
}
