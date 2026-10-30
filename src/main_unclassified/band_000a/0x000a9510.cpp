/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28CD6BD25C2AC1BBD4AFE9B3A62D7E6559D02268C1E77FB55DD00B88BF2099A6
 * Entry: 0x000a9510, Ghidra index: 2025, label: FUN_000a9510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a9510(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *in_ECX;
  
  iVar3 = *(int *)(in_ECX[0x2a] + 0x640);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*in_ECX + 0x38))();
    bVar4 = *(byte *)(iVar3 + 0x4c);
LAB_000a954e:
    bVar4 = bVar4 & 0xfe;
  }
  else {
    iVar2 = (**(code **)(*in_ECX + 0x30))();
    if (iVar2 != iVar3) goto LAB_000a9554;
    iVar3 = (**(code **)(*in_ECX + 0x38))();
    bVar4 = *(byte *)(iVar3 + 0x4c);
    if (*(int *)(iVar3 + 0x10) == 0) goto LAB_000a954e;
    bVar4 = bVar4 | 1;
  }
  *(byte *)(iVar3 + 0x4c) = bVar4;
LAB_000a9554:
  iVar3 = (**(code **)(*in_ECX + 0x30))();
  if (iVar3 == 0) {
    *(undefined4 *)(in_ECX[0x26] + 0x88) = 0;
    if (in_ECX[0x32] != 0) {
      FUN_0008f6a0(0);
    }
    if (*(float *)(in_ECX[0x26] + 0x8c) < 0.0 != (*(float *)(in_ECX[0x26] + 0x8c) == 0.0)) {
      in_ECX[0x23] = 0;
      in_ECX[0x22] = 0;
    }
  }
  else {
    *(undefined4 *)(in_ECX[0x26] + 0x88) = 0x3f800000;
    iVar3 = in_ECX[0x32];
    iVar2 = (**(code **)(*in_ECX + 0x30))();
    if (iVar3 != iVar2) {
      iVar3 = in_ECX[0x26];
      if (0.5 <= *(float *)(iVar3 + 0x8c)) {
        uVar1 = *(undefined4 *)(iVar3 + 0x8c);
      }
      else {
        uVar1 = 0x3f000000;
      }
      *(undefined4 *)(iVar3 + 0x8c) = uVar1;
      iVar3 = (**(code **)(*in_ECX + 0x30))();
      if (in_ECX[0x32] != iVar3) {
        FUN_0008f6a0(iVar3);
      }
      iVar3 = in_ECX[0x26];
      *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(iVar3 + 0x6c);
      *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar3 + 0x70);
      return;
    }
  }
  return;
}
