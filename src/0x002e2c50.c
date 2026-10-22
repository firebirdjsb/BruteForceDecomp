/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F451AE9B6B99886AB3D772A031E4348F6E0C21348D845E545D5DFF08B3CC6AFA
 * Entry: 0x002e2c50, Ghidra index: 10381, label: FUN_002e2c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e2c50(void)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_002e3ec0();
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  uVar1 = (uint)uVar8 - *(uint *)(in_ECX + 0x4f8);
  uVar4 = (uint)((uint)uVar8 < *(uint *)(in_ECX + 0x4f8));
  uVar5 = iVar3 - *(int *)(in_ECX + 0x4fc);
  if (-1 < (int)(uVar5 - uVar4)) {
    if (uVar5 != uVar4 && SBORROW4(iVar3,*(int *)(in_ECX + 0x4fc)) == SBORROW4(uVar5,uVar4))
    goto LAB_002e2c90;
    do {
      if (uVar1 < 0xfb) {
        return;
      }
LAB_002e2c90:
      do {
        uVar5 = *(int *)(in_ECX + 0xc4) + 1U & 3;
        uVar4 = 0;
        piVar6 = (int *)(uVar5 * 0x20 + 0x44 + in_ECX);
        piVar2 = (int *)(in_ECX + 0x24);
        do {
          *piVar2 = *piVar2 + *(int *)(in_ECX + 0x44 + (uVar4 + *(int *)(in_ECX + 0xc4) * 8) * 4);
          uVar4 = uVar4 + 1;
          *piVar2 = *piVar2 - *piVar6;
          *piVar6 = 0;
          piVar2 = piVar2 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar4 < 8);
        uVar4 = *(uint *)(in_ECX + 0x4f8);
        *(uint *)(in_ECX + 0x4f8) = uVar4 + 0xfa;
        *(uint *)(in_ECX + 0xc4) = uVar5;
        *(uint *)(in_ECX + 0x4fc) = *(int *)(in_ECX + 0x4fc) + (uint)(0xffffff05 < uVar4);
        uVar8 = FUN_002e3ec0();
        uVar1 = (uint)uVar8 - *(uint *)(in_ECX + 0x4f8);
        uVar4 = (uint)((uint)uVar8 < *(uint *)(in_ECX + 0x4f8));
        uVar5 = (int)((ulonglong)uVar8 >> 0x20) - *(int *)(in_ECX + 0x4fc);
        bVar7 = -1 < (int)(uVar5 - uVar4);
      } while (uVar5 != uVar4 && bVar7);
    } while (bVar7);
  }
  return;
}
