/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68453BD684FFCAF58F86C009A2E4487396289757844C38A9EFE0AA4081F151BA
 * Entry: 0x00159fb0, Ghidra index: 4507, label: FUN_00159fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00159fb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *in_EAX;
  undefined4 uVar2;
  undefined3 uVar3;
  undefined3 extraout_var;
  int *unaff_EDI;
  bool bVar4;
  bool bVar5;
  
  FUN_0015a030(0);
  (**(code **)(*in_EAX + 0xbc))();
  bVar5 = *(char *)((int)unaff_EDI + 0x26) < '\0';
  if (bVar5) {
    (**(code **)(*unaff_EDI + 0xbc))();
  }
  uVar2 = FUN_00235e90(unaff_EDI[0x1b],param_1,param_2,in_EAX[0x1b]);
  bVar4 = (char)uVar2 != '\0';
  if (bVar4) {
    iVar1 = *in_EAX;
    uVar2 = (**(code **)(iVar1 + 0x40))();
    uVar2 = (**(code **)(iVar1 + 0x50))(uVar2);
  }
  uVar3 = (undefined3)((uint)uVar2 >> 8);
  if (bVar5) {
    (**(code **)(*unaff_EDI + 0xb8))(0x3f800000);
    uVar3 = extraout_var;
  }
  return CONCAT31(uVar3,bVar4);
}
