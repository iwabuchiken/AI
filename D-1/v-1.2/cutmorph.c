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

#ifndef STAT_H
#define STAT_H
#include <sys/stat.h>
#endif

#define		MAX 65535 * 3

int getsource(char *s);

int main()
{
	char	source [MAX] = "あいうえお";
//	char	source [MAX];
	int		numchar;

	FILE	*f;

	f = fopen("outout.txt", "w");

	if (!f)
		printf("Can't open the file\n");
	else
		printf("File opened\n");

	numchar = fclose(f);

	printf("numchar=%d\n", numchar);


	return 0;
}

int getsource(char *s)
{
	int n=0;

	while((s[n++] = getchar()) != EOF);

	return n;
}
