/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AC9D47770C8CED951DE9AB03137ABD3F722C7A19EA1FCF9729D8D8CE5E42A6B
 * Entry: 0x000d01c0, Ghidra index: 2571, label: FUN_000d01c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d01c0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *in_ECX;
  
  fVar1 = *(float *)(in_ECX + 8);
  fVar2 = *(float *)(*(int *)(in_ECX + 0x2c) + 8);
  fVar3 = *(float *)(in_ECX + 4) + *(float *)(in_ECX + 8);
  *(float *)(in_ECX + 8) = fVar3;
  if (*(int *)(in_ECX + 0x20) == 0) {
    iVar4 = *(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0xc) = iVar4;
    if (fVar2 < fVar3) {
      iVar6 = *(int *)(in_ECX + 0x18);
      iVar5 = *(int *)(in_ECX + 0x10) + iVar6;
      *(float *)(in_ECX + 8) = fVar3 - fVar2;
      *(int *)(in_ECX + 0x10) = iVar5;
      fVar1 = (fVar3 - fVar2) + fVar1;
      if (fVar1 < fVar2) {
        *(int *)(in_ECX + *(int *)(in_ECX + 0x24) * 4 + 0x30) = iVar4;
        *(int *)(in_ECX + *(int *)(in_ECX + 0x24) * 4 + 0x40) = iVar5 - iVar6;
        *(uint *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1U & 3;
      }
      else if (fVar2 < fVar1) {
        *(int *)(in_ECX + *(int *)(in_ECX + 0x24) * 4 + 0x30) = iVar4 - *(int *)(in_ECX + 0x14);
        *(int *)(in_ECX + *(int *)(in_ECX + 0x24) * 4 + 0x40) = iVar5;
        *(uint *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1U & 3;
      }
    }
    if (*(int *)(in_ECX + 0xc) == *(int *)(in_ECX + 0x1c)) {
LAB_000d0324:
      *in_ECX = 1;
      return;
    }
    iVar4 = *(int *)(in_ECX + 0x10);
    *(int *)(in_ECX + *(int *)(in_ECX + 0x24) * 4 + 0x30) = *(int *)(in_ECX + 0xc);
  }
  else {
    iVar4 = *(int *)(in_ECX + 0x18);
    iVar6 = *(int *)(in_ECX + 0x10) + iVar4;
    *(int *)(in_ECX + 0x10) = iVar6;
    if (fVar2 < fVar3) {
      iVar5 = *(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x14);
      *(float *)(in_ECX + 8) = fVar3 - fVar2;
      *(int *)(in_ECX + 0xc) = iVar5;
      fVar1 = (fVar3 - fVar2) + fVar1;
      if (fVar1 < fVar2) {
        *(int *)(in_ECX + *(int *)(in_ECX + 0x24) * 4 + 0x30) = iVar5 - *(int *)(in_ECX + 0x14);
        *(int *)(in_ECX + *(int *)(in_ECX + 0x24) * 4 + 0x40) = iVar6;
        *(uint *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1U & 3;
      }
      else if (fVar2 < fVar1) {
        *(int *)(in_ECX + *(int *)(in_ECX + 0x24) * 4 + 0x30) = iVar5;
        *(int *)(in_ECX + *(int *)(in_ECX + 0x24) * 4 + 0x40) = iVar6 - iVar4;
        *(uint *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1U & 3;
      }
    }
    iVar4 = *(int *)(in_ECX + 0x10);
    if (iVar4 == *(int *)(in_ECX + 0x1c)) goto LAB_000d0324;
    *(undefined4 *)(in_ECX + *(int *)(in_ECX + 0x24) * 4 + 0x30) = *(undefined4 *)(in_ECX + 0xc);
  }
  *(int *)(in_ECX + *(int *)(in_ECX + 0x24) * 4 + 0x40) = iVar4;
  *(uint *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1U & 3;
  return;
}
