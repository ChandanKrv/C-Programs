#include <stdio.h>
int main()
{
        int radius;
        float area;
        printf("Enter the radius of the Circle ");
        scanf("%d",&radius);
        area=3.14*radius*radius;
        printf("%f is the area of cricle where r=%d ",area,radius);
        return 0;
}