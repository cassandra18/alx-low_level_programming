#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void handleError(const char *error_message, const char *file_name);
void print_elf_header_info(Elf64_Ehdr *elf_header);
int _strlen(char *str);
void close_file(int fd);
char *create_buffer(char *file);
#endif
