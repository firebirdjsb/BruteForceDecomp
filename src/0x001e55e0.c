/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 225526A064DF97B68DE4617887F36016CC7CE8928BE5DC8E3449873703496484
 * Entry: 0x001e55e0, Ghidra index: 6799, label: FUN_001e55e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5b6c;
void FUN_001e55e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  undefined4 *local_c;
  int local_8;
  
  uVar1 = *(undefined4 *)(unaff_EDI + 0x2e4);
  puVar5 = (undefined4 *)(unaff_EDI + 0x80 + DAT_004a5b6c * 0xc);
  uVar2 = *(undefined4 *)(unaff_EDI + 0x230);
  iVar6 = DAT_004a5b6c + 1;
  *puVar5 = *(undefined4 *)(unaff_EDI + 0x2b0);
  puVar5[2] = uVar1;
  local_c = (undefined4 *)(unaff_EDI + 0x2b4);
  puVar5[1] = uVar2;
  local_8 = 1;
  puVar5 = (undefined4 *)(unaff_EDI + 0x80 + iVar6 * 0xc);
  do {
    iVar4 = FUN_00078df0();
    uVar1 = local_c[-0x21];
    uVar2 = *local_c;
    *puVar5 = *(undefined4 *)(unaff_EDI + 0x250 + iVar4 * 4);
    puVar5[2] = uVar2;
    puVar5[1] = uVar1;
    uVar2 = *(undefined4 *)(unaff_EDI + 0x2d4);
    iVar4 = FUN_00078d80();
    puVar5[3] = *(undefined4 *)(unaff_EDI + 0x250 + iVar4 * 4);
    puVar5[5] = uVar2;
    puVar5[4] = uVar1;
    uVar2 = *(undefined4 *)(unaff_EDI + 0x2a4);
    puVar5[8] = *(undefined4 *)(unaff_EDI + 0x2d8);
    puVar5[7] = uVar1;
    puVar5[6] = uVar2;
    iVar6 = iVar6 + 3;
    puVar5 = puVar5 + 9;
    local_8 = local_8 + 1;
    local_c = local_c + 1;
  } while (local_8 < 9);
  iVar4 = 0;
  puVar5 = (undefined4 *)(unaff_EDI + 0x80 + iVar6 * 0xc);
  do {
    uVar1 = *(undefined4 *)(unaff_EDI + 0x2d8);
    uVar2 = *(undefined4 *)(unaff_EDI + 0x21c + iVar4 * 4);
    *puVar5 = *(undefined4 *)(unaff_EDI + 0x250);
    puVar5[1] = uVar2;
    puVar5[2] = uVar1;
    *(undefined4 **)(unaff_EDI + 0x20c + iVar4 * 4) = puVar5;
    switch(iVar4) {
    case 0:
      iVar7 = 0x11;
      break;
    case 1:
      iVar7 = 0x12;
      break;
    case 2:
      iVar7 = 0x13;
      break;
    case 3:
      iVar7 = 0x14;
      break;
    default:
      iVar7 = 0x19;
    }
    uVar1 = *(undefined4 *)(unaff_EDI + 0x2d8);
    uVar3 = *(undefined4 *)(unaff_EDI + 0x250 + iVar7 * 4);
    puVar5[4] = uVar2;
    puVar5[3] = uVar3;
    puVar5[5] = uVar1;
    iVar6 = iVar6 + 2;
    puVar5 = puVar5 + 6;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  DAT_004a5b6c = iVar6;
  return;
}
