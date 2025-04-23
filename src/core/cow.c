//
// Created by boreges on 4/23/25.
//

#include "cow.h"
#include <stdio.h>

void print_cow(char *str) {
    printf("%s\n", str);
    printf("        %c   ^__^\n\
         %c  (%c%c)\\_______\n\
            (__)\\       )\\/\\\n\
                ||----w |\n\
                ||     ||\n",UPPER_BUBBLE, LOWER_BUBBLE, EYES, EYES);
}
