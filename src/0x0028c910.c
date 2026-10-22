/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B6253348B9672E48C67D0D5680A01D1385D541F86C3FA65FB5A3BA6A228D43E
 * Entry: 0x0028c910, Ghidra index: 9184, label: FUN_0028c910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028c910(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char in_AL;
  int iVar4;
  uint uVar5;
  int unaff_ESI;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(char *)(unaff_ESI + 0x5c) = in_AL;
  if (in_AL == '\0') {
    puVar3 = *(undefined4 **)(unaff_ESI + 0x18);
    puVar2 = puVar3 + *(int *)(unaff_ESI + 0x54) * 3;
    *(int *)(unaff_ESI + 0x58) = *(int *)(unaff_ESI + 0x10) + -3;
    uVar6 = puVar2[2];
    uVar7 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar6;
    uVar6 = *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 8 + *(int *)(unaff_ESI + 0x58) * 0xc);
    puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x58) * 0xc);
    uVar7 = puVar2[1];
    puVar2[3] = *puVar2;
    puVar2[4] = uVar7;
    puVar2[5] = uVar6;
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x54) * 0xc);
    iVar4 = *(int *)(unaff_ESI + 0x10) + -2;
    *(int *)(unaff_ESI + 0x58) = iVar4;
    puVar3 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + iVar4 * 0xc);
    uVar6 = puVar2[2];
    uVar7 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[2] = uVar6;
    puVar3[1] = uVar7;
    puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + (*(int *)(unaff_ESI + 0x54) + 1) * 0xc);
    puVar3 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + (*(int *)(unaff_ESI + 0x58) + 1) * 0xc);
    uVar6 = puVar2[2];
    uVar7 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[2] = uVar6;
    puVar3[1] = uVar7;
    puVar3 = *(undefined4 **)(unaff_ESI + 0x18);
    puVar2 = puVar3 + *(int *)(unaff_ESI + 0x58) * 3 + -3;
    uVar6 = puVar2[2];
    uVar7 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar6;
  }
  FUN_0028ca40(uVar6,uVar7);
  uVar5 = 0;
  if (*(int *)(unaff_ESI + 0x10) != 0) {
    do {
      iVar4 = uVar5 * 4;
      iVar1 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(float *)(*(int *)(unaff_ESI + 0x38) + iVar1) =
           *(float *)(*(int *)(unaff_ESI + 0x38) + iVar4) / *(float *)(unaff_ESI + 4);
    } while (uVar5 < *(uint *)(unaff_ESI + 0x10));
  }
  return;
}
