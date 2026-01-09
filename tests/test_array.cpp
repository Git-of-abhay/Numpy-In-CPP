#include "../Numc++.h"
#include <cmath>
#include <iostream>

int main() {
    using numc::Array;
    Array left{{1, 2}, {3, 4}};
    Array right{{5, 6}, {7, 8}};
    Array product = left.matmul(right);
    if (product.get_shape() != std::vector<size_t>{2, 2} || std::fabs(product({0, 0}) - 19.0) > 1e-9) {
        std::cerr << "matmul regression failed\n";
        return 1;
    }
    if (!left.reshape({4}).allclose(Array({1, 2, 3, 4}, {4}))) {
        std::cerr << "reshape regression failed\n";
        return 1;
    }
    return 0;
}
