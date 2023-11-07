#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "huff_def.h"
#define N 640
#define number_of_regions 14
void MLT(FILE* fin, FILE* fout);
float window(int n);

int main(void) {
	int i = 0;
	FILE* fin = NULL, * fout = NULL;
	fin = fopen("dongwoo.raw", "rb");              //1 프레임=320 샘플이면 786.xx개 프레임존재
	fout = fopen("MLT_result.raw", "rb");
	
}

void MLT(FILE* fin, FILE* fout) {
    short mlt_short[320] = { 0, };
    short data_short[N] = { 0, };
    float data_float[N] = { 0, };
    short data = 0;
    int F = 0, i = 0, p = 0;
    int m = 0, n = 0;
	
	
	
    

}

float window(int n) {
	float window = sin((n + 0.5) * M_PI / 640);
	return window;
}