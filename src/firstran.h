/* File: firstran.h
* * @param none 
* * @return 0 if the file exists
* * @return 1 if the file does not exist
* * @return -1 if creation of the file fails 
* */

#include <stdio.h>

int WasRan() {
  const char *FlagFile = "ran.flag";
  FILE *file = fopen(FlagFile, "r");

  if (file) {
    return 0;
  } else {
    file = fopen(FlagFile, "w");

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
