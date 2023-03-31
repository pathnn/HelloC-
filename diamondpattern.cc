#include <iostream>
using namespace std;

int main() {
   int rows, i, j, space;

   cout << "Enter number of rows for diamond dimension: ";
   cin >> rows;

   space = rows - 1;

   for (i = 0; i < rows; i++) {
      for (j = 0; j < space; j++) {
         cout << " ";
      }
      for (j = 0; j <= i; j++) {
         cout << "* ";
      }
      cout << endl;
      space--;
   }

   space = 0;

   for (i = rows; i > 0; i--) {
      for (j = 0; j < space; j++) {
         cout << " ";
      }
      for (j = 0; j < i; j++) {
         cout << "* ";
      }
      cout << endl;
      space++;
   }

   return 0;
}