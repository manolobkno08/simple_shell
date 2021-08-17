#include "main.h"

/* creando hijo - unistd / stdio / sys/wait */
/* ver procesos e identificadore con comando
    pstree -pl
*/

int main(void)
{
    /* identificador de hijo */
    int id;
    /* crea copia exacta del programa con dif espacio de memoria y variables */
    id = fork();
    /* validar si estamos en programa ppal op en el hijo */
    if()
    {}
}