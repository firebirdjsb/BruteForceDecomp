/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8C9063BBB116F135356F3A247305EFFDBC39B4DA9BF61279BFB4FEDE04EC8F3
 * Entry: 0x002eb885, Ghidra index: 10628, label: FID_conflict:_ungetc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Multiple Matches With Different Base Names
    __ungetc_lk
    _ungetc
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict__ungetc(int __c,FILE *__stream)

{
  char *pcVar1;
  
  if (__c != -1) {
    pcVar1 = __stream->_IO_read_base;
    if ((((uint)pcVar1 & 1) != 0) || (((char)pcVar1 < '\0' && (((uint)pcVar1 & 2) == 0)))) {
      if (__stream->_IO_read_end == (char *)0x0) {
        __getbuf(__stream);
      }
      if ((char *)__stream->_flags == __stream->_IO_read_end) {
        if (__stream->_IO_read_ptr != (char *)0x0) {
          return -1;
        }
        __stream->_flags = (int)((char *)__stream->_flags + 1);
      }
      __stream->_flags = __stream->_flags + -1;
      pcVar1 = (char *)__stream->_flags;
      if (((uint)__stream->_IO_read_base & 0x40) == 0) {
        *pcVar1 = (char)__c;
      }
      else if (*pcVar1 != (char)__c) {
        __stream->_flags = (int)(pcVar1 + 1);
        return -1;
      }
      __stream->_IO_read_ptr = __stream->_IO_read_ptr + 1;
      __stream->_IO_read_base = (char *)((uint)__stream->_IO_read_base & 0xffffffef | 1);
      return __c & 0xff;
    }
  }
  return -1;
}
