#include <cstdint>
#include <cstddef>

void vec_inc(uint32_t *v, size_t len) {
  for (auto i = 0; i < len; ++i) {
    v[i]++;
  }
}

