/* File: firstran.h
* * Function: WasRan
* * @param none 
* * @return 0 if the file exists
* * @return 1 if the file does not exist
* * @return -1 if creation of the file fails 
* * End of function
*
*
* */

#ifndef C_RUN
#define C_RUN

#include <stdio.h>

int WasRan(const char *flagfile_name) {
  const char *filename = NULL;

  if (flagfile_name == NULL) {
    filename = "flag.flag";
  } else {
    filename = flagfile_name;
  }

  FILE *file = fopen(filename, "r");

  if (file) {
    return 0;
  } else {
    file = fopen(filename, "w");

    if (file) {
      fprintf(file, "it has been made");
      fclose(file); 
    } else {
      perror("Failed To Create Flag File");
      return -1;
    }

    return 1;
  }
}

#endif
