/* ky105.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 	*/
void main(void);

/* ���C���֐� */
void main(void)
{
	FILE *fp1;
	char szfname1[] = "ky105.c";
	char szdata[81];
	int ndata;

	fp1 = fopen(szfname1, "r");
	if (fp1 == NULL){
		printf("�t�@�C���P�̃I�[�v���Ɏ��s���܂���");
		return;
	}

	ndata = fread(szdata, 40, 1, fp1);
	szdata[40] = '\0';
	if (ndata > 0)
		printf(szdata);

	fclose(fp1);
}
