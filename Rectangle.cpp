#include "RectAngle.h"
#include <iostream>

void RectAngle::size()
{
	total = width * height;
}

void RectAngle::draw()
{
	printf("��`�̖ʐ�%f\n", total);
}