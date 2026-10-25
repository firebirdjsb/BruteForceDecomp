/* Test only the verified MOVD/PUNPCKLBW zero-extension lane result.
 * x86 packed byte 0 is the low byte of the input DWORD; no MMX
 * registers or host guest-pointer conversion are involved.
 */
#include <stdint.h>
#include <stdio.h>
#include "bf_x86_mmx_byte_lanes.h"

static int check(uint32_t word)
{
  uint64_t expanded = bf_x86_unpack_u32_bytes_to_u16_lanes(word);
  for (unsigned i = 0; i < 4; ++i) {
    uint16_t got = (uint16_t)(expanded >> (i * 16));
    uint16_t expected = (uint16_t)((word >> (i * 8)) & UINT32_C(0xff));
    if (got != expected) {
      fprintf(stderr, "byte lane %u: got %u expected %u\n",
              i, (unsigned)got, (unsigned)expected);
      return 1;
    }
  }
  return 0;
}
int main(void)
{
  const uint32_t examples[] = {
    UINT32_C(0), UINT32_C(0xffffffff), UINT32_C(0x1200aa80),
    UINT32_C(0x800102fe), UINT32_C(0x00ff10a5)
  };
  for (unsigned i = 0; i < sizeof examples / sizeof examples[0]; ++i)
    if (check(examples[i])) return 1;
  for (uint32_t sample = 0; sample < UINT32_C(65536); ++sample)
    if (check(sample | ((~sample & UINT32_C(65535)) << 16))) return 1;
  puts("PASS: MMX byte-to-word lane expansion");
  return 0;
}
