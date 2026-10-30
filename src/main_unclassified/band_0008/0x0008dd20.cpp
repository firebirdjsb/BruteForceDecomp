/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 079204ECC8FD18056E648396EE552A151FC28D0CA2DAC53D531396EBB155D41A
 * Entry: 0x0008dd20, Ghidra index: 1721, label: FUN_0008dd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_0008e620(undefined4 param_1,undefined4 param_2,int *param_3);
extern void FUN_0008e950(undefined4 param_1,undefined4 param_2,float param_3,int *param_4);
extern float10 FUN_0008e030(undefined4 param_1,undefined4 *param_2);

void FUN_0008dd20(int param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar2;
  float10 fVar3;
  int local_c;
  float local_8;
  float local_4;
  
  iVar2 = 0;
  do {
    if (in_EAX + 4 != 0) {
      fVar3 = (float10)FUN_0008e620(in_EAX,iVar2,in_EAX + 4);
      local_8 = (float)fVar3;
      if (fVar3 != (float10)0.0) {
        fVar3 = (float10)FUN_0008e620(param_1,iVar2,param_1 + 4);
        local_4 = (float)(fVar3 + (float10)local_8);
        FUN_0008e950(param_1,iVar2,local_4,extraout_EDX);
      }
    }
    local_4 = 0.0;
    local_c = 0;
    fVar3 = (float10)FUN_0008e030(iVar2,&local_c);
    while (local_8 = (float)fVar3, local_c != 0) {
      if (((local_8 != 0.0) && (local_c != 0)) && (iVar1 = FUN_0008e590(param_1), iVar1 != 0)) {
        fVar3 = (float10)FUN_0008e620(param_1,iVar2,iVar1);
        local_8 = (float)(fVar3 + (float10)local_8);
        FUN_0008e950(param_1,iVar2,local_8,extraout_EDX_00);
      }
      fVar3 = (float10)FUN_0008e030(iVar2,&local_c);
    }
    iVar2 = iVar2 + 1;
    local_c = 0;
  } while (iVar2 < 0x10);
  return;
}
