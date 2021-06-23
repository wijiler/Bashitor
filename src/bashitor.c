#include <stdio.h>
#include <string.h>
#include "warninglog.txt"


    void info();
    void help();
    void error();
    void error404();

int main( int argc, char *argv[]) {
    
    if(argc == 0) {
        error404();
    }
    
    if (argc == 1)
    {
        info();
    }

    if (argc == 2)
    {
        if(strcmp( argv[1], "-h" ) == 0) 
        {
            help();
        }
    }
   
}

    void info() {
    printf("Hello Bashitor here please do bashitor -h for more info\r\n");
    }

    void help() {
        printf("Arguments for bashitor\n -A --add adds a line\n -e --eof sets the position of the line to the end of the file\n -l --line chooses that line to type on\n -r --rm removes a specific line\r\n");
    }

    void error() {
        fprintf(stderr, "WARNING: invalid arguments or no arguments");
    }

    void error404() {
        fprintf (stderr, "Something is not configured correct or bashitor is not in your $PATH please try echo $PATH to see if this is a path related problem");
    }

