/* ky103.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 	*/
void main(void);

/* ���C���֐� */
void main(void)
{
	FILE *fp;
	char szfname[] = "ky103.c";
	char szdata[81];

	fp = fopen(szfname, "r");
	if (fp == NULL){
		printf("�t�@�C���̃I�[�v���Ɏ��s���܂���");
		return;
	}

	while (fgets(szdata, 80, fp) != NULL)
		printf("%s", szdata);

	fclose(fp);
}
