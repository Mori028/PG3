#include "Circle.h"
#include <iostream>

void Circle::size()
{
	total = radius* radius * pi;
}

void Circle::draw()
{
	printf("�~�̖ʐ�%f\n",total);
}