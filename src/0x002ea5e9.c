/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93B7261C255B89541EFA1B4718B8B2C61B4CDB17DFDFBA0A739286EBA154F50B
 * Entry: 0x002ea5e9, Ghidra index: 10586, label: _freopen
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _freopen
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl _freopen(char *__filename,char *__modes,FILE *__stream)

{
  FILE *pFVar1;
  
  if (((uint)__stream->_IO_read_base & 0x83) != 0) {
    _fclose(__stream);
  }
  __stream->_IO_read_end = (char *)0x0;
  __stream->_flags = 0;
  __stream->_IO_read_base = (char *)0x0;
  __stream->_IO_read_ptr = (char *)0x0;
  pFVar1 = (FILE *)__openfile(__filename,__modes,0x40,__stream);
  return pFVar1;
}
