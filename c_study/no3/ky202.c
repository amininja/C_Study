/* ky202.c */

/* �C���N���[�h */
#include <stdio.h>

/* �֐��錾 */
void main(void);

/* ���C���֐� */
void main(void)
{
	FILE *fp1;
	char szfname1[] = "ky202.c";
	char szdata[90];
	int ni;

	fp1 = fopen(szfname1, "r");
	if (fp1 == NULL){
		printf("�t�@�C���̃I�[�v���Ɏ��s���܂���");
		return;
	}

	ni = 0;
	while(1){
		fgets(szdata, 80, fp1);
		printf("%d:%s", ++ni, szdata);
		if (feof(fp1)){
			printf("\n�Ō�܂ŕ\�����܂���");
			break;
		}
	}

	fclose(fp1);
}