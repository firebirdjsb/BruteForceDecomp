/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 062901CE6C37BCE6AFA9D66E12814F478E0059986ED64FDD1D1234FF5C796338
 * Entry: 0x002bfd20, Ghidra index: 10004, label: FUN_002bfd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bfd20(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 unaff_EBX;
  float local_4;
  
  FUN_002c16a0();
  if ((in_EAX[5] & 0xc000U) == 0) {
    if (0.0 < (float)in_EAX[0x15]) {
      if ((in_EAX[5] & 0xc00U) != 0) {
        FUN_002c0f20();
      }
      FUN_002bfae0();
      FUN_002c0220(in_EAX,1,2);
      return;
    }
    local_4 = -(float)in_EAX[0x15];
  }
  else {
    local_4 = (float)in_EAX[0x14];
  }
  iVar1 = *(int *)(in_EAX[10] + 0x18);
  if ((iVar1 != 0) || (iVar1 = *(int *)(in_EAX[0x11] + 0x18), iVar1 != 0)) {
    local_4 = local_4 + *(float *)(iVar1 + 4);
  }
  FUN_002c0e30(local_4);
  iVar1 = (**(code **)(*in_EAX + 0x18))();
  if (iVar1 != 0) {
    FUN_002d5ff0(unaff_EBX);
    return;
  }
  FUN_002c0ee0();
  return;
}
