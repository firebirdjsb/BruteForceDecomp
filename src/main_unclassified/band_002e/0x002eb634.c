/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23A82B0A52E6ACB59EC49FADCBA1FD5471B12F40561238A032D51F05A833ED7B
 * Entry: 0x002eb634, Ghidra index: 10626, label: _ftell
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_crt_stream.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8ea0;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _ftell
   
   Library: Visual Studio 2003 Release */

/* Reconstructed from original Xbox x86 0x002eb634..0x002eb78c.
 * All cursor/count/offset arithmetic is 32-bit guest arithmetic.
 * Guest memory dereferences are temporary pending native address mapping. */
long __cdecl _ftell(bf_xbox_crt_stream32 *stream)
{
  uint32_t handle = stream->handle_10;
  uint32_t cursor, base, flags, descriptor_base, descriptor_offset;
  uint32_t adjustment, scan, scan_end, descriptor_byte;
  int32_t position, delta;
  if ((int32_t)stream->word_04 < 0)
    stream->word_04 = 0;
  position = FUN_002ef651(handle, 0, 1);
  if (position < 0)
    return -1;
  flags = stream->flags_0c;
  if ((flags & UINT32_C(0x108)) == 0)
    return (long)(int32_t)((uint32_t)position - stream->word_04);
  cursor = stream->word_00;
  base = stream->word_08;
  delta = (int32_t)(cursor - base);
  if ((flags & UINT32_C(3)) == 0) {
    if ((int8_t)flags >= 0) {
      _DAT_0040f4d8 = 0x16;
      return -1;
    }
  } else {
    descriptor_base = *(const uint32_t *)(uintptr_t)
        (UINT32_C(0x004a8ea0) + (uint32_t)(((int32_t)handle >> 5) * 4));
    descriptor_offset = (handle & UINT32_C(31)) * 8 + 4;
    descriptor_byte = *(const uint8_t *)(uintptr_t)(descriptor_base + descriptor_offset);
    if ((descriptor_byte & UINT32_C(0x80)) != 0) {
      scan = base;
      while (scan < cursor) {
        if (*(const uint8_t *)(uintptr_t)scan == (uint8_t)'\\n')
          delta = (int32_t)((uint32_t)delta + 1);
        scan++;
      }
    }
  }
  if (position != 0 && (flags & UINT32_C(1)) != 0) {
    if (stream->word_04 == 0) {
      delta = 0;
    } else {
      adjustment = (uint32_t)position - base + stream->word_04;
      descriptor_base = *(const uint32_t *)(uintptr_t)
          (UINT32_C(0x004a8ea0) + (uint32_t)(((int32_t)handle >> 5) * 4));
      descriptor_offset = (handle & UINT32_C(31)) * 8 + 4;
      descriptor_byte = *(const uint8_t *)(uintptr_t)(descriptor_base + descriptor_offset);
      if ((descriptor_byte & UINT32_C(0x80)) != 0) {
        int32_t end_position = FUN_002ef651(handle, 0, 2);
        if (end_position == position) {
          scan = base;
          scan_end = base + adjustment;
          while (scan < scan_end) {
            if (*(const uint8_t *)(uintptr_t)scan == (uint8_t)'\\n')
              adjustment++;
            scan++;
          }
          descriptor_byte = (flags >> 8) & UINT32_C(0x20);
        } else {
          FUN_002ef651(handle, position, 0);
          if (adjustment > UINT32_C(0x200) ||
              (flags & UINT32_C(8)) == 0 ||
              (flags & UINT32_C(0x400)) != 0)
            adjustment = stream->unknown_18;
          else
            adjustment = UINT32_C(0x200);
          descriptor_byte = *(const uint8_t *)(uintptr_t)(descriptor_base + descriptor_offset);
          descriptor_byte &= UINT32_C(4);
        }
        if (descriptor_byte != 0)
          adjustment++;
      }
      position = (int32_t)((uint32_t)position - adjustment);
    }
  }
  return (long)(int32_t)((uint32_t)delta + (uint32_t)position);
}
