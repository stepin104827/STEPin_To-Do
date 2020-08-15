#include<stdio.h>
#include<conio.h>
#include <string.h>
//To upload on Github samrtcard=1.6.0
int main() {
   char string[100] = "my_name_is_edcast_future_skills";
   char *token=NULL;
   token = strtok(string, "_");
   // To extract all other tokens

   while( token != NULL ) {
      printf( " %s\n", token );//printing each token
      token = strtok(NULL, "_");
      }
return 0;
}
