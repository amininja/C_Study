/* ky301.c */

/* �C���N���[�h */
#include <stdio.h>
#include <time.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	time_t ntime;
	struct tm *pst_tm1;
	char szstr[81];

	ntime = time(NULL);
	pst_tm1 = localtime(&ntime);

	/* tm�\���̂��g�����\�� */
	printf ("%d�N%d��%d�� %d��%d��%d�b\n",
		pst_tm1->tm_year+1900, pst_tm1->tm_mon+1, pst_tm1->tm_mday,
		pst_tm1->tm_hour, pst_tm1->tm_min, pst_tm1->tm_sec);

	/* asctime���g�����\�� */
	printf("%s", asctime(pst_tm1));

	/* strftime���g�����\�� */
	strftime(szstr, 80, "%Y�N%m��%d�� %H��%M��%S�b", pst_tm1);
	printf("%s\n", szstr);

	/* ctime���g�����\�� */
	printf("%s", ctime(&ntime));

	return;
}
