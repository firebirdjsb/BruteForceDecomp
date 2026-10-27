/* Compare the actual internal operation against its x87/SSE instruction
 * oracle. This is not a test of the unresolved original entry ABI. */
#include <stdio.h>
#include <string.h>
#include "../src/main_unclassified/band_0021/0x00219110.c"
extern void bf_reference_219110(float *, float *, const float *);

static int check(const float input[3], int alias)
{
  float actual[32] = {0}, expected[32] = {0};
  const unsigned ecx[] = {12,12,12,13,4};
  const unsigned edx[] = {20,12,13,12,5};
  memcpy(actual + 4, input, 12);
  memcpy(expected, actual, sizeof actual);
  bf_219110_vectors(actual + 4, actual + ecx[alias], actual + edx[alias]);
  bf_reference_219110(expected + ecx[alias], expected + edx[alias], expected + 4);
  if (memcmp(actual, expected, sizeof actual)) {
    fprintf(stderr,"Mismatch alias=%d input=%a,%a,%a\n",alias,input[0],input[1],input[2]);
    for (unsigned i=0;i<32;++i) if (memcmp(actual+i,expected+i,4))
      fprintf(stderr,"  slot=%u actual=%a expected=%a\n",i,actual[i],expected[i]);
    return 1;
  }
  return 0;
}

int main(void)
{
  unsigned saved = _mm_getcsr(), count = 0;
  _mm_setcsr(0x1f80);
  const float edge[][3] = {{1,0,0},{0,1,0},{0,0,1},{-1,0,0},{0,-1,0},
    {0,0,-1},{1,2,3},{-1,2,-3},{0.125f,0.9848f,0.125f},
    {0.125f,0.985f,0.125f},{0x1p-40f,0x1p-38f,-0x1p-39f},
    {0x1p40f,0x1p38f,-0x1p39f}};
  for (unsigned i=0;i<sizeof edge/sizeof *edge;++i)
    for (int alias=0;alias<5;++alias) {
      if (check(edge[i],alias)) {_mm_setcsr(saved);return 1;} ++count;
    }
  uint32_t seed = 0x219110;
  for (unsigned i=0;i<20000;++i) {
    float input[3];
    for (unsigned j=0;j<3;++j) {
      seed = seed * 1664525U + 1013904223U;
      input[j] = ((float)(seed & 0xffffU) - 32768.0f) * 0x1p-5f;
    }
    if (check(input,i%5)) {_mm_setcsr(saved);return 1;} ++count;
  }
  _mm_setcsr(saved);
  printf("PASS %u finite vector/overlap comparisons against extended/RNE x87 oracle\n",count);
  return 0;
}
