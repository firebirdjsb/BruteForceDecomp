/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5754B6FBC3E9F98CACD4ACDDF6160315F6097E5BE3A6F6CADF901D8A420C308B
 * Entry: 0x000210c0, Ghidra index: 183, label: FUN_000210c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000210c0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  byte local_4;
  
  *(undefined4 *)(in_EAX + 0x8a0) = 0x3fc00000;
  *(undefined1 *)(in_EAX + 0x89d) = 1;
  if (*(int *)(in_EAX + 0x6f4) == 0) {
    *(undefined4 *)(in_EAX + 0x6ac) = 0;
    *param_2 = 1;
    return 0;
  }
  if (*(float *)(param_2 + 4) < *(float *)(in_EAX + 0x71c) * 0.8) {
    FUN_0004e8f0();
    *(undefined4 *)(in_EAX + 0x6ac) = 9;
    *param_2 = 1;
    return 0;
  }
  FUN_0003f0e0(0);
  iVar1 = in_EAX + 0x930;
  if (*(int *)(in_EAX + 0x934) != 0) {
    if ((*(int *)(in_EAX + 0x938) - *(int *)(in_EAX + 0x934)) / 0x18 != 0) {
      iVar4 = *(int *)(*(int *)(in_EAX + 0x938) + -4);
      iVar3 = (**(code **)(**(int **)(param_2 + 0x2c) + 0xf4))();
      if (iVar4 == *(int *)(*(int *)(iVar3 + 0x1ac) + 4)) {
        cVar2 = FUN_00026d80(in_EAX,iVar1,in_EAX + 0x478,0,0x3fc00000);
        if (cVar2 == '\0') {
          FUN_0004e8f0();
          *(undefined4 *)(in_EAX + 0x6ac) = 7;
          *param_2 = 1;
          return 2;
        }
        FUN_000255d0(param_1,0);
        FUN_0004d970(in_EAX,param_1,4,1,0);
        return 1;
      }
      *(undefined4 *)(in_EAX + 0x394) = 0;
      *(undefined4 *)(in_EAX + 0x38c) = 0;
      *(byte *)(in_EAX + 0x390) = *(byte *)(in_EAX + 0x390) & 0xfa | 2;
    }
  }
  local_4 = local_4 & 0xfe;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  iVar4 = (**(code **)(**(int **)(param_2 + 0x2c) + 0xf4))();
  uStack_8 = *(undefined4 *)(*(int *)(iVar4 + 0x1ac) + 4);
  local_4 = local_4 & 0xfd;
  cVar2 = FUN_00041660(&local_14,iVar1,0);
  if (cVar2 != '\0') {
    FUN_00025730(iVar1,1,1);
    return 1;
  }
  *(undefined4 *)(in_EAX + 0x6ac) = 2;
  return 1;
}
