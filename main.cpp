#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include "Circle.h"
#include "IShape.h"
#include "RectAngle.h"
using namespace std;



int main() {

	Circle* circle = new Circle();
	circle->radius = 2;
	circle->pi = 3.14;
	circle->size();
	circle->draw();

	RectAngle* rectangle = new RectAngle();
	rectangle->width = 3;
	rectangle->height = 5;
	rectangle->size();
	rectangle->draw();

    system("pause");
    return 0;
}