0x12. C - Singly linked lists
-----------------------------

General
--------
1. When and why using linked lists vs arrays
2. How to build and use linked lists


More Info
----------
use this data structure for this project:
------------------------------------------
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


Tasks
------
0. Print list "#mandatory"
1. List length "#mandatory"
2. Add node "#mandatory"
3. Add node at the end "#mandatory"
4. Free list "#mandatory"
5. The Hare and the Tortoise "#advanced"
6. Real programmers can write assembly code in any language "#advanced"
