/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA20FC763DCF038700E1EFD49343A5C7DC8B27FF57A439DD11EF1D8B162B501E
 * Entry: 0x00051350, Ghidra index: 736, label: FUN_00051350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00051350(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    FUN_00051470(param_1,iVar1,iVar2 * 8 + param_1);
    FUN_00051470(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2);
    iVar3 = param_3 + iVar2 * -4;
    FUN_00051470(param_3 + iVar2 * -8,iVar3,param_3);
    FUN_00051470(iVar1,param_2,iVar3);
    return;
  }
  FUN_00051470(param_1,param_2,param_3);
  return;
}
