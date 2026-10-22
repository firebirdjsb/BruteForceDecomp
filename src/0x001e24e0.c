/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 739BD4818F1B409EB5CFD3C756D7FBF98E8EF1E8A1607A4EFA0FB5403F526C01
 * Entry: 0x001e24e0, Ghidra index: 6749, label: FUN_001e24e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_001e24e0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = param_6;
  iVar4 = param_4;
  iVar5 = param_2;
  iVar6 = param_7;
  if (param_2 != param_3) {
    do {
      if (iVar4 == param_5) break;
      if (*(uint *)(iVar4 + 0x18) < 0x10) {
        iVar2 = iVar4 + 4;
      }
      else {
        iVar2 = *(int *)(iVar4 + 4);
      }
      iVar2 = FUN_000e0b20(0,iVar2,*(undefined4 *)(iVar4 + 0x14));
      if (iVar2 < 0) {
        piVar3 = (int *)FUN_000e0be0(&param_2,iVar6,iVar5);
        iVar6 = *piVar3 + 0x1c;
        iVar5 = iVar5 + 0x1c;
      }
      else {
        if (*(uint *)(iVar5 + 0x18) < 0x10) {
          iVar2 = iVar5 + 4;
        }
        else {
          iVar2 = *(int *)(iVar5 + 4);
        }
        iVar2 = FUN_000e0b20(0,iVar2,*(undefined4 *)(iVar5 + 0x14));
        if (-1 < iVar2) {
          iVar5 = iVar5 + 0x1c;
        }
        iVar4 = iVar4 + 0x1c;
      }
    } while (iVar5 != param_3);
  }
  FUN_001e2ab0(param_1,iVar5,param_3,uVar1,iVar6,param_3);
  return param_1;
}
