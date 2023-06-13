#include "main.h"

/**
 * print_elf_header_info - function to print elf info
 * @elf_filename: pointer to file
 */
void print_elf_header_info(const char *elf_filename)
{
FILE *file = fopen(elf_filename, "r");
size_t i;
Elf64_Ehdr elf_header;

if (file == NULL)
{
fprintf(stderr, "Error: Unable to open file %s\n", elf_filename);
exit(1);
}

if (fread(&elf_header, sizeof(elf_header), 1, file) != 1)
{
fprintf(stderr, "Error: Unable to read ELF header from file %s\n",
elf_filename);
fclose(file);
exit(2);
}

fclose(file);

printf("Magic: ");
for (i = 0; i < sizeof(elf_header.e_ident); i++)
{
printf("%02x ", elf_header.e_ident[i]);
}
printf("\n");

printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
printf("Type: %d\n", elf_header.e_type);
printf("Entry point address: %lx\n", (unsigned long)elf_header.e_entry);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * return: integer
 */
int main(int argc, char *argv[])
{
const char *elf_filename;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(3);
}

elf_filename = argv[1];
print_elf_header_info(elf_filename);

return (0);
}

