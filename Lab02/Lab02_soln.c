#include <stdio.h>
#include <math.h>
#define TOLERANCE 0.00001 
//Can take TOLERANCE to be 1e-6 to be more accurate.


int approximatelyEqual(double a, double b)
{
    return fabs(a - b) < TOLERANCE;
}

double calcLen(int x1, int y1, int x2, int y2)
{
    double dist = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
    return dist;
}


int validTriangle(double side1, double side2, double side3)
{
    if ((side1 + side2) > side3)
    {
        if ((side2 + side3) > side1)
        {
            if ((side1 + side3) > side2)
            {
                return 1;
            }
        }
    }
    else
    {
        return 0;
    }
}


int triangleType(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double side1 = calcLen(x1, y1, x2, y2);
    double side2 = calcLen(x2, y2, x3, y3);
    double side3 = calcLen(x3, y3, x1, y1);

    if (approximatelyEqual(side1, side2))
    {
        if (approximatelyEqual(side2, side3))
        {
            return 1;
        }
        else if(approximatelyEqual(2*pow(side1, 2), pow(side3, 2)))
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }
    
    else if (approximatelyEqual(side2, side3))
    {
        if (approximatelyEqual(2*pow(side2, 2), pow(side1, 2)))
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }
    else if (approximatelyEqual(side1, side3))
    {
        if (approximatelyEqual(2*pow(side1, 2), pow(side2, 2)))
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }

    else if (approximatelyEqual((pow(side1, 2) + pow(side2, 2)), pow(side3, 2))
    {
        return 4;
    }
    else if (approximatelyEqual((pow(side2, 2) + pow(side3, 2)), pow(side1, 2))
    {
        return 4;
    }
    else if (approximatelyEqual((pow(side1, 2) + pow(side3, 2)), pow(side2, 2))
    {
        return 4;
    }

    else
    {
        return 5;
    }   
}

int main()
{   
    int x1, y1;
    int x2, y2;
    int x3, y3;

    printf("Enter 3 coordinates for 3 points:\n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    double side1 = calcLen(x1, y1, x2, y2);
    double side2 = calcLen(x1, y1, x3, y3);
    double side3 = calcLen(x2, y2, x3, y3);

    int valid = validTriangle(side1, side2, side3);

    if (valid == 0)
        printf("Triangle cannot be constructed.\n");

    else
    {
        printf("Triangle can be constructed.\n");
        int type = triangleType(x1, y1, x2, y2, x3, y3);
        if(type == 1)
            printf("This is an equilateral triangle.\n");
        else if(type == 2)
            printf("This is an isosceles right triangle.\n");
        else if(type == 3)
            printf("This is an isosceles triangle.\n");
        else if (type == 4)
            printf("This is a right angled triangle.\n");
        else if (type == 5)
            printf("This is a scalene triangle.\n");
    }
    return 0;
}
