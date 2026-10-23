/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2696FB146C7FF488C5420DFFA0866726DAA232525AB370B0366CD00465AF3B17
 * Entry: 0x0016e170, Ghidra index: 4812, label: FUN_0016e170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016e170(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1;
  if (param_1 != param_2) {
joined_r0x0016e185:
    iVar5 = iVar4;
    iVar4 = iVar5 + 0x14;
    if (iVar4 != param_2) {
      uVar2 = *(uint *)(iVar5 + 0x24);
      iVar6 = param_1;
      if (*(uint *)(param_1 + 0x10) <= uVar2) goto LAB_0016e1af;
      goto joined_r0x0016e1ce;
    }
  }
  return;
LAB_0016e1af:
  iVar3 = iVar4;
  if (uVar2 < *(uint *)(iVar5 + 0x10)) {
    do {
      iVar6 = iVar3 + -0x14;
      puVar1 = (uint *)(iVar3 + -0x18);
      iVar3 = iVar6;
    } while (uVar2 < *puVar1);
joined_r0x0016e1ce:
    if ((iVar6 != iVar4) && (iVar4 != iVar5 + 0x28)) {
      FUN_0016ecf0(iVar6,iVar4,iVar5 + 0x28,0,0);
    }
  }
  goto joined_r0x0016e185;
}
