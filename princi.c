#include <stdio.h>
#include "pi.h"
int main() {
	int a;
	printf("entrer le rayon du cercle");
	scanf("%d",&a);
	printf("la circonference est:%lf",circonference(a));\n
	printf("la surface est:%lf",surface(a));\n
	return 0;
}
