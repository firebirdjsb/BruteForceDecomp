/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59CF3CED292F29C3B5304C279EA31E518CFB389EB7894F4ACDA74D2B62F09F59
 * Entry: 0x002f10a6, Ghidra index: 10772, label: __IsZeroMan
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __IsZeroMan
   
   Library: Visual Studio 2003 Release */

undefined4 __IsZeroMan(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}
