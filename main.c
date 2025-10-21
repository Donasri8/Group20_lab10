#include<stdint.h>
int series_sum(int k)
{
    int a=0;
    int b=1;
    int c=3;
    int d=8;
    int e=5;
    int i=0;
    int ar[10000];
    for (i=0; i<10000;i++)
    {
        ar[i]=8;
    }
    if(k>0)
    {
        return k + series_sum(k-1);
    }
    else
    {

    }
}

int main(void)
{
	int s1,s2,s3;
	int k=80;
	int p=1000;
	int m=180;
	s1= series_sum(k);
	s2= series_sum(p);
	s3= series_sum(m);
	while(1);

}
