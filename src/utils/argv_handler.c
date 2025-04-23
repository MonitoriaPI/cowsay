//
// Created by boreges on 4/23/25.
//

#include "argv_handler.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool is_argv_valid(int argc, char *argv[]) {
    if (argv == NULL || argc == 1) return false;

    for (int i = 1; i < argc; i++) {
        if (argv[i] == NULL || argv[i] == "") return false;
    }

    return true;
}

char* define_string_for_cow(int argc, char *argv[]) {
    if (!is_argv_valid(argc, argv)) return NULL;

    int total_length = 0;
    for (int i = 1; i < argc; i++) {
        total_length += strlen(argv[i]);
        if (i < argc - 1) {
            total_length++;   // EOF -> \0
        }
    }

    char* target_string = malloc(total_length + 1);
    for (int i = 1; i < argc; i++) {
        strcat(target_string, argv[i]);
        if (i < argc - 1) {
            strcat(target_string, " ");
        }
    }

    return target_string;
}