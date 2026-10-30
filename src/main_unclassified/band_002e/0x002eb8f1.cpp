/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C1F2BAF0CF2C70A4B3B95A074B12DB8540FFD2479BFA5430A78DDF2BAC26299
 * Entry: 0x002eb8f1, Ghidra index: 10629, label: FID_conflict:_getc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_crt_stream.h"
/* Library Function - Multiple Matches With Different Base Names
    _fgetc
    _getc
   
   Library: Visual Studio 2003 Release */

/* Original x86 at 0x002EB8F1: decrement guest count [+4], branch on
 * signed result, read one byte at guest cursor [+0], increment cursor.
 * These 32-bit guest addresses are NOT native host pointers. */
int __cdecl FID_conflict__getc(bf_xbox_crt_stream32 *__stream)
{
  uint32_t count = __stream->word_04 - UINT32_C(1);
  __stream->word_04 = count;
  if ((int32_t)count >= 0) {
    uint32_t guest_cursor = __stream->word_00;
    uint32_t result = (uint32_t)*(const uint8_t *)(uintptr_t)guest_cursor;
    __stream->word_00 = guest_cursor + UINT32_C(1);
    return (int)result;
  }
  return __filbuf(__stream);
}
