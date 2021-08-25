#include "main.h"

char (*match(vars_t *m))(vars_t *m)
{
	int i;

	match_t op[] = {
		{"exit", esc},
		{NULL, NULL}};

	for (i = 0; op[i].f != NULL; i++)
	{
		if (strcmp(op[i].string, m->array[0]) == 0)
		{
			break;
		}
	}
	return (op[i].f);
}

char esc(__attribute__((unused)) vars_t *vars)
{
	exit(98);
}
