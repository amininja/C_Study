/* ky102.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 	*/
void main(void);

/* ���C���֐� */
void main(void)
{
	FILE *fp;
	char szfname[] = "ky102.c";
	int ndata;

	fp = fopen(szfname, "r");
	if (fp == NULL){
		printf("�t�@�C���̃I�[�v���Ɏ��s���܂���");
		return;
	}

	while (1){
		ndata = fgetc(fp);
		if (ndata == EOF)
			break;

		printf("%c", (char)ndata);
	}

	fclose(fp);
}
