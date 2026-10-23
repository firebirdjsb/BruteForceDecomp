/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA44C4049BE7691BE572132C7CB183A0E776D1EBC43301CDEA7F2C684D37BDDA
 * Entry: 0x002eb16e, Ghidra index: 10613, label: _fclose
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2003 Release */

int __cdecl _fclose(FILE *__stream)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if (((uint)__stream->_IO_read_base & 0x40) == 0) {
    if (((uint)__stream->_IO_read_base & 0x83) != 0) {
      iVar2 = __flush(__stream);
      __freebuf(__stream);
      iVar1 = FUN_002ef342(__stream->_IO_write_base);
      if (iVar1 < 0) {
        iVar2 = -1;
      }
      else if (__stream->_IO_buf_base != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(__stream->_IO_buf_base);
      }
    }
  }
  else {
    iVar2 = -1;
  }
  __stream->_IO_read_base = (char *)0x0;
  return iVar2;
}
