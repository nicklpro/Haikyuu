//Arrays exc 1
#include <iostream>
using namespace std;

int main()
{
	const int N=10;
	int a[N]= {8,4,3,4,100,6,8,10,7,9};
	int i;
	
	int max;
	max=a[0];	
	for(i=0;i<N;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
d	cout<<max<<endl;
	return 0;
}
