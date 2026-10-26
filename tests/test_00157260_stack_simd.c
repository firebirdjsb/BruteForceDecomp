/* Bounded differential test of the actual file-local storage operation.
 * Requires x64, default host RNE, masked exceptions and no fast-math.
 * Does not execute the entry function or validate its unresolved interfaces. */
#include <stdio.h>
#include "../src/main_unclassified/band_0015/0x00157260.c"
extern void bf_reference_157260(void *, const void *, uint32_t *);

static int check(const uint32_t inputs[6], int alias)
{
  uint32_t actual[64] = {0}, expected[64] = {0};
  uint32_t other[12] = {0};
  uint32_t scratch_a[5] = {0x3a3fb4,6,0,0x12345678,UINT32_MAX};
  uint32_t scratch_b[5];
  memcpy(scratch_b, scratch_a, sizeof scratch_a);
  memcpy(actual + 0xe8/4, inputs, 12);
  memcpy(expected, actual, sizeof actual);
  memcpy(other + 0x24/4, inputs + 3, 12);
  /* other=object+0xc4 makes its three inputs exactly alias the outputs. */
  const void *other_a = alias ? (const void *)((unsigned char *)actual + 0xc4) : (const void *)other;
  const void *other_b = alias ? (const void *)((unsigned char *)expected + 0xc4) : (const void *)other;
  bf_157260_sum_scale(actual, other_a, scratch_a);
  bf_reference_157260(expected, other_b, scratch_b);
  if (memcmp(actual, expected, sizeof actual) ||
      memcmp(scratch_a, scratch_b, sizeof scratch_a)) {
    fprintf(stderr,"Mismatch alias=%d input=%08x,%08x,%08x / %08x,%08x,%08x\n",
            alias,inputs[0],inputs[1],inputs[2],inputs[3],inputs[4],inputs[5]);
    return 1;
  }
  return 0;
}

int main(void)
{
  const uint32_t edge[] = {0,0x80000000,1,0x80000001,0x007fffff,
    0x00800000,0x3f000000,0xbf000000,0x3f800000,0xbf800000,
    0x3f800001,0x4b800000,0x7f7fffff,0xff7fffff};
  unsigned saved = _mm_getcsr(), cases = 0;
  _mm_setcsr(0x1f80); /* RNE, masked exceptions, no FTZ/DAZ. */
  for (unsigned i=0;i<sizeof edge/sizeof *edge;++i) {
    for (unsigned j=0;j<sizeof edge/sizeof *edge;++j) {
      uint32_t inputs[6] = {edge[i],edge[j],edge[i],edge[j],edge[i],edge[j]};
      for (int alias=0;alias<2;++alias) {
        if (check(inputs,alias)) { _mm_setcsr(saved); return 1; }
        ++cases;
      }
    }
  }
  uint32_t seed = 0x157260;
  for (unsigned i=0;i<20000;++i) {
    uint32_t inputs[6];
    for (unsigned j=0;j<6;++j) {
      seed = seed * 1664525U + 1013904223U;
      inputs[j] = (seed & 0x7f800000U) == 0x7f800000U ? seed ^ 0x00800000U : seed;
    }
    if (check(inputs,0)) { _mm_setcsr(saved); return 1; }
    ++cases;
  }
  _mm_setcsr(saved);
  printf("PASS %u finite-input sum/scale comparisons and scratch/alias checks\n",cases);
  return 0;
}
