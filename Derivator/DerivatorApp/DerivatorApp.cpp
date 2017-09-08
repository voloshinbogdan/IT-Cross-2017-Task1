#include <DerivatorLib.h>



double interpolate(double x0, double y0, double x1, double y1, double x) {
    double a = x1 - x0;
    double b = y1 - y0;

    return b / a * (x - x0) + y0;
}



double calc_derivative_in_point(std::vector<double> fy, double x0, double h, double x) {
    int N = fy.size();
    std::vector<double> fd = derivate(fy, h);

    if (x < x0) {
	return interpolate(x0, fd[0], x0 + h, fd[1], x);
    }

    for (int i = 0; i < N - 1; i++) {
	double xp = x0 + i * h;
	double xc = x0 + (i + 1) * h;
	if (xp <= x && x <= xc) {
	    return interpolate(xp, fd[i], xc, fd[i + 1], x);
	}
    }

    double xp = x0 + (N - 2) * h;
    double xc = x0 + (N - 1) * h;
    
    return interpolate(xp, fd[N - 2], xc, fd[N - 1], x);
}



int main(int argc, char* argv[])
{


}