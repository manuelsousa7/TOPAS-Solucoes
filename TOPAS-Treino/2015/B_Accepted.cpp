#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
     char s1[100],s2[100];
     fgets (s1, 100, stdin);
     fgets (s2, 100, stdin);
     if(strcmp(s1,"aplauda suas maos\n")==0)
     cout << "bata palmas" << endl;
     if(strcmp(s1,"it has beaten palms\n")==0)
     cout << "clap your hands" << endl;
     if(strcmp(s1,"bata palmas\n")==0)
     cout << "bata palmas" << endl;
     if(strcmp(s1,"clap your hands\n")==0)
     cout << "clap your hands" << endl;
     if(strcmp(s2,"aplauda suas maos\n")==0)
     cout << "bata palmas" << endl;
     if(strcmp(s2,"it has beaten palms\n")==0)
     cout << "clap your hands" << endl;
     if(strcmp(s2,"bata palmas\n")==0)
     cout << "bata palmas" << endl;
     if(strcmp(s2,"clap your hands\n")==0)
     cout << "clap your hands" << endl;
     return 0;
}
