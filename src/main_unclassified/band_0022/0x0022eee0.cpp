/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AEA0CF929CB912CB24328CF19FD83FDDAAA882E00B3B655C92C236F6F1335E04
 * Entry: 0x0022eee0, Ghidra index: 7730, label: FUN_0022eee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022eee0(void)

{
  float fVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(in_EAX + 0x228) + 0x154);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(in_EAX + 0x228) + 0x158) - iVar4 >> 2;
  }
  fVar1 = *(float *)(in_EAX + 0x208);
  while (1.0 <= fVar1) {
    if (iVar4 == 0) goto LAB_0022efbc;
    FUN_00231b10(in_EAX);
    if ((*(byte *)(in_EAX + 0x225) & 4) != 0) {
      FUN_00231a90();
    }
    iVar2 = *(int *)(in_EAX + 0x228);
    if ((*(int *)(iVar2 + 0x154) != 0) &&
       (1 < (uint)(*(int *)(iVar2 + 0x158) - *(int *)(iVar2 + 0x154) >> 2))) {
      uVar3 = *(int *)(in_EAX + 0x200) + 1;
      *(uint *)(in_EAX + 0x200) = uVar3;
      if ((*(int *)(iVar2 + 0x154) == 0) ||
         ((uint)(*(int *)(iVar2 + 0x158) - *(int *)(iVar2 + 0x154) >> 2) <= uVar3)) {
        *(undefined4 *)(in_EAX + 0x200) = 0;
      }
    }
    iVar4 = iVar4 + -1;
    *(float *)(in_EAX + 0x208) = *(float *)(in_EAX + 0x208) - 1.0;
    fVar1 = *(float *)(in_EAX + 0x208);
  }
  if (iVar4 == 0) {
LAB_0022efbc:
    if (1.0 <= *(float *)(in_EAX + 0x208)) {
      *(byte *)(in_EAX + 0x225) = *(byte *)(in_EAX + 0x225) & 0xfb;
    }
  }
  return;
}
