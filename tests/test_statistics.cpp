#include "../Numc++.h"
#include <cmath>

int main() {
    numc::Array values({1.0, 2.0, 3.0}, {3});
    if (std::fabs(values.mean() - 2.0) > 1e-9) return 1;
    if (std::fabs(values.sum() - 6.0) > 1e-9) return 1;
    return 0;
}
