/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDE118EE7F8054312411ED16584997950CB1EEDFF120592D7DA209E2B47025D9
 * Entry: 0x0016e560, Ghidra index: 4818, label: FUN_0016e560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016e560(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (param_3 - param_1) / 0x14;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0016e830(param_1);
    FUN_0016e830(param_2 + iVar1 * -0x14);
    FUN_0016e830(param_3 + iVar1 * -0x28);
    FUN_0016e830(iVar1 * 0x14 + param_1);
    return;
  }
  FUN_0016e830(param_1);
  return;
}
