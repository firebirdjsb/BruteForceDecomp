/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C1F2BAF0CF2C70A4B3B95A074B12DB8540FFD2479BFA5430A78DDF2BAC26299
 * Entry: 0x002eb8f1, Ghidra index: 10629, label: FID_conflict:_getc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Multiple Matches With Different Base Names
    _fgetc
    _getc
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict__getc(FILE *__stream)

{
  char **ppcVar1;
  byte bVar2;
  int iVar3;
  
  ppcVar1 = &__stream->_IO_read_ptr;
  *ppcVar1 = *ppcVar1 + -1;
  if (-1 < (int)*ppcVar1) {
    bVar2 = *(byte *)__stream->_flags;
    __stream->_flags = (int)((byte *)__stream->_flags + 1);
    return (uint)bVar2;
  }
  iVar3 = __filbuf(__stream);
  return iVar3;
}
