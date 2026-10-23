/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F34120D5026E853CB366FE88D94F4FC090ECDD1AC8C7EDA1EBC57D37ECECF9AD
 * Entry: 0x0027d090, Ghidra index: 8998, label: FUN_0027d090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027d090(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int in_EDX;
  uint uVar6;
  int unaff_EBX;
  uint uVar7;
  int unaff_EDI;
  ushort auStack_20 [16];
  
  uVar4 = 0;
  iVar2 = 1;
  do {
    uVar4 = (*(short *)(in_EDX + -2 + iVar2 * 2) + uVar4) * 2;
    auStack_20[iVar2] = uVar4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  if (-1 < unaff_EBX) {
    do {
      uVar6 = (uint)*(ushort *)(unaff_EDI + 2 + iVar2 * 4);
      if (uVar6 != 0) {
        uVar5 = (uint)auStack_20[uVar6];
        auStack_20[uVar6] = auStack_20[uVar6] + 1;
        uVar1 = 0;
        do {
          uVar3 = uVar1;
          uVar7 = uVar5 & 1;
          uVar5 = uVar5 >> 1;
          uVar6 = uVar6 - 1;
          uVar1 = (uVar3 | uVar7) << 1;
        } while (0 < (int)uVar6);
        *(ushort *)(unaff_EDI + iVar2 * 4) = (ushort)uVar3 | (ushort)uVar7;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= unaff_EBX);
  }
  return;
}
