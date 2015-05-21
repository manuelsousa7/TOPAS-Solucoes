#include <stdio.h>
#include <string.h>

main()
{
     char string[40],string1[40];
     fgets (string, 40, stdin);
     fgets (string1, 40, stdin);
     if(strcmp(string,"aplauda suas maos\n")==0)
     printf("bata palmas");
     if(strcmp(string,"it has beaten palms\n")==0)
     printf("clap your hands");
     if(strcmp(string,"bata palmas\n")==0)
     printf("bata palmas");
     if(strcmp(string,"clap your hands\n")==0)
     printf("clap your hands");
     printf("\n");
     if(strcmp(string1,"aplauda suas maos\n")==0)
     printf("bata palmas");    
     if(strcmp(string1,"it has beaten palms\n")==0)
     printf("clap your hands");
     if(strcmp(string1,"bata palmas\n")==0)
     printf("bata palmas");
     if(strcmp(string1,"clap your hands\n")==0)
     printf("clap your hands");
     printf("\n");
     return 0;
}
