/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12ECA0D6BF5E782AFCD94507BC0E96BBEA721824E0EF623873235FA63B6EF993
 * Entry: 0x001e2f80, Ghidra index: 6760, label: FUN_001e2f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e2f80(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (param_3 - param_1) / 0x1c;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_001e31c0(param_1);
    FUN_001e31c0(param_2 + iVar1 * -0x1c);
    FUN_001e31c0(param_3 + iVar1 * -0x38);
    FUN_001e31c0(iVar1 * 0x1c + param_1);
    return;
  }
  FUN_001e31c0(param_1);
  return;
}
