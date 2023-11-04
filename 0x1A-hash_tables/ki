#include "hash_tables.h"

/**
 * shash_table_create - A function that create a sorted hash table.
 * @size: The size of the array.
 * Return: A pointer to the created hash table, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->shead = NULL;
	new_table->stail = NULL;

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}

/**
 * shash_table_set - A function that adds an element to the sorted hash table.
 * @ht: The sorted hash table to add or update the key/value pair.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key, can be an empty string
 * Return: 1 on success, 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	/* nC within the code is variable for current node */
	shash_node_t *new_node, *nC, *prev_node = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	nC = ht->array[index];

	while (nC != NULL)
	{
		if (strcmp(nC->key, key) == 0)
		{
			char *new_value = strdup(value);

			if (new_value == NULL)
				return (0);
			free(nC->value);
			nC->value = new_value;
			return (1);
		}
		prev_node = nC;
		nC = nC->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (prev_node)
	{
		new_node->sprev = prev_node;
		prev_node->next = new_node;
	}
	else
	{
		new_node->sprev = NULL;
		if (ht->shead == NULL)
			ht->shead = new_node;
		if (ht->stail != NULL)
			ht->stail->sprev = new_node;
		new_node->next = ht->shead;
		ht->shead = new_node;
	}
	if (new_node->next == NULL)
		ht->stail = new_node;

	return (1);
}

/**
 * shash_table_get - A function that retrieves the value associated with a key
 * from a sorted hash table.
 * @ht: The sorted hash table to look into.
 * @key: The key you are looking for.
 * Return: The value associated with the element, or NULL if key is not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nC;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	nC = ht->shead;

	while (nC != NULL)
	{
		if (strcmp(nC->key, key) == 0)
			return (nC->value);
		nC = nC->next;
		if (nC == ht->shead)
			break;
	}

	return (NULL);
}

/**
 * shash_table_print - A function that print the contents of a sorted hash table.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nC;

	if (ht == NULL)
		return;

	nC = ht->shead;

	printf("{");
	while (nC != NULL)
	{
		printf("'%s': '%s'", nC->key, nC->value);
		nC = nC->next;
		if (nC != ht->shead)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - A function that prints the contents of a
 * sorted hash table in reverse order.
 * @ht: The sorted hash table to print in reverse.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nC;

	if (ht == NULL)
		return;

	nC = ht->stail;

	printf("{");
	while (nC != NULL)
	{
		printf("'%s': '%s'", nC->key, nC->value);
		nC = nC->sprev;
		if (nC != ht->stail)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that delete a sorted hash table.
 * @ht: The sorted hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *nC, *next_node;

	if (ht == NULL)
		return;

	nC = ht->shead;

	while (nC != NULL)
	{
		next_node = nC->next;
		free(nC->key);
		free(nC->value);
		free(nC);
		nC = next_node;
		if (nC == ht->shead)
			break;
	}

	free(ht->array);
	free(ht);
}
