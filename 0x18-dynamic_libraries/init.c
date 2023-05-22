#include "plc.h"

/**
* init_plc - inits a variable of
*type plc
*@d: plc identification
*@name: name of plc
*@age: age of plc
*@owner: owner's name
*/

void init_plc(struct plc *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
