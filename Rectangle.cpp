#include "RectAngle.h"
#include <iostream>

void RectAngle::size()
{
	total = width * height;
}

void RectAngle::draw()
{
	printf("ãÈå`ÇÃñ êœ%f\n", total);
}