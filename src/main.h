//
// Created by Christopher Simpkins on 12/29/17.
//

#ifndef PATH_MAIN_H
#define PATH_MAIN_H

inline void print_help();
inline void print_version();
inline void print_path();

#define PATH_VERSION "0.1.0"

const char *helpstring = "===================================\n"
" path\n"
" Copyright 2017 Christopher Simpkins\n"
" MIT License\n"
"====================================\n\n"
"Display the system PATH as an ordered newline delimited list with decreasing priority level.\n\n"
" Options:\n\n"
"   -h    Display application help\n"
"   -v    Display application version\n\n";


#endif //PATH_MAIN_H
