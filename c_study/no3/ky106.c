/* ky106.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 	*/
void main(void);

/* ���C���֐� */
void main(void)
{
	FILE *fp1;
	FILE *fp2;
	char szfname1[] = "ky106.c";
	char szfname2[] = "ky106.txt";
	int ndata;

	fp1 = fopen(szfname1, "r");
	if (fp1 == NULL){
		printf("�t�@�C���P�̃I�[�v���Ɏ��s���܂���");
		return;
	}
	fp2 = fopen(szfname2, "w");
	if (fp2 == NULL){
		printf("�t�@�C���Q�̃I�[�v���Ɏ��s���܂���");
		fclose(fp1);
		return;
	}

	while (1){
		ndata = fgetc(fp1);
		if (ndata == EOF)
			break;

		fputc(ndata, fp2);
	}

	fclose(fp1);
	fclose(fp2);
}
