#include "Circle.h"
#include <iostream>

void Circle::size()
{
	total = radius* radius * pi;
}

void Circle::draw()
{
	printf("â~ÇÃñ êœ%f\n",total);
}