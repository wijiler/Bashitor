#include <stdio.h>
#include <string.h>
    void help();
    void error();
    void UIO();
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
        if(strcmp( argv[1], "-h" ) == 0) {
            help();
        }
       if(strcmp(argv[1], "-l") == 0) {
        UIO(); 
       } 
    }
   
}

    

    void UIO(char str[100]) {
       printf("enter code : "); 
        scanf("%s", str);
       printf("test %s\n\r", str);
    }
    void help() {
        printf("Arguments for bashitor\n -A --add adds a line\n -e --eof sets the position of the line to the end of the file\n -l --line chooses that line to type on\n -r --rm removes a specific line\r\n");
    }

    void error(FILE* error) {
    error = fopen("warninglog.txt", "w");
    
    fprintf(error, "Somethings not right it errored");  
    printf("Hello Bashitor here please do bashitor -h for more info\r\n");
        fclose(error);
    }

