//Christ Rangkas MTH 4300 HW 2 Question 1

#include <iostream>
int main(){

  double a11,a12,a21,a22,b1,b2,x,y; // These are user input variables

  std::cin >> a11 >> a12 >> a21 >> a22 >> b1 >> b2;
//Since this is a 2x2 matrix and we are assuming
//that the system has a unique solution,
//this matrix is invertible. So to solve for the unknown,
//we multiply the b vector on the left by
//the inverse of the 2x2 matrix. To find the inverse matrix,
// I found the determinant, swapped the a11&a22 positions, and negated a12&a21.
//then just performed a basic matrix multiplication

  x = (1/(a11*a22 - a12*a21))*(a22*b1 + (-1*a12)*b2);
  y = (1/(a11*a22 - a12*a21))*((-1*a21)*b1 + a11*b2);

  std::cout << x << " " << y << "\n";

  return 0;
}
