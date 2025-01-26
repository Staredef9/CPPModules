#include "belcodice.h"


int main(){


	HumanA instance;
	HumanInit(&instance);
	strcpy(instance.name, "Piero");
	strcpy(instance.Sword.type, "Mazza Chiodata");
	HumanAAttack(&instance);	
	HumanDestroy(&instance);
	return 0;
}
