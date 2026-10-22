/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAF897B5BE9AFCD8B9519B24EF0673E8ABD1C4D246C1A89D47DD0C1F451E7D46
 * Entry: 0x002eceeb, Ghidra index: 10678, label: _fflush
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _fflush
   
   Library: Visual Studio 2003 Release */

int __cdecl _fflush(FILE *__stream)

{
  int iVar1;
  
  if (__stream == (FILE *)0x0) {
    iVar1 = _flsall(0);
    return iVar1;
  }
  iVar1 = __flush(__stream);
  if (iVar1 != 0) {
    return -1;
  }
  if (((uint)__stream->_IO_read_base & 0x4000) != 0) {
    iVar1 = FUN_002f0bb3(__stream->_IO_write_base);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}
