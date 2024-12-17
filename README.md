# C-Run
A simple singly library file for check if a its the first the application is ran for the first time.
This simple creates a `run.flag` file that will be made one the first run.
If this file exists it means that the program has been ran before, if it does not exist that means the file has been ran before

# Table of Contents

- [Example](#Example)
- [Return Values](#Return-Values)
- [Depdencies](#Dependencies)
- [FAQ](#FAQ)
- [Side Note](#Side-Note)

# Examples
```c
#include <stdio.h>
#include "What ever file you rename firstran.h to"

int main() {
    if (WasRan() == 0) { // Function WasRan() Returns 0 if the file exists and 1 if it does not
        printf("It was ran before");
    } else {
        printf("it was not ran");
    }

    return 0;   
}
```
As i said the function WasRan() returns 0 if the file does infact exists and 1 if it does not.
So you could also do something like this:

```c
#include <stdio.h>
#include "What ever file you rename firstran.h to"

int main() {
    int WasItRan == WasRan();

    if (WasItRan == 0) { // Function WasRan() Returns 0 if the file exists and 1 if it does not
        printf("It was ran before");
    } else {
        printf("it was not ran");
    }

    return 0;   
}
```
You may also want to pass in a custom file name for the flag file. You can do that by passing in the filename as an argument.
For example:
``` c
#include <stdio.h>
#include "What ever file you rename firstran.h to"

int main() {
    int WasItRan == WasRan("filename.flag");

    if (WasItRan == 0) { // Function WasRan() Returns 0 if the file exists and 1 if it does not
        printf("It was ran before");
    } else {
        printf("it was not ran");
    }

    return 0;   
}
```

If you don't want to have a custom file name simply just don't pass any arguments when calling `WasRan`.
# Return Values
| Value | Meaning |
| ----- | ------- |
| 1 | The file doesn't exist |
| 0 | The file exists |
| -1 | Creation of the flag file failed

# Dependencies
Just stdio.h

# FAQ
Q: How do i reset this?
A: Simply just delete the file

Q: Will more features be added?
A: Yes defenitly

# Side Note
This was made in like 10 Minutes.
Hate all you want im proud of it
