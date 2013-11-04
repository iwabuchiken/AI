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

#ifndef WCHAR_H
#define WCHAR_H
#include <wchar.h>
#endif

#define		MAX 65535 * 3
#define		FNAME "outout.txt"

int getsource(char *s);
void v_1_2_1() {

	char	fname[] = "outout.txt";
	char	fname2[] = "input.txt";
	FILE	*f;
	int		res;
	//REF http://d.hatena.ne.jp/dew_false/20070726/p1
	struct stat	st;

	res = stat(fname, &st);

	printf("res of %s => %d\n", fname, res);

	res = stat(fname2, &st);

	printf("res of %s => %d\n", fname2, res);

}

/*
 * v_1_2_1__4()
 * @return
 * 		0	=> File closed
 * 		-1	=> Can't open the file
 * 		-2	=> Closing the file failed
 */
int v_1_2_1__4() {

	char	fname[] = "outout.txt";
	char	fname2[] = "input.txt";
	char	s[]		= "あいうえお";
	FILE	*f;
	int		res;
	//REF http://d.hatena.ne.jp/dew_false/20070726/p1
	struct stat	st;
//	char	ch = 'あ';
	wchar_t	wch = L'あ';
	wint_t	wint;

	res = stat(fname, &st);

	// File exists ? Create a file : move on
	if (res == -1) {
		//REF http://homepage2.nifty.com/sak/w_sak3/doc/syspc/c_k08.htm
		if ((f = fopen(fname, "w")) == NULL) {
		    return(-1);
		}

		fclose(f);

	}

	f = fopen(fname, "a");

	res = fputs(s, f);

	printf("fputc => %d\n", wint);
//	printf("fputc => %d\n", res);

	res = fclose(f);

	if (res == 0) {
		printf("File closed: %s\n", fname);

		return 0;

	} else {

		printf("File close => Failed: %s\n", fname);

		return -2;

	}

}//v_1_2_1__4()


/*
 * v_1_2_1__2()
 * @return
 * 		0	=> File closed
 * 		-1	=> Can't open the file
 * 		-2	=> Closing the file failed
 */
int v_1_2_1__2() {

	char	fname[] = "outout.txt";
	char	fname2[] = "input.txt";
	FILE	*f;
	int		res;
	//REF http://d.hatena.ne.jp/dew_false/20070726/p1
	struct stat	st;
//	char	ch = 'あ';
	wchar_t	wch = L'あ';
	wint_t	wint;

	res = stat(fname, &st);

	// File exists ? Create a file : move on
	if (res == -1) {
		//REF http://homepage2.nifty.com/sak/w_sak3/doc/syspc/c_k08.htm
		if ((f = fopen(fname, "w")) == NULL) {
		    return(-1);
		}

		fclose(f);

	}

	f = fopen(fname, "a");

	//REF http://en.wikibooks.org/wiki/C_Programming/C_Reference/wchar.h#Wide-Character_I.2FO_Functions
	wint = fputwc(wch, f);
//	res = fputc(wch, f);
//	res = fputc(ch, f);

	printf("fputc => %d\n", wint);
//	printf("fputc => %d\n", res);

	res = fclose(f);

	if (res == 0) {
		printf("File closed: %s\n", fname);

		return 0;

	} else {

		printf("File close => Failed: %s\n", fname);

		return -2;

	}



}

int main()
{
	char	source [MAX] = "あいうえお";
//	char	source [MAX];
	int		numchar;

//	v_1_2_1();
//	v_1_2_1__2();
	v_1_2_1__4();
//	FILE	*f;
//
//	f = fopen("outout.txt", "w");
//
//	if (!f)
//		printf("Can't open the file\n");
//	else
//		printf("File opened\n");
//
//	numchar = fclose(f);
//
//	printf("numchar=%d\n", numchar);


	return 0;
}

int getsource(char *s)
{
	int n=0;

	while((s[n++] = getchar()) != EOF);

	return n;
}
