/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0E9E828568084919E49DBC1376DAC5850B8ED19D7AC45C96DB98A4E5C8C50D1
 * Entry: 0x00178730, Ghidra index: 4970, label: FUN_00178730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469944;
bool FUN_00178730(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int unaff_ESI;
  undefined4 uVar6;
  
  if (*(int *)(unaff_ESI + 0x14) != 0) {
    (**(code **)(*DAT_00469944 + 0x14))(*(int *)(unaff_ESI + 0x14));
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
  }
  uVar2 = *(int *)(unaff_ESI + 0x10) + 1;
  *(uint *)(unaff_ESI + 0x10) = uVar2;
  if (((((int)uVar2 < 0) || (*(int *)(unaff_ESI + 4) == 0)) ||
      ((uint)((*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x1c) <= uVar2)) &&
     ((*(byte *)(unaff_ESI + 0x1c) & 2) == 0)) {
    if (*(int *)(unaff_ESI + 0x14) != 0) {
      (**(code **)(*DAT_00469944 + 0x14))(*(int *)(unaff_ESI + 0x14));
      *(undefined4 *)(unaff_ESI + 0x14) = 0;
    }
    *(undefined4 *)(unaff_ESI + 0x10) = 0xffffffff;
    return *(int *)(unaff_ESI + 0x14) != 0;
  }
  uVar6 = 0;
  bVar5 = *(byte *)(unaff_ESI + 0x1c) >> 1 & 1;
  if (((bVar5 != 0) && (*(int *)(unaff_ESI + 4) != 0)) &&
     ((*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x1c == 1)) {
    uVar6 = 0xffffffff;
  }
  if (bVar5 != 0) {
    cVar1 = FUN_00178600();
    if (cVar1 == '\0') {
      *(undefined4 *)(unaff_ESI + 0x10) = 0;
    }
  }
  iVar3 = *(int *)(unaff_ESI + 0x10) * 0x1c;
  iVar4 = iVar3 + *(int *)(unaff_ESI + 4);
  if (*(uint *)(iVar3 + 0x18 + *(int *)(unaff_ESI + 4)) < 0x10) {
    iVar4 = iVar4 + 4;
  }
  else {
    iVar4 = *(int *)(iVar4 + 4);
  }
  iVar4 = (**(code **)(*DAT_00469944 + 8))(iVar4,uVar6,0);
  *(int *)(unaff_ESI + 0x14) = iVar4;
  if ((iVar4 != 0) && (*(undefined4 **)(unaff_ESI + 0x18) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(unaff_ESI + 0x18))(*(undefined4 *)(unaff_ESI + 0x10));
  }
  return *(int *)(unaff_ESI + 0x14) != 0;
}
