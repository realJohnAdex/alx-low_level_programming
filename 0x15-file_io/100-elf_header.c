#include <elf.h>
#include "main.h"

/**
 * is_file_elf - check if elf_file is valid
 * @e_ident: pointer to the e_ident
 *
 * Return: void
 */
void is_file_elf(unsigned char *e_ident)
{
	if (e_ident[0] != 127 &&
		e_ident[1] != 'E' &&
		e_ident[2] != 'L' &&
		e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}

/**
 * print_magic - print elf_file magic number in hex
 * @e_ident: pointer to the e_ident
 *
 * Return: void
 */
void print_magic(unsigned char *e_ident)
{
	int index = 0;

	printf("  Magic:                             ");

	while (index < EI_NIDENT)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		index++;
	}
}

/**
 * print_class - print elf_file class
 * @e_ident: pointer to the e_ident
 *
 * Return: void
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}

}

/**
 * print_data - print elf_file class
 * @e_ident: pointer to the e_ident
 *
 * Return: void
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA]) /*EI_DATA - Data encoding*/
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * print_version - print elf_file version
 * @e_ident: pointer to the e_ident
 *
 * Return: void
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           ");

	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("%d (current)\n", e_ident[EI_VERSION]);
	else
		printf("%i\n", e_ident[EI_VERSION]);
}

/**
 * print_osabi - print elf_file OS/ABI application binary interface
 * @e_ident: pointer to the e_ident
 *
 * Return: void
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - print elf_file ABI application binary interface
 * @e_ident: pointer to the e_ident
 *
 * Return: void
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       ");
	printf("%d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - print elf_file type
 * @e_type: elf object file type
 * @e_ident: pointer to the e_ident
 *
 * Return: void
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Exexutable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x\n", e_type);
	}
}

/**
 * print_entry - print elf_file entry address
 * @e_entry: the virtual memory address from where the
 *           process starts executing
 * @e_ident: pointer to the e_ident
 *
 * Return: void
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_file - Close the elf file
 * @elf_file: fil_des for elf file
 *
 * Return: void
 */
void close_file(int elf_file)
{
	if (close(elf_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf_file);
		exit(98);
	}
}

/**
 * main - Entry point
 *
 * @ac: argument counter
 * @av: argument vector
 *
 * Return:: Always 0.
 */
int main(int __attribute__((__unused__)) ac, char **av)
{
	Elf64_Ehdr *elf;
	int elf_file, read_elf;

	elf_file = open(av[1], O_RDONLY);
	if (elf_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(98);
	}
	elf = malloc(sizeof(Elf64_Ehdr));
	if (elf == NULL)
	{
		close_file(elf_file);
		free(elf);
		dprintf(STDERR_FILENO, "Error: Can't allocate memory for %s\n", av[1]);
		exit(98);
	}
	read_elf = read(elf_file, elf, sizeof(Elf64_Ehdr));
	if (read_elf == -1)
	{
		free(elf);
		close_file(elf_file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	is_file_elf(elf->e_ident);
	printf("ELF Header:\n");
	print_magic(elf->e_ident);
	print_class(elf->e_ident);
	print_data(elf->e_ident);
	print_version(elf->e_ident);
	print_osabi(elf->e_ident);
	print_abi(elf->e_ident);
	print_type(elf->e_type, elf->e_ident);
	print_entry(elf->e_entry, elf->e_ident);
	free(elf);
	close_file(elf_file);
	return (0);
}
