#include <stdio.h>
#include <string.h>

#define true 1

typedef unsigned short curto;

curto diamantes(char *);

void main(){

	curto n;
	int areia;
	char str[1005];

	scanf("%hu", &n);
	scanf("%d", &areia);

	while (n--)
	{

		fgets(str, 1005, stdin);
		str[strlen(str) - 1] = '\0';
		printf("%hu\n", diamantes(str));
		memset(str, 0, sizeof(str));

 	}
}

curto diamantes(char *str)
{

	short x = 0;
	curto qtsDiamantes = 0;

	curto i, j;
	for (i = 0; str[i]; ++i)
	{

		if (str[i] != '<')
			continue;

		for (j = i + 1; str[j]; ++j)
			if (str[j] == '>')
			{

				++qtsDiamantes;
				str[i] = 'x';
				str[j] = 'x';
				break;

			}

	}

	return qtsDiamantes;

}
