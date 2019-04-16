/****************************************************************************************/
/*		File name:	shift_counters.c					*/
/*		Author:		Lorthar Mabandla					*/
/*		Date:		22 March 2019						*/
/*		Purpose:	use of shift counters.					*/
/****************************************************************************************/
#include<stdio.h>
int main(void){
	int Signed = -8, VarS;
	unsigned int Unsigned = 6, VarU;
	/* equivalent to division by 2 -> VarS == -4 */
	VarS = Signed >> 1;
	printf("******%d\n", VarS);
	/* equivalent to multiplication by 4 */
	printf("******%d\n", Signed << 2);
	/*equivalent to division by 4 -> VarU == 1 */
	printf("******%d\n", Unsigned >> 2);
	/* equivalent to multiplication by 2 -> VarU == 12 */
	printf("******%d\n", Unsigned<<1);
	return 0;
}




