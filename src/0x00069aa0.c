/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE4F15A3BA0F87F62D3765355522CE354B8903EB5CF61C83B48EDA9CEDB7EBB4
 * Entry: 0x00069aa0, Ghidra index: 1172, label: FUN_00069aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00069aa0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  
  uVar5 = param_1;
  if (param_1 != param_2) {
    param_1 = param_1 & 0xffffff00;
    piVar6 = (int *)(uVar5 + 0x30);
    do {
      iVar1 = *piVar6;
      if (iVar1 != 0) {
        iVar2 = piVar6[1];
        uVar3 = FUN_0024a840(&param_2,&param_2);
        FUN_00050b40(iVar1,iVar2,piVar6 + -1,uVar3);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar6);
      }
      *piVar6 = 0;
      piVar6[1] = 0;
      piVar6[2] = 0;
      if (0xf < (uint)piVar6[-5]) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar6[-10]);
      }
      piVar6[-5] = 0xf;
      piVar6[-6] = 0;
      uVar4 = FUN_0001f4d0(&param_1);
      FUN_0001f4e0(uVar4);
      uVar5 = uVar5 + 0x3c;
      piVar6 = piVar6 + 0xf;
    } while (uVar5 != param_2);
  }
  return;
}
