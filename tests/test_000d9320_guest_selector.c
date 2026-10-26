/* 0x000D9320: integer jump-table selector stored as a raw guest float DWORD.
 * This tests only the recovered switch encoding, not the entire function. */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static uint32_t bf_d9320_raw_word(float value) {
  uint32_t bits;
  _Static_assert(sizeof bits == sizeof value, "guest DWORD float lane");
  memcpy(&bits, &value, sizeof bits);
  return bits;
}
static int original_jump_case(float value) {
  switch (bf_d9320_raw_word(value)) {
    case 1: return 0x0d9623;
    case 2: return 0x0d9643;
    case 3: return 0x0d9663;
    case 4: return 0x0d9683;
    default: return 0x0d96a3;
  }
}
static float from_word(uint32_t bits) {
  float f;
  memcpy(&f, &bits, sizeof f);
  return f;
}
int main(void) {
  const int targets[] = {0x0d96a3,0x0d9623,0x0d9643,0x0d9663,0x0d9683,0x0d96a3};
  for (uint32_t word=0;word<6;word++) {
    if (original_jump_case(from_word(word))!=targets[word]) return 1;
  }
  if (original_jump_case(from_word(0xffffffff))!=0x0d96a3) return 2;
  if (original_jump_case(from_word(0x3f800000))!=0x0d96a3) return 3;
  puts("PASS: x86 integer selector bit patterns and four jump table targets");
  return 0;
}
