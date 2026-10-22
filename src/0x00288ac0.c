/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B2475CC464D01CD4C7E509D6075801EE847208178F410A4C39259BAC56BC2AA
 * Entry: 0x00288ac0, Ghidra index: 9118, label: FUN_00288ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00288ac0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  char *unaff_EBX;
  undefined4 *puVar7;
  int local_4;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)*puVar2;
  }
  while ((puVar7 != puVar2 && (iVar3 = FUN_00234c90(), iVar3 < 1))) {
    puVar7 = (undefined4 *)*puVar7;
  }
  iVar3 = FUN_002ea01d(0x28);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x18) = 0xf;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined1 *)(iVar3 + 4) = 0;
    uVar4 = FUN_00061500(iVar3 + 0x1c);
    *(undefined4 *)(iVar3 + 0x20) = uVar4;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    if (unaff_EBX != (char *)0x0) {
      pcVar5 = unaff_EBX;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_0001fed0(unaff_EBX,(int)pcVar5 - (int)(unaff_EBX + 1));
    }
  }
  local_4 = iVar3;
  iVar6 = FUN_000ff730(param_1,puVar7,puVar7[1],&local_4);
  FUN_000b2a50();
  puVar7[1] = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  return iVar3;
}
