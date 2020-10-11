/* ky303.c */

/* インクルード */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 関数宣言 */
void main(void);

/* メイン関数 */
void main(void)
{
	time_t ntime;
	struct tm *pst_tm1;

	ntime = time(NULL);
	pst_tm1 = localtime(&ntime);

	pst_tm1->tm_mday += 31;
	ntime = mktime(pst_tm1);

	printf("31日後は %s", ctime(&ntime));

	return;
}
