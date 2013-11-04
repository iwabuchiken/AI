/*
 * cutmorph.c
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

#ifndef D_1_H
#define D_1_H
#include "d_1.h"
#endif

#define		MAX 65535 * 3

int getsource(char *s);

int main()
{
	char	source [MAX] = "あいうえお";
//	char	source [MAX];
	int		numchar;

//	//v-1.0.1
//	int i;
//	for(i = 1; i < 20; i++){
//
//		putchar(0x7E + i);
//
//	}
//
//	putchar('\n');
//
//	putchar(0x8270);	//=> 'p'
//	putchar('\n');
//
//	show_shift_jis();

//	v-1.0.0
//	numchar = getsource(source);

//	source = "あいうえお";

	printf("numchar=%d\n", numchar);
	printf("source=%s\n", source);


//	printf(__FILE__);
//	printf("\n");
//
//	printf("EOF=%d\n", EOF);
//	printf("\n");

	return 0;
}

int getsource(char *s)
{
	int n=0;

	while((s[n++] = getchar()) != EOF);

	return n;
}
