/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C748FA6E105007A5FF28D4128CB70CC88F3AB895756295B9C157F3785739B669
 * Entry: 0x002e7b70, Ghidra index: 10528, label: FUN_002e7b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e7b70(int param_1,int param_2,uint param_3,uint param_4)

{
  int in_ECX;
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  bVar4 = param_4 != 4;
  if ((param_4 == 1) || (bVar5 = param_4 == 2, param_4 = param_4 & 0xffffff00, bVar5)) {
    param_4 = ((param_4 & UINT32_C(0xffffff00)) | UINT32_C(1));
  }
  iVar1 = 0;
  switch(param_1) {
  case -5:
    param_1 = -1;
    break;
  case -4:
    param_1 = -2;
    break;
  case -3:
    param_1 = -3;
    break;
  case -2:
    param_1 = -4;
    break;
  default:
    param_1 = *(int *)(*(int *)(in_ECX + 0x24) + param_1 * 4);
    if (param_1 == 0) {
      return -0x7fffbffb;
    }
  }
  if ((0x3fc < param_3) && ((char)param_4 != '\0')) {
    uVar3 = (param_3 + 0x3fb) / 0x3fc;
    param_4 = ((param_4 & UINT32_C(0xffffff00)) | UINT32_C(0xff));
    if (param_3 != 0) {
      while( true ) {
        bVar2 = (char)uVar3 - 1;
        param_4 = (param_4 & UINT32_C(0xffff0000)) | ((uint32_t)bVar2 << 8) | (param_4 & UINT32_C(0xff));
        uVar3 = param_3;
        if (0x3fb < param_3) {
          uVar3 = 0x3fc;
        }
        iVar1 = -4;
        if (bVar4) {
          iVar1 = param_1;
        }
        iVar1 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x30))(iVar1,1,&param_4,2,param_2,uVar3);
        param_3 = param_3 - uVar3;
        param_2 = param_2 + uVar3;
        if ((iVar1 < 0) || (param_3 == 0)) break;
        uVar3 = (uint)bVar2;
      }
    }
    return iVar1;
  }
  iVar1 = -4;
  if (bVar4) {
    iVar1 = param_1;
  }
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x2c))
                    (iVar1,(char)param_4 != '\0',param_2,param_3);
  return iVar1;
}
