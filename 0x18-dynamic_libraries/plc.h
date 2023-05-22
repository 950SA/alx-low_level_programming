#ifndef plc_H
#define plc_H

#include <stdio.h>
#include <stdlib.h>

/**
*struct plc - a new type of data
*representing a plc
*@name: name of plc
*@age: age of plc
*@owner: owner's name
*/
struct plc
{
char *name;
float age;
char *owner;
};


/**
*plc_t - Typedef for struct plc
*/
typedef struct plc plc_t;


void init_plc(struct plc *d, char *name, float age, char *owner);
void print_plc(struct plc *d);
plc_t *new_plc(char *name, float age, char *owner);
void free_plc(plc_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif
