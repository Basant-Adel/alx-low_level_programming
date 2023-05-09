#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - prints ELF magic bytes
 *@h: the ELF header struct
 *Return: ELF
 */

void print_magic(Elf64_Ehdr h)
{
	int b;

	printf("  Magic:   ");
	for (b = 0; b < EI_NIDENT; b++)
		printf("%2.2x%s", h.e_ident[b], b == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - prints ELF class
 *@h: the ELF header struct
 *Return: ELF
 */

void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_data - prints ELF data
 *@h: the ELF header struct
 *Return: ELF
 */

void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATANONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_version - prints ELF version
 *@h: the ELF header struct
 *Return: ELF
 */

void print_version(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi - prints ELF osabi
 *@h: the ELF header struct
 *Return: ELF
 */

void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			print_osabi_more(h);
			break;
	}
	printf("\n");
}


/**
 * print_osabi_more - prints ELF osabi more
 *@h: the ELF header struct
 *Return: ELF
 */

void print_osabi_more(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abiversion  - prints ELF ABI version
 *@h: the ELF header struct
 *Return: ELF
 */

void print_abiversion(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
		h.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the ELF type
 *@h: the ELF header struct
 *Return: ELF
 */

void print_type(Elf64_Ehdr h)
{
	char *n = (char *)&h.e_type;
	int b = 0;

	printf("  Type:                              ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		b = 1;
	switch (n[b])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", n[b]);
		break;
	}
	printf("\n");
}

/**
 * print_entry - prints the ELF entry point address
 *@h: the ELF header struct
 *Return: ELF
 */

void print_entry(Elf64_Ehdr h)
{
	int b = 0, len = 0;
	unsigned char *n = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		b = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!n[b])
			b--;
		printf("%x", n[b--]);
		for (; b >= 0; b--)
			printf("%02x", n[b]);
		printf("\n");
	}
	else
	{
		b = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!n[b])
			b++;
		printf("%x", n[b++]);
		for (; b <= len; b++)
			printf("%02x", n[b]);
		printf("\n");
	}
}

/**
 * main - It's a program
 *@ac: It's an argument count
 *@av: It's an argument vector
 *Return: 1 on successful 0 on failure
 */

int main(int ac, char **av)
{
	int ba;
	Elf64_Ehdr h;
	ssize_t x;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	ba = open(av[1], O_RDONLY);
	if (ba == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	x = read(ba, &h, sizeof(h));
	if (x < 1 || x != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
			h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);

	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	print_abiversion(h);
	print_type(h);
	print_entry(h);
	if (close(ba))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", ba), exit(98);
	return (EXIT_SUCCESS);
}
