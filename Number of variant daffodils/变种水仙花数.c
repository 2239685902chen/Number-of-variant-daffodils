#include <stdio.h>
#include <math.h>
int main()
{
	int m = 10000, n = 99999, q = 0, w = 0, e = 0, r = 0;
	int t = 1, a = 0, s = 0, d = 0;
	for (m = 10000; m <= n; m++)
	{
		r = m;
		q = m;
		t = 1;
		d = 0;
		while (r>=10)
		{
			w = (int)pow(10, t);
			e = q % w;
			a = q / w;
			s = e * a;
			d += s;
			r /= 10;
			t++;
		}
		if (!(d - m))
		{
			printf("%d ", m);
		}
	}
	return 0;
}