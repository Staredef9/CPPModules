#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Weapon{
	char *type;
} Weapon;

typedef struct HumanA{
	char *name;
	Weapon Sword;
} HumanA;

void	HumanInit(HumanA *instance){
	instance->name = malloc(sizeof(char) * 100);
	instance->Sword.type = malloc(sizeof(char) * 100);
}

void	HumanDestroy(HumanA *instance){
	free(instance->name);
	free(instance->Sword.type);
	printf("Human freeed\n");
}

void	HumanAAttack(HumanA *instance){
	printf("%s is attacking with %s\n", instance->name, instance->Sword.type);
}
