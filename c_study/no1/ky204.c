/* ky204.c */

/* �C���N���[�h	*/
#include <stdio.h>

/* �֐��錾	*/
void main(void);

/* ���C���֐� */
void main(void)
{
	/* �ϐ��̒�` */
	float fi1, fi2;

	/* ���͂𑣂�1 */
	printf("�����_���l�����1=");
	scanf("%f", &fi1);


	/* ���͂𑣂�2 */
	printf("�����_���l�����2=");
	scanf("%f", &fi2);

	/* �����Z�����ĕ\��	*/
	printf("%.10f+%.10f=%.10f\n", fi1, fi2, fi1+fi2);
}
