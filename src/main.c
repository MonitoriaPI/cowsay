#include <stdio.h>
#include "core/cow.h"
#include "utils/argv_handler.h"

void main(int argc, char *argv[]) {
    if (!is_argv_valid(argc, argv)) return;
    char *target_str = define_string_for_cow(argc, argv);

    print_cow(target_str);
}
