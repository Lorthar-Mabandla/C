/****************************************************************/
/*    file name : euclid.h                                      */
/*    Author    : Lorthar Mabandla                              */
/*    Date      : 24 May 2019                                   */
/*    Purpose   : header file for simplest fraction program     */
/****************************************************************/
#ifndef EUCLID_H_
#define EUCLID_H_

extern void s_fraction(int u, int v, int i);
extern int gcd(int u, int v);   //classic euclid's algorithm
extern int m_gcd(int u, int v); //modern euclid's algorithm
#endif
