/*

* lib1.c
 *
 *  Created on: 2013/11/01
 *      Author: IwabuchiK
 */

#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef STRING_H
#define STRING_H
#include <string.h>
#endif

#ifndef WCHAR_H
#define WCHAR_H
#include <wchar.h>
#endif

#ifndef LOCALE_H
#define LOCALE_H
#include <locale.h>
#endif

#ifndef LIMITS_H
#define LIMITS_H
#include <limits.h>
#endif

//#ifndef D_1_H
//#define D_1_H
#include "d_1.h"
//#endif
void show_shift_jis_wchar();
void show_shift_jis_char();

void show_shift_jis_char()
{
	int		i, j;	// Iterators
	int		num;	// Counter

	char	c[10]	= "あいう";

	printf("c=%s\n", c);

	printf("c=%c\n", c[0]);

	printf("c=%d\n", (unsigned char)c[0]);
	printf("c=%x\n", (unsigned char)c[0]);


//	char	c = '??ｽ･･ｽ';
//
//	printf("%%c=%c\n", c);

//	printf("shift_jis\n");
}

void show_shift_jis_wchar()
{
	int		i, j;	// Iterators
	int		num;	// Counter

	num		= 0;
	char mb[MB_LEN_MAX + 1];  /* ??ｽS??ｽ･･ｽ･･ｽP??ｽ[??ｽ･･ｽ･･ｽﾅ可能・・ｽ･･ｽ･･ｽﾌゑｿｽ･･ｽ･･ｽT??ｽC??ｽY + ??ｽ･･ｽ･･ｽ･･ｽ･･ｽ･･ｽ '\0' */
		wchar_t wc = L'あ';
		int len;


		setlocale( LC_CTYPE, "jpn" );


		/* ??ｽ･･ｽ･･ｽC??ｽh??ｽ･･ｽ･･ｽ･･ｽ･･ｽ･･ｽ･･ｽ･･ｽ}??ｽ･･ｽ･･ｽ`??ｽo??ｽC??ｽg??ｽ･･ｽ･･ｽ･･ｽ･･ｽ･･ｽ */
		len = wctomb( mb, wc );
		mb[len] = '\0';
		printf( "%s(%d, %%x=%x, (unsigned char)wc=%c wc(%%d)=%d wc(%%x)=%x\n",
				mb,	mb,	mb,		(unsigned char)wc,		wc,		wc);
//	printf("shift_jis\n");
}

void show_shift_jis()
{

	show_shift_jis_char();
//	show_shift_jis_wchar();

//	int		i, j;	// Iterators
//	int		num;	// Counter
//
//	num		= 0;
//
//	for(j = 0; j < 10; j++) {
//
//		printf("%d", j);
//
//		putchar(' ');
//		putchar(' ');
//
//		putchar(0x8140);
//		putchar(0x8141);
//
//
//
//////		for(i = 0; i < 10; i++) {
////		for(i = 0; i < 10; i++) {
////
////			printf("%3s", num+ 0x8140);
//////			printf("%3c", num+ 0x8140);
//////			printf("%3c", num+ 0xA0);
//////			printf("%3c", num+ 0x80);
//////			printf("%3c", num+ 0x90);
//////			printf("%3c", num+ 0x9000);
////
////			num = num + 1;
////
////		}
//
//		putchar('\n');
//
//	}//for(j = 0; j < 10; j++) {
//
//	printf("shift_jis\n");
}
