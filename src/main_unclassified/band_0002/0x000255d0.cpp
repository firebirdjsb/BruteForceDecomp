/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50FE04A97ECA4D3DA3DBCF60C8206FC4E60F95312AD25DC209266150B6645A1E
 * Entry: 0x000255d0, Ghidra index: 258, label: FUN_000255d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000255d0(undefined4 param_1,byte param_2)

{
  char cVar1;
  int *in_EAX;
  int *piVar2;
  undefined4 uVar3;
  float *unaff_EDI;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(**(code **)(*in_EAX + 0x24))();
  if (0.001 <= unaff_EDI[2] * unaff_EDI[2] + unaff_EDI[1] * unaff_EDI[1] + *unaff_EDI * *unaff_EDI)
  {
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    if ((param_2 & 1) == 0) {
      uVar6 = 1;
      uVar5 = 0x41c80000;
      uVar4 = 0;
      uVar3 = (**(code **)(*piVar2 + 0x34))(auStack_20,0,0x41c80000,1);
      cVar1 = FUN_00018c40(in_EAX,param_1,uVar3,uVar4,uVar5,uVar6,unaff_EDI);
      if (cVar1 != '\0') {
        FUN_0004f7f0();
        return 1;
      }
    }
    if (((param_2 & 2) == 0) && ((*(byte *)(in_EAX + 0xf1) & 2) == 0)) {
      cVar1 = (**(code **)(in_EAX[6] + 0x3c))
                        (param_1,in_EAX[0xef],(float)in_EAX[0xf0] * 0.017453292,0,auStack_14);
      if (cVar1 != '\0') {
        FUN_0004f7f0();
        return 2;
      }
    }
    if ((param_2 & 4) == 0) {
      cVar1 = (**(code **)(in_EAX[6] + 0x4c))(param_1,0x3f800000,0x40000000);
      if (cVar1 != '\0') {
        FUN_0004f7f0();
        return 4;
      }
    }
    cVar1 = (**(code **)(in_EAX[6] + 0x24))(param_1);
    if (cVar1 != '\0') {
      FUN_0004f7f0();
      return 8;
    }
    FUN_0004f7f0();
  }
  return 0;
}
