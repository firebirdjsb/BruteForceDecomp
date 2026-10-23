/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8758B5F180D70ED03FCB7124F3970D139513901E47C04547BCE0E0A00E18912B
 * Entry: 0x002ea4bf, Ghidra index: 10580, label: _atexit
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2003 Release */

int __cdecl _atexit(__func *__func)

{
  int iVar1;
  
  iVar1 = __onexit(__func);
  return (iVar1 != 0) - 1;
}
