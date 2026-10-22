/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D78AB87526876511AF53DE629C4294DF1B6E1E978F49618593458B21E0D691A
 * Entry: 0x00112800, Ghidra index: 3559, label: FUN_00112800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00112800(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(in_EAX + 8) + 0xbec) + 0xc))();
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) &&
     ((*(byte *)(*(int *)(iVar1 + 0x24) + 0x14) & 2) != 0)) {
    return 1;
  }
  return 0;
}
