/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C26DD692DC2EB9A89F70ECC70F510778A24B0181636AF020F0D6CA2410E1A67
 * Entry: 0x0028ccd0, Ghidra index: 9186, label: FUN_0028ccd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0028ccd0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_EAX;
  uint uVar4;
  int iVar5;
  uint in_EDX;
  int unaff_ESI;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = in_EDX + 1;
  if (in_EDX < *(uint *)(unaff_ESI + 0x10)) {
    if (*(char *)(unaff_ESI + 0x5c) == '\0') {
      puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + iVar5 * 0xc);
      uVar6 = in_EAX[2];
      uVar7 = in_EAX[1];
      *puVar2 = *in_EAX;
      puVar2[1] = uVar7;
      puVar2[2] = uVar6;
      puVar2 = *(undefined4 **)(unaff_ESI + 0x18);
      *puVar2 = puVar2[3];
      puVar2[1] = puVar2[4];
      puVar2[2] = puVar2[5];
      uVar6 = *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 8 + *(int *)(unaff_ESI + 0x58) * 0xc);
      puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x58) * 0xc);
      uVar7 = puVar2[1];
      puVar2[3] = *puVar2;
      puVar2[4] = uVar7;
      puVar2[5] = uVar6;
    }
    else {
      if (iVar5 == *(int *)(unaff_ESI + 0x58)) {
        iVar5 = *(int *)(unaff_ESI + 0x54);
      }
      puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + iVar5 * 0xc);
      uVar6 = in_EAX[2];
      uVar7 = in_EAX[1];
      *puVar2 = *in_EAX;
      puVar2[2] = uVar6;
      puVar2[1] = uVar7;
      puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x54) * 0xc);
      puVar3 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x58) * 0xc);
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
    uVar4 = 0;
    if (*(int *)(unaff_ESI + 0x10) != 0) {
      do {
        iVar5 = uVar4 * 4;
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(float *)(*(int *)(unaff_ESI + 0x38) + iVar1) =
             *(float *)(*(int *)(unaff_ESI + 0x38) + iVar5) / *(float *)(unaff_ESI + 4);
      } while (uVar4 < *(uint *)(unaff_ESI + 0x10));
    }
    return 0;
  }
  return 0x80070057;
}
