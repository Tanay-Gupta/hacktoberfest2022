#include <iostream>
using namespace std;
class myarray
{
private:
	int size;
	int index;
	int* ptr;
	 void resize();
public:
	myarray(int s);
	void setvalue(int j);
	int getvalue(int i);
	int getsize();
};
myarray::myarray(int s)
{
	size = s;
	index = 0;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}
}
void myarray::setvalue(int j)
{
	if (index >=size)
	{
		resize();
	}

	ptr[index] = j;
	index++;
	
}
int myarray::getvalue(int i)
{
	return ptr[i];
} 
void myarray ::resize()
{
	cout << "resize array function is called";
	int* temp = new int[size * 2];
	for (int i = 0; i < size; i++)
	{
		temp[i] =ptr[i];
	}
	size = size * 2;
	delete[]ptr;
	ptr = temp;

}
int  myarray::getsize()
{
	return size;
}
int main()
{
	myarray obj(3);

	for (int i = 0; i < 3; i++)
	{
		obj.setvalue(i + 1);

	}
	obj.setvalue(42);

	for (int i = 0; i < obj.getsize(); i++)
	{
		cout<<obj.getvalue(i);

	}


}
