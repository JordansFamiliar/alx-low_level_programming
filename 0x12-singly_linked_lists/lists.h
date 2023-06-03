#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
typedef struct list *listPtr;
/**
 * list - struct for linked list
 * @str: string
 * @len: length of string
 * @next: pointer to next node
 */
typedef struct list
{
	char *str;
	int len;
	listPtr next;
} list_t;
void call_print_line(void);
void print_line(void);
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
