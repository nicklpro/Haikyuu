//HomeWork1 from Week 3. Arrays and Structs
#include <iostream>
#include <cstdlib>
#include <ctime>
#define SIZE 20
using namespace std;

int index_finder(int elem)
{
	int array[SIZE];
	int i, temp;
	int flag;
	
	for(i=0;i<SIZE;i++)
	{
		if(array[i]==elem)
		{
			flag==0;
			temp=i;
		}
		else(flag==1);
	}
	
	if(flag==0) cout<<temp;
	else if(flag==1)	return -1;
}

int main()
{
	int Array[SIZE], element;
	
	//dimiourgia pinaka me tixaies times
	srand((unsigned)time(NULL));
	for(int j=0;j<SIZE;j++)
	{
		Array[j]=rand()%100;
		cout<<Array[j]<<"\n";
	}
	
	cout<<"Please enter an element: ";
	cin>>element;
	cout<<index_finder(element);
	
	return 0;
	
}

