/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46EE83978C044005A92210EE881569B081F03679B32FB344240184A72645C893
 * Entry: 0x00236a50, Ghidra index: 7836, label: FUN_00236a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00236a50(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  
  uVar2 = param_1;
  iVar4 = FUN_00236a00(in_ECX,param_2,in_ECX + 5);
  if (iVar4 == 3) {
    param_1 = *in_ECX;
    iVar5 = FUN_0023c5c0();
    if ((iVar5 != 0) && (iVar4 = FUN_00236a00(in_ECX,param_2,in_ECX + 5), 2 < iVar4)) {
      param_1 = iVar5;
      FUN_0023c1d0(&param_1,param_5,uVar2,param_4,0);
    }
    uVar3 = (uint)param_3;
    if (((uint)param_3 & 0x4000) == 0) {
      uVar1 = (uint)param_3 & 0x8000;
      param_3 = (int *)in_ECX[0x14];
      piVar6 = (int *)in_ECX[0x13];
      if (uVar1 == 0) {
        if (piVar6 != param_3) {
          do {
            iVar5 = FUN_00236a50(uVar2,param_2,uVar3,param_4,param_5,param_6);
            if (iVar4 != iVar5) {
              iVar4 = 3;
            }
            piVar6 = piVar6 + 1;
          } while (piVar6 != param_3);
        }
      }
      else if (piVar6 != param_3) {
        do {
          if (((*(uint *)(*piVar6 + 0x44) >> 3 & 1) == 0) &&
             (iVar5 = FUN_00236a50(uVar2,param_2,uVar3,param_4,param_5,param_6), iVar4 != iVar5)) {
            iVar4 = 3;
          }
          piVar6 = piVar6 + 1;
        } while (piVar6 != param_3);
        return iVar4;
      }
    }
  }
  else if ((iVar4 == 4) && (iVar5 = FUN_00236bc0(uVar2,param_3,param_4,param_5,param_6), iVar5 != 4)
          ) {
    return 3;
  }
  return iVar4;
}
