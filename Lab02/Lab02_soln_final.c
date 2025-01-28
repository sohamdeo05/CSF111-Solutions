//Enter required header files
#include <stdio.h>
#include <math.h>

int approximatelyEqual(double a, double b){
    return fabs(a-b) < 1e-6;
}
/**
 * @brief Returns the distance between the given two 2D points using the distance formula d((x1,y1), (x2,y2)) = sqrt((x1-x2)^2 + (y1-y2)^2).
 *
 * Example:
 * calcLen(1, -1, 1, 9) returns 10.00
 * calcLen(1, -1, 4, -1) returns 3.00
 * calcLen(1, 9, 4, -1) returns 10.44
 */
//Have the required parameters
double calcLen(int x1, int y1, int x2, int y2)
{
    double dist = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
}


/**
 * @brief Returns 1 if the triangle can be constructed given the 3 sides as parameters using the Triangle Inequality Theorem. 
 * If the triangle cannot be constructed, it returns 0.
 * 
 * The triangle inequality states that for any triangle, the sum of the lengths of any two sides must be greater than the length of the remaining side.
 * Note: It should be true for all three combinations of added side lengths, only then you will have a triangle.
 * 
 * Example:
 * validTriangle(3.00, 10.00, 10.44) returns 1
 * validTriangle(7.00, 10.00, 5.00) returns 1
 * validTriangle(5.00, 8.00, 3.00) returns 0
 */
//Have the required parameters
int validTriangle(double side1, double side2, double side3)
{
    return ((side1+side2 > side3) && (side1+side3 > side2) && (side2+side3 > side1));
}


/**
 * @brief Takes the coordinates as parameters.
 * Returns 1 if the triangle is equilateral (all sides are equal)
 * Returns 2 if the triangle is isosceles right angled (2 sides are equal and the sides follow the pythagoras theorem)
 * Returns 3 if the triangle is isosceles (2 sides are equal and the sides do not follow the pythagoras theorem) 
 * Returns 4 if the triangle is right angled but not isosceles(The sides follow the pythagoras theorem)
 * Returns 5 if the triangle is scalene (All sides are different) 
 *  
 * Example:
 * triangleType(1, 0, 5, 0, 1, 4) returns 2
 * triangleType(-4, 0, 4, 0, 0, 3) returns 3
 * triangleType(1, -1, 4, -1, 1, 9) returns 4
 * triangleType(-4, 0, 3, 0, 0, 4) returns 5
 */
//Have the required parameters
int triangleType(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double side1 = calcLen(x1, y1, x2, y2);
    double side2 = calcLen(x1, y1, x3, y3);
    double side3 = calcLen(x2, y2, x3, y3);

    if (approximatelyEqual(side1, side2))
    {
        if(approximatelyEqual(side2, side3))
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
        if(approximatelyEqual(2*pow(side2, 2), pow(side1, 2)))
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
        if(approximatelyEqual(2*pow(side1, 2), pow(side2, 2)))
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }

    else if(approximatelyEqual((pow(side1, 2) + pow(side2, 2)), pow(side3, 2)))
    {
        return 4;
    }
    else if(approximatelyEqual((pow(side2, 2) + pow(side3, 2)), pow(side1, 2)))
    {
        return 4;
    }
    else if(approximatelyEqual((pow(side1, 2) + pow(side3, 2)), pow(side2, 2)))
    {
        return 4;
    }

    else
    {
        return 5;
    }


}

/**
 * @brief Takes the coordinates as parameters.
 * Calculates the radius of the incircle in the triangle.
 * If the sides of a triangle are of lengths a, b, c. 
 * Then the semiperimeter (s) of the triangle is (a+b+c)/2
 * The area of the triangle is calculated by
 * sqrt(s * (s-a) * (s-b) * (s-c))
 * 
 * The radius of the incircle is the ratio of the area to semiperimeter, that is, area/s
 * 
 * If the radius of the incircle of the triangle is lesser than 5 or greater than 10 units, then the function returns 5
 * Else the function returns 10
 *  
 * Example:
 * inradius(1, 0, 5, 0, 1, 4) returns 5
 * inradius(-4, 0, 4, 0, 0, 3) returns 5
 * inradius(1, -1, 4, -1, 1, 9) returns 5
 * inradius(-10, -10, 10, -10, 0, 10) returns 10
 */
//Have the required parameters
int inradius(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double side1 = calcLen(x1, y1, x2, y2);
    double side2 = calcLen(x1, y1, x3, y3);
    double side3 = calcLen(x2, y2, x3, y3);
    double s = (side1+side2+side3)/2;
    double area = sqrt(s * (s-side1) * (s-side2) * (s-side3));
    double radius = area/s;

    if (radius < 5 || radius >10)
    {
        return 5;
    }
    else
    {
        return 10;
    }
}

/**
 * @brief Takes the coordinates as parameters.
 * Returns the side whose value is the minimum.
 * 
 * Requires: All sides have different values.
 *  
 * Example:
 * side(0, 0, 1, 0, 0, 2) returns 1.00
 * side(-4, 0, 3, 0, 0, 4) returns 5.00
 */
//Have the required parameters and return type
double side(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double side1 = calcLen(x1, y1, x2, y2);
    double side2 = calcLen(x1, y1, x3, y3);
    double side3 = calcLen(x2, y2, x3, y3);

    if (side1 < side2)
    {
        if (side3 < side1)
        {
            return side3;
        }
        else
        {
            return side1;
        }
    }

    else if (side2 < side1)
    {
        if (side3 < side2)
        {
            return side3;
        }
        else
        {
            return side2;
        }
    }
}

int main()
{
    //*******DO NOT CHANGE main()********
    
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

        int option;
        printf("Enter option: 1. Getting Triangle Type, 2. Calculating inradius, 3. Minimum Side\n");
        scanf("%d", &option);

        if(option == 1)
        {
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
        else if(option == 2)
        {
            int r = inradius(x1, y1, x2, y2, x3, y3);
            if(r == 5)
                printf("Radius of the incircle is lesser than 5 or greater than 10.\n");
            else if(r == 10)
                printf("Radius of the incircle is greater than equal to 5 and lesser than equal to 10.\n");
        }
        else if(option == 3)
        {
            double s = side(x1, y1, x2, y2, x3, y3);
            printf("Minimum Side: %.2lf\n", s);
        }
    }
    return 0;
}
