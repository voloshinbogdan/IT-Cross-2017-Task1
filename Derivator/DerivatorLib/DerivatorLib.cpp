#include <../DerivatorLib/DerivatorLib.h>

std::vector<double> derivate(std::vector<double> fy, double h) {
    std::vector<double> result;
    int N = fy.size();

    if (N <= 1)
	throw "too few points";

    result.resize(N);

    result[0] = (fy[1] - fy[0]) / h;
    result[N-1] = (fy[N-1] - fy[N-2]) / h;

    for (int i = 1; i < N - 1; i++) {
	result[i] = (fy[i+1] - fy[i-1]) / 2 * h;
    }

    return result;
}