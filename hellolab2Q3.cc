#include <iostream>

int main() {
    // ask for the dimensions of the first rectangle
    std::cout << "Enter the width and height of the first rectangle:\n";
    double width1, height1;
    std::cin >> width1 >> height1;

    // ask for the dimensions of the second rectangle
    std::cout << "Enter the width and height of the second rectangle:\n";
    double width2, height2;
    std::cin >> width2 >> height2;

    // compute the areas of the two rectangles
    double area1 = width1 * height1;
    double area2 = width2 * height2;

    // compare the areas and print the result
    if (area1 > area2) {
        std::cout << "The area of the first rectangle is greater than the area of the second rectangle.\n";
    } else if (area2 > area1) {
        std::cout << "The area of the second rectangle is greater than the area of the first rectangle.\n";
    } else {
        std::cout << "The areas of the two rectangles are the same.\n";
    }

    return 0;
}