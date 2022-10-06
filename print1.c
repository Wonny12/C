#include <stdio.h>
int main(void)
{
    /*
        //scanf function, ASCII code, data type...etc
        char one = 'C';
        char two = 67;

        printf("one: %c %d\n", one, one);
        printf("two: %c %d\n", two, two);
    
        float x,y;
        float x2,y2;
        float area;
        printf("Enter the value of x and y for upper left: ");
        scanf("%f %f", &x, &y);

        printf("Enter the value of other side for right bottom: ");
        scanf("%f %f", &x2, &y2);
        area = (x2 - x) * (y2- y);
        printf("Area: %.2f\n", area);

    
        double num, num2;
        printf("Enter the two numbers: ");
        scanf("%lf %lf", &num, &num2);
        printf("+: %.4lf\n", (num+num2));
        printf("-: %.4lf\n", (num-num2));
        printf("x: %.4lf\n", (num*num2));
        printf("/: %.4lf\n", (num/num2));
        return 0;
    */
        char c;
        printf("Enter the alphabet: ");
        scanf("%c", &c);
        printf("ASCII value of the given letter: %d\n", c);
        return 0;
}