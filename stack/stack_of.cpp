#include <cstdio>

const int N = 2000;
const int STEP = 1000;
const double dt = 0.5;
double x[N] = {};

void update() {
  double xt[N];
  for (int i = 0; i < N; i++) {
    xt[i] = x[i];
  }
  for (int i = 1; i < N - 1; i++) {
    x[i] -= (-xt[i - 1] + 2.0 * x[i] - x[i + 1]) * dt;
  }
}

int main() {
  x[N / 2] = x[N / 2 + 1] = 1.0;
  for (int i = 0; i < STEP; i++) {
    update();
  }
  for (int i = 0; i < N; i++) {
    printf("%d %f\n", i, x[i]);
  }
}
