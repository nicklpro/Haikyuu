//Arrays exc 2
#include <iostream>
#include <math.h>
using namespace std;

struct dist{
	int x;
	int y;
	int z;
	int xx;
	int yy;
	int zz;
	
};


int calc_distance(int x, int xx, int y, int yy, int z, int zz)
{
	int distance=sqrt( pow(abs(x-xx),2)+pow(abs(y-yy),2)+pow(abs(z-zz),2)  ),2)
	return distance;
}

int main()
{
	dist.x;
	dist.y;
	dist.z;
	dist.xx;
	dist.yy;
	dist.zz;
	
	
	cout<<"Please enter an int x value: ";	
	cin>>dist.x;
	cout<<"Please enter an int y value: ";	
	cin>>dist.y;
	cout<<"Please enter an int z value: ";
	cin>>dist.z;
	cout<<"Please enter an int xx value: ";	
	cin>>dist.xx;
	cout<<"Please enter an int yy value: ";		
	cin>>dist.yy;
	cout<<"Please enter an int zz value: ";
	cin>>dist.zz;	
	
	cout<<calc_distance();
	
	
	return 0;
}

