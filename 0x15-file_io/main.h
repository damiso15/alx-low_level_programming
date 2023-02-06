#ifndef MAIN_H
#define MAIN_H

/* C Libraries */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);

#endif
