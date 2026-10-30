/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E906C27A1B58EC79A49ACE7CE7B83E6F94BDBD3D69A895206346650FEF2D7B87
 * Entry: 0x002c0fc0, Ghidra index: 10022, label: FUN_002c0fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c0fc0(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int *in_EAX;
  int iVar4;
  
  FUN_002c1860(in_EAX);
  uVar3 = in_EAX[5];
  if ((uVar3 & 0x3000) == 0) {
    if ((uVar3 & 0xc000) == 0) {
      return;
    }
    (**(code **)(*in_EAX + 0x1c))();
    return;
  }
  if ((uVar3 & 0xc000) == 0) {
    if (0.0 < (float)in_EAX[0x15]) {
      if ((uVar3 & 0xc00) == 0) {
        return;
      }
      FUN_002c0f20();
      return;
    }
    fVar1 = -(float)in_EAX[0x15];
  }
  else {
    fVar1 = (float)in_EAX[0x14];
  }
  iVar4 = *(int *)(in_EAX[10] + 0x18);
  if (iVar4 != 0) {
    if (*(int *)(in_EAX[0x11] + 0x18) != 0) {
      return;
    }
    if (iVar4 != 0) {
      fVar2 = *(float *)(iVar4 + 4);
      goto LAB_002c103a;
    }
  }
  fVar2 = *(float *)(*(int *)(in_EAX[0x11] + 0x18) + 4);
LAB_002c103a:
  iVar4 = (**(code **)(*in_EAX + 0x18))();
  if (iVar4 != 0) {
    (**(code **)(*in_EAX + 0x1c))();
    return;
  }
  if ((in_EAX[5] & 0xc00U) != 0) {
    return;
  }
  FUN_002c0ee0();
  FUN_002c0b70();
  FUN_002c0e30(fVar1 + fVar2);
  return;
}
