#include "combinaciones.hpp"
#include <algorithm>

unsigned long long binomial_coefficient(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r > n - r) r = n - r;
    unsigned long long result = 1;
    for (int i = 1; i <= r; ++i) {
        result = result * (n - r + i) / i;
    }
    return result;
}

unsigned long long generate_combinations_csv(int n, int r, std::ostream& os) {
    if (r == 0) {
        os << "" << "\n";
        return 1;
    }

    std::vector<int> comb(r);
    for (int i = 0; i < r; ++i) comb[i] = i + 1;

    unsigned long long count = 0;
    while (true) {
        for (int i = 0; i < r; ++i) {
            os << comb[i] << (i + 1 < r ? ',' : '\n');
        }
        ++count;

        int i = r - 1;
        while (i >= 0 && comb[i] == n - r + i + 1) --i;
        if (i < 0) break;
        ++comb[i];
        for (int j = i + 1; j < r; ++j) {
            comb[j] = comb[j - 1] + 1;
        }
    }
    return count;
}
