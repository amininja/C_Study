/* ky303.c */

/* �C���N���[�h */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	time_t ntime;
	struct tm *pst_tm1;

	ntime = time(NULL);
	pst_tm1 = localtime(&ntime);

	pst_tm1->tm_mday += 31;
	ntime = mktime(pst_tm1);

	printf("31����� %s", ctime(&ntime));

	return;
}
