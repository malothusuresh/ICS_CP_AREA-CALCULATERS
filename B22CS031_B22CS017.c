#include<stdio.h>

int main() {
    int choose;

    printf("for area of circle         == 1\n");
    printf("for area of square         == 2\n");
    printf("for area of rectangle      == 3\n");
    printf("for area of triangle       == 4\n");
    printf("for area of rhombus        == 5\n");
    printf("for area of Trapezium      == 6\n");
    printf("for area of paralellogram  == 7\n");
    printf("for area of ellipse        == 8\n");
    printf("for area of pentagon       == 9\n");
    printf("for area of hexagon        == 10\n");

    printf("Choose which geometrical shape area do you want to calculate:\n");
    scanf("%d", &choose);

    switch (choose) {
        case 1:
            float radius, circle_area;
            printf("Please enter the radius of the circle:\n");
            scanf("%f", &radius);
            if (radius < 0) {
                printf("Invalid input:Because,Radius cannot be negative.\n");
                printf("please enter valid input");
            } else {
                circle_area = 3.14 * radius * radius;
                printf("Area of the circle: %.2f\n", circle_area);
            }
            break;

        case 2:
            float side, square_area;
            printf("Please enter the side of the square:\n");
            scanf("%f", &side);
            if (side < 0) {
                printf("Invalid input:Because,Side length cannot be negative.\n");
                printf("please enter valid input");
            } else {
                square_area = side * side;
                printf("Area of the square: %.2f\n", square_area);
            }
            break;

        case 3:
            float length, width, rectangle_area;
            printf("Please enter length and width of the rectangle:\n");
            scanf("%f%f", &length, &width);
            if (length < 0 || width < 0) {
                printf("Invalid input:Because,Length or width cannot be negative.\n");
                printf("please enter valid input");
            } else {
                rectangle_area = length * width;
                printf("Area of the rectangle: %.2f\n", rectangle_area);
            }
            break;

        case 4:
            float base, height,triangle_area;
            printf("Please enter the base and height of the triangle:\n");
            scanf("%f%f", &base, &height);
            if (base < 0 || height < 0) {
                printf("Invalid input:Because,Base or height cannot be negative.\n");
                printf("please enter valid input");
            } else {
                triangle_area = 0.5 * base * height;
                printf("Area of the triangle: %.2f\n", triangle_area);
            }
            break;

        case 5:
            float diagonal1, diagonal2,rhombus_area;
            printf("Please enter two diagonal lengths of the rhombus:\n");
            scanf("%f%f", &diagonal1, &diagonal2);
            if (diagonal1 < 0 || diagonal2 < 0) {
                printf("Invalid input:Because,Diagonal lengths cannot be negative.\n");
                printf("please enter valid input");
            } else {
                rhombus_area = 0.5 * diagonal1 * diagonal2;
                printf("Area of the rhombus: %.2f\n", rhombus_area);
            }
            break;

        case 6:
            float trapezium_area,parallel_side1, parallel_side2, trapezium_height;
            
            printf("Please enter lengths of parallel sides and height of the trapezium:\n");
            scanf("%f%f%f", &parallel_side1, &parallel_side2, &trapezium_height);
            if (parallel_side1 < 0 || parallel_side2 < 0 || trapezium_height < 0) {
                printf("Invalid input:Because,Lengths or height cannot be negative.\n");
                printf("please enter valid input");
            } else {
                trapezium_area = 0.5 * (parallel_side1 + parallel_side2) * trapezium_height;
                printf("Area of the trapezium: %.2f\n", trapezium_area);
            }
            break;

        case 7:
           float parallelogram_area,base_parallelogram, height_parallelogram;
            
            printf("Please enter base and height of the parallelogram:\n");
            scanf("%f%f", &base_parallelogram, &height_parallelogram);
            if (base_parallelogram < 0 || height_parallelogram < 0) {
                printf("Invalid input:Because,Base or height cannot be negative.\n");
                printf("please enter valid input");
            } else {
                parallelogram_area = base_parallelogram * height_parallelogram;
                printf("Area of the parallelogram: %.2f\n", parallelogram_area);
            }
            break;

        case 8:
            float ellipse_area,semi_minor, semi_major;
            
            printf("Please enter lengths of semi-minor and semi-major axes of the ellipse:\n");
            scanf("%f%f", &semi_minor, &semi_major);
            if (semi_minor < 0 || semi_major < 0) {
                printf("Invalid input:Because,Axes lengths cannot be negative.\n");
            } else if(semi_minor > semi_major){
                printf("Invalid input:Because,semi_minor axis length  can not be greater then semi_major axis\n");
                printf("please enter valid input");
            }else {
                ellipse_area = 3.14 * semi_minor * semi_major;
                printf("Area of the ellipse: %.2f\n", ellipse_area);
            }
            break;

        case 9:
            float pentagon_area,side_pentagon;
            printf("Please enter side length of the pentagon:\n");
            scanf("%f", &side_pentagon);
            if (side_pentagon < 0) {
                printf("Invalid input:Because,Side length cannot be negative.\n");
                printf("please enter valid input");
            } else {
                pentagon_area = 1.72 * side_pentagon * side_pentagon;
                printf("Area of the pentagon: %.2f\n", pentagon_area);
            }
            break;

        case 10:
            
            float hexagon_area,side_hexagon;
            printf("Please enter side length of the hexagon:\n");
            scanf("%f", &side_hexagon);
            if (side_hexagon < 0) {
                printf("Invalid input:Because,Side length cannot be negative.\n");
                printf("please enter valid input");
            } else {
                hexagon_area = 2.59 * side_hexagon * side_hexagon;
                printf("Area of the hexagon: %.2f\n", hexagon_area);
            }
            break;

        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
