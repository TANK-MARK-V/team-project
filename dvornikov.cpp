#include "dvornikov.h"

// Длина волны: λ = v / f
double waveLength(double v, double f) {
    if (f == 0) return 0;
    return v / f;
}

// Скорость волны: v = λ / T
double waveSpeed(double lambda, double T) {
    if (T == 0) return 0;
    return lambda / T;
}
