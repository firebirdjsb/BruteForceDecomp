/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B2090DB76CBCA4370C76DBEC4CDE6A255A132BC023C9A81B9E94ED9034D21F9
 * Entry: 0x0003c210, Ghidra index: 427, label: FUN_0003c210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003c210(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *(int *)(in_EAX + 0xc);
  uVar2 = param_2 - iVar1;
  iVar3 = *(int *)(in_EAX + 0x10) + iVar1;
  iVar5 = param_4 - param_2;
  if (uVar2 < (uint)(iVar3 - param_4)) {
    FUN_0003cf50(&param_2,iVar1);
    if (iVar5 != 0) {
      iVar1 = *(int *)(in_EAX + 0x10);
      do {
        if (iVar1 != 0) {
          uVar4 = *(int *)(in_EAX + 0xc) + 1;
          *(uint *)(in_EAX + 0xc) = uVar4;
          if (*(uint *)(in_EAX + 8) <= uVar4) {
            *(undefined4 *)(in_EAX + 0xc) = 0;
          }
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) {
            *(undefined4 *)(in_EAX + 0xc) = 0;
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(int *)(in_EAX + 0x10) = iVar1;
    }
  }
  else {
    FUN_0003ca80(&param_2,param_4,param_5,iVar3);
    if (iVar5 != 0) {
      iVar1 = *(int *)(in_EAX + 0x10);
      do {
        if ((iVar1 != 0) && (iVar1 = iVar1 + -1, iVar1 == 0)) {
          *(undefined4 *)(in_EAX + 0xc) = 0;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(int *)(in_EAX + 0x10) = iVar1;
    }
  }
  if (uVar2 == 0) {
    param_2 = *(int *)(in_EAX + 0xc);
  }
  else {
    param_2 = *(int *)(in_EAX + 0xc) + uVar2;
  }
  *param_1 = param_2;
  param_1[1] = in_EAX;
  return;
}
