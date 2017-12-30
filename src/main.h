/*
 * Copyright 2017 Christopher Simpkins
 * MIT License
 */

#ifndef PATH_MAIN_H
#define PATH_MAIN_H

void print_help();
void print_version();
void print_path();
void print_usage();

#define PATH_VERSION "0.9.0"

const char *helpstring = "===============================================\n"
" path\n"
" Copyright 2017 Christopher Simpkins\n"
" MIT License\n\n"
" Source: https://github.com/chrissimpkins/path\n"
"===============================================\n\n"
"Display the system PATH as an ordered newline delimited list with decreasing priority level.\n\n"
"Execute with a call to the `path` executable from any directory path:\n"
"  $ path\n\n"
" Options:\n\n"
"   -h    Display application help\n"
"   -u    Display application usage\n"
"   -v    Display application version\n\n";

const char *usagestring = "Usage:\n $ path [-huv]\n";

#endif //PATH_MAIN_H
