#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include <fcntl.h>
/**
 * get_string - returns the string mapped to a spcific option
 * @member: member of the struct
 * @n: specifies the member
 * Return: string
 */
char *get_string(unsigned int member, int n)
{
	unsigned int opt[] = {ELFOSABI_NONE, ELFOSABI_SYSV, ELFOSABI_HPUX,
		       ELFOSABI_NETBSD, ELFOSABI_LINUX, ELFOSABI_SOLARIS,
		       ELFOSABI_IRIX, ELFOSABI_FREEBSD, ELFOSABI_TRU64,
		       ELFOSABI_ARM, ELFOSABI_STANDALONE};
	char *map[] = {"UNIX - System V", "UNIX - System V", "HP-UX",
		       "UNIX - NetBSD", "Linux", "UNIX - Solaris", "IRIX",
		       "FreeBSD", "TRU64 UNIX", "ARM architecture",
		       "Stand-alone (embedded)", NULL};
	unsigned int opt2[] = {ET_NONE, ET_REL, ET_EXEC, ET_DYN, ET_CORE};
	char *map2[] = {"NONE (Unknown type)", "REL (Relocatable file)",
			"EXEC (Executable file)", "DYN (Shared object file)",
			"CORE (Core file)", NULL};
	unsigned int i;

	for (i = 0; n == 1 && i < sizeof(opt) / sizeof(opt[0]); i++)
	{
		if (member == opt[i])
			return (map[i]);
	}
	for (i = 0; n == 2 && i < sizeof(opt2) / sizeof(opt2[0]); i++)
	{
		if (member == opt2[i])
			return (map2[i]);
	}
	return (NULL);
}
/**
 * print_elf - a function that displays the members contained in the ELF
 * header at the start of an ELF file.
 * @header: pointer to the head
 * Return: void
 */
void print_elf(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
	       header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
	       header->e_ident[EI_DATA] == ELFDATA2LSB ?
	       "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %s\n",
	       header->e_ident[EI_VERSION] == EV_CURRENT ? "1 (current)" :
	       "0x1");
	printf("  OS/ABI:                            %s\n",
	       get_string(header->e_ident[EI_OSABI], 1));
	printf("  ABI Version:                       %d\n",
	       header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
	       get_string(header->e_type, 2));
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr header;
	ssize_t bytes_read;
	int fd;

	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		exit(98);
	}
	if (access(argv[1], F_OK) == -1)
	{
		printf("File does not exist\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Failed to open file\n");
		exit(98);
	}
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1)
	{
		printf("Failed to read fd %d\n", fd);
		exit(98);
	}
	if (bytes_read < sizeof(Elf64_Ehdr))
	{
		printf("Not an ELF file\n");
		exit(98);
	}
	print_elf(&header);
	close(fd);
	return (0);
}
