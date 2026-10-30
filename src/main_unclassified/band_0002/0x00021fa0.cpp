/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FDCC8285CB54605010EBCD19968DDA54EAA3D02AB62F2F210E09FF974CD071B
 * Entry: 0x00021fa0, Ghidra index: 193, label: FUN_00021fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00021fa0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  byte local_4;
  
  iVar1 = *(int *)(unaff_EBX + 0x738);
  if ((iVar1 != 0) && (iVar3 = FUN_00020ad0(), iVar3 < 3)) {
    iVar3 = unaff_EBX + 0x930;
    if ((*(int *)(unaff_EBX + 0x934) == 0) ||
       ((*(int *)(unaff_EBX + 0x938) - *(int *)(unaff_EBX + 0x934)) / 0x18 == 0)) {
      local_4 = local_4 & 0xfc;
      local_c = 0;
      local_10 = 0;
      local_14 = 0;
      local_8 = iVar1;
      cVar2 = FUN_00041660(&local_14,iVar3,1);
      if (cVar2 != '\0') {
        FUN_00025730(iVar3,1,1);
        iVar1 = *(int *)(*(int *)(unaff_EBX + 0x934) + 0x14);
        if (iVar1 != 0) {
          (**(code **)(*(int *)(iVar1 + 8) + 4))();
        }
        FUN_00058740();
        *param_2 = 1;
        return 1;
      }
    }
    else {
      cVar2 = FUN_00026d80(unaff_EBX,iVar3,unaff_EBX + 0x478,0,0x3fc00000);
      if (cVar2 != '\0') {
        FUN_000255d0(param_1,0);
        FUN_0004d970(unaff_EBX,param_1,4,1,1);
        if (iVar1 == *(int *)(*(int *)(unaff_EBX + 0x938) + -4)) {
          return 1;
        }
        FUN_0004e8f0();
        *param_2 = 1;
        return 1;
      }
    }
    FUN_0004e8f0();
    *(undefined4 *)(unaff_EBX + 0x6ac) = 2;
    return 1;
  }
  FUN_0004e8f0();
  *(undefined4 *)(unaff_EBX + 0x6ac) = 0;
  *param_2 = 1;
  return 1;
}
