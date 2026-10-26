/* Synthetic original Xbox MAXSS scalar selector contract; does not verify
 * complete caller ABI or the game engine. */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <xmmintrin.h>
#define CHECK(c) do { if (!(c)) { fprintf(stderr, "FAIL at line %d: %s\n", __LINE__, #c); return 1; } } while(0)
static uint32_t bits(float x) {
  uint32_t u;
  memcpy(&u, &x, sizeof u);
  return u;
}
static float from_bits(uint32_t u) {
  float x;
  memcpy(&x, &u, sizeof x);
  return x;
}
static float scalar_maxss(float a, float b) {
  return _mm_cvtss_f32(_mm_max_ss(_mm_set_ss(a), _mm_set_ss(b)));
}
int main(void) {
  CHECK(bits(scalar_maxss(2.f, 1.f)) == bits(2.f));
  CHECK(bits(scalar_maxss(1.f, 2.f)) == bits(2.f));
  CHECK(bits(scalar_maxss(-4.f, -2.f)) == bits(-2.f));
  /* SSE MAXSS returns its SECOND operand when equal, including +-0. */
  CHECK(bits(scalar_maxss(0.f, -0.f)) == UINT32_C(0x80000000));
  CHECK(bits(scalar_maxss(-0.f, 0.f)) == UINT32_C(0));
  CHECK(bits(scalar_maxss(3.f, from_bits(UINT32_C(0x7fc00001)))) == UINT32_C(0x7fc00001));
  CHECK(bits(scalar_maxss(from_bits(UINT32_C(0x7fc00001)), 3.f)) == bits(3.f));
  puts("PASS: MAXSS scalar selected operand, signed zero and QNaN payload");
  return 0;
}
