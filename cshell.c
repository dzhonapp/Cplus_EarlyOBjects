#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// Needs some improvements!  

void parseCmd(char* cmd, char** params);
int executeCmd(char** params);

#define MAX_COMMAND_LENGTH 1000
#define MAX_NUMBER_OF_PARAMS 100

int main()
{
    char cmd[MAX_COMMAND_LENGTH + 1];
    char* params[MAX_NUMBER_OF_PARAMS + 1];

    int cmdCount = 0;

    while(1) {
     
        printf("me@shell %d> ", ++cmdCount);

        // Read command from standard input, exit on Ctrl+D
        if(fgets(cmd, sizeof(cmd), stdin) == NULL) break;

        // Remove trailing newline character, if any
        if(cmd[strlen(cmd)-1] == '\n') {
            cmd[strlen(cmd)-1] = '\0';
        }

        // Split cmd into array of parameters
        parseCmd(cmd, params);

       // Execute command
        if(executeCmd(params) == 0) break;
    }

    return 0;
}

// Split cmd into array of parameters
void parseCmd(char* cmd, char** params)
{       
    for(int i = 0; i < MAX_NUMBER_OF_PARAMS; i++) {
        params[i] = strsep(&cmd, " ");
        if(params[i] == NULL) break;
    }
}

int executeCmd(char** params)
{
    // Fork process
    pid_t pid = fork();

    // Error needs some pids work here
  

    // Child process Needs Some work here
    

    // Parent process Needs Some work
    
}
