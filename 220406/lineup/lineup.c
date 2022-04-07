#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);
void line_up2(double* maxp, double* midp, double* minp);

int main()
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up2(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*maxp < *midp) swap(maxp, midp);
	if (*midp < *minp) swap(midp, minp);
	if (*maxp < *midp) swap(maxp, midp);

}
void line_up2(double* maxp, double* midp, double* minp)
{
    //double temp1 = *maxp; 

    if ((*maxp > *midp) && (*midp > *minp)) return;
    
    if (*maxp < *midp) {
        //*maxp = *midp;
        //*midp= temp1;
        swap(maxp, midp);
    }
    //double temp2=*midp;
    if (*midp < *minp) {
        //*midp = *minp;
        //*minp= temp2;
        swap(midp, minp);
    }
    line_up2(maxp, midp, minp);
}