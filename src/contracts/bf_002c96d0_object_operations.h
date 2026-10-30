/* Observed memory operation for original 0x002c9670. Not an Xbox ABI bridge.
 * ECX is the host output binding; EDI remains a 32-bit guest source address.
 * Direct guest-memory mapping, faults and original entry registers remain
 * ABI_UNVERIFIED. No restrict: source/output may alias; preserve access order.
 */
#ifndef BF_002C96D0_OBJECT_OPERATIONS_H
#define BF_002C96D0_OBJECT_OPERATIONS_H
#include <stdint.h>
#include <string.h>

static inline uint32_t bf_002c9670_read_guest_u32(uint32_t address)
{
  uint32_t word;
  memcpy(&word, (const void *)(uintptr_t)address, 4);
  return word;
}

static inline void bf_002c9670_produce(void *ecx_output, uint32_t edi_source)
{
  unsigned char *output = (unsigned char *)ecx_output;
  uint32_t source_word, second_word, tag_address, value;
  int8_t tag;
  unsigned index;

  /* 0x2c9670..0x2c967d: source+0x68, store +0, dereference +0x90,
   * reload output+0 BEFORE storing output+4. All guest additions wrap. */
  source_word = bf_002c9670_read_guest_u32(edi_source + 0x68u);
  memcpy(output, &source_word, 4);
  second_word = bf_002c9670_read_guest_u32(source_word + 0x90u);
  memcpy(&tag_address, output, 4);
  memcpy(output + 4, &second_word, 4);
  /* CMP byte [EDX+0x70],8 / JL: signed one-byte comparison. */
  memcpy(&tag, (const void *)(uintptr_t)(tag_address + 0x70u), 1);
  if (tag >= 8) {
    value = edi_source + 0x10u;
    /* 21 DWORD stores +0x64 down to +0x14 inclusive. */
    for (index = 0; index != 21; ++index)
      memcpy(output + 0x64u - index * 4u, &value, 4);
  }
  else {
    value = 0;
    /* 20 DWORD zero stores +0x64 down to +0x18 inclusive. */
    for (index = 0; index != 20; ++index)
      memcpy(output + 0x64u - index * 4u, &value, 4);
    value = edi_source + 0x10u;
    memcpy(output + 0x14, &value, 4);
  }
  /* 0x2c969a..0x2c969e or 0x2c96c2..0x2c96c5: read source+0x60
   * AFTER the branch writes; do not prefetch across possible aliasing. */
  value = bf_002c9670_read_guest_u32(edi_source + 0x60u);
  memcpy(output + 0x10, &value, 4);
}
#endif
