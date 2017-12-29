#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

#include "main.h"

int main(int argc, char **argv) {
    int c;

    while ((c = getopt(argc, argv, "hv")) != -1) {
        switch (c) {
            case 'h':
                print_help();
                exit(0);
            case 'v':
                print_version();
                exit(0);
            case '?':
                if (isprint(optopt))
                    fprintf(stderr, "Unknown option `-%c'.\n", optopt);
                else
                    fprintf(stderr,
                            "Unknown option character `\\x%x'.\n",
                            optopt);
                return 1;
            default:
                break;
        }
    }

    print_path();
}

void print_path() {
    char *input = getenv("PATH");
    char *token = strtok(input, ":");
    while(token) {
        puts(token);
        token = strtok(NULL, ":");
    }
}

void print_help() {
    printf("%s", helpstring);
    exit(0);
}

void print_version(){
    printf("path v%s\n", PATH_VERSION);
    exit(0);
}