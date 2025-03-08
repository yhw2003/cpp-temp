#include <cmath>
#include <iostream>

int main(int argc, char *argv[])
{
   std::cout << "Hello, world!" << std::endl;
}

double cha_e_ben_xi(double L, double r, int y) {
   double val1 = r * pow(( 1 + r ), 12*y);
   double val2 = pow((1/r), 12*y) -1;
   return L * val1 / val2;
}

double deng_e_ben_jin(double L, double r, double R, int y) {
   double val1 = L / (12 * y);
   double val2 = (L - R) * r;
   return val1 + val2;
}
