/* ky207.c */

/* �C���N���[�h */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* �֐��錾 */
int main(int argc, char *argv[]);

/* ���C���֐� */
int main(int argc, char *argv[])
{
	char *pstr;
	int ni;
	int nin;

	nin = atoi(argv[1]);
	for (ni = nin;ni < 20+nin;ni++){
		pstr = strerror(ni);
		printf("E=NO=%d->%s\n", ni, pstr);
	}

	return(0);
}
