#include <cstdio>
#include <random>

int main() {
  std::mt19937 mt;
  std::uniform_int_distribution<int> ud(1, 3);
  for (int i = 0; i < 10; i++) {
    int r = ud(mt);
    switch (r) {
    case 1:
      puts("One");
      break;
    case 2:
      puts("Two");
      break;
    case 3:
      puts("Three");
      break;
    }
  }
}
