/* ky101.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 	*/
void main(void);

/* ���C���֐� */
void main(void)
{
	FILE *fp;
	char szfname[] = "ky101.dat";

	fp = fopen(szfname, "r");
	if (fp == NULL){
		fp = fopen(szfname, "w");
		if (fp == NULL)
			printf("�t�@�C���̍쐬�Ɏ��s���܂���");
		else
			printf("�t�@�C�����쐬���܂���");
	}
	else
		printf("�t�@�C�������݂��܂�");

	fclose(fp);
}
