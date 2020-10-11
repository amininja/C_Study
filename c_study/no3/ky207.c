/* ky207.c */

/* インクルード */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 関数宣言 */
int main(int argc, char *argv[]);

/* メイン関数 */
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
