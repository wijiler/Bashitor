#include <stdio.h>
#include <string.h>
#include "warninglog.txt"

    
    void info();
    void help();
    void error ();

int main( int argc, char *argv[]) {
    
    if(argc == 0) {
        error();
    }
    
    if (argc == 1)
    {
        error();
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

    void error(FILE* error) {
    error = fopen("warninglog.txt", "r+");
    
    fprintf(error, "Somethings not right it errored");  
    printf("Hello Bashitor here please do bashitor -h for more info\r\n");
        fclose(error);
    }

