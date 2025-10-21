#include<stdint.h>
int series_sum(int k)
{
    int a=0;
    int b=1;
    int c=3;
    int d=8;
    int e=5;
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
	int k=8;
	int p=10;
	int m=18;
	s1= series_sum(k);
	s2= series_sum(p);
	s3= series_sum(m);
	while(1);

}
