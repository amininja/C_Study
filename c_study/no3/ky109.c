/* ky109.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	FILE *fp1;
	char szfname1[] = "ky109.dat";
	char szdata[50];
	int ni;

	fp1 = fopen(szfname1, "w");
	if (fp1 == NULL){
		printf("�t�@�C���P�̃I�[�v���Ɏ��s���܂���");
		return;
	}

	for (ni = 0;ni < 43;ni++)
		szdata[ni] = '0'+ni;
	szdata[43] = 0x00;

	printf("�f�[�^�́F%s", szdata);
	fwrite(szdata, 10, 1, fp1);

	fclose(fp1);
}
