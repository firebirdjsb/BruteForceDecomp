/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8C9063BBB116F135356F3A247305EFFDBC39B4DA9BF61279BFB4FEDE04EC8F3
 * Entry: 0x002eb885, Ghidra index: 10628, label: FID_conflict:_ungetc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_crt_stream.h"
/* Library Function - Multiple Matches With Different Base Names
    __ungetc_lk
    _ungetc
   
   Library: Visual Studio 2003 Release */

/* Guest MSVC stream cursor and flags are 32-bit x86 words.
 * This preserves the recovered buffer-boundary and pushback sequence;
 * guest pointer translation remains a native-runtime responsibility. */
int __cdecl FID_conflict__ungetc(int __c,bf_xbox_crt_stream32 *__stream)
{
  if (__c == -1) return -1;
  uint32_t flags = __stream->flags_0c;
  if (((flags & UINT32_C(1)) == 0) &&
      (((int8_t)flags >= 0) || ((flags & UINT32_C(2)) != 0))) return -1;
  if (__stream->word_08 == 0) __getbuf(__stream);
  uint32_t cursor = __stream->word_00;
  if (cursor == __stream->word_08) {
    if (__stream->word_04 != 0) return -1;
    cursor += UINT32_C(1);
  }
  cursor -= UINT32_C(1);
  __stream->word_00 = cursor;
  uint8_t *byte_at_guest_cursor = (uint8_t *)(uintptr_t)cursor;
  if ((flags & UINT32_C(0x40)) == 0) {
    *byte_at_guest_cursor = (uint8_t)__c;
  } else if (*byte_at_guest_cursor != (uint8_t)__c) {
    __stream->word_00 = cursor + UINT32_C(1);
    return -1;
  }
  __stream->word_04 += UINT32_C(1);
  __stream->flags_0c = (flags & ~UINT32_C(0x10)) | UINT32_C(1);
  return __c & 0xff;
}
