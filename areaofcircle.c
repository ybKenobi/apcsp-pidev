#include <stdio.h> 
#include <math.h>

float areaOfCircle(float radius) 

{ 

float area = radius*radius*M_PI;
return area;

}

int main() 

{

float radius; 

float area; 

for (radius = 3.5; radius <= 12.5; radius++)
	{

		area = areaOfCircle(radius);
		printf("The area of the circle with radius of %f is %f \n", radius, area);
   	 }
    return 0;
}
