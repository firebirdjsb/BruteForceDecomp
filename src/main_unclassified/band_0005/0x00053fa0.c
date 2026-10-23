/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52568FFFB827BD7A666FCD93DB42912B1F581C26F783239CE9EBF64688FBD817
 * Entry: 0x00053fa0, Ghidra index: 783, label: FUN_00053fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00053fa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1;
  iVar1 = -(iVar2 >> 0x1f);
  while (1 < iVar2 / 0x14) {
    FUN_000544e0(param_1,param_2,0);
    iVar2 = iVar2 + -0x14;
    iVar1 = iVar2 * 0x66666667;
    param_2 = param_2 + -0x14;
  }
  return iVar1;
}
