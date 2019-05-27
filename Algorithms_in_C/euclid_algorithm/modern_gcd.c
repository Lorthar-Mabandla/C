/*****************************************************************/
/*      filename : modern_gcd.c                                  */
/*      Author   : Lorthar Mabandla                              */
/*      Date     : 25 May 2019                                   */
/*      Purpose  : Modern implementation of Euclid's algorithm   */
/*****************************************************************/

int m_gcd(int u, int v){
	int i;
	u=u%v;
	while(u>0){
		if(u<v){ i=u; u=v; v=i;  }
		u=u-v;
	}
	return v;
}
