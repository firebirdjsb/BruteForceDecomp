/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6C18FF81FAECBE7033D31E40A60FDD4A9DB84671EF80BCDE0B8D033D7CA85A6
 * Entry: 0x0029a0a0, Ghidra index: 9400, label: FUN_0029a0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_0029a0a0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_EBX;
  
  piVar1 = *(int **)(unaff_EBX + 8);
  iVar2 = *piVar1;
  FUN_00299600(0);
  **(undefined1 **)(iVar2 + 0x10) = (char)piVar1[4];
  uVar4 = FUN_00294b90(*(undefined4 *)(iVar2 + 0x10),piVar1[2]);
  *(undefined4 *)(iVar2 + 0x10) = uVar4;
  uVar4 = FUN_00294b90(*(undefined4 *)(iVar2 + 8),*(int *)(iVar2 + 0xc) << 4);
  *(undefined4 *)(iVar2 + 8) = uVar4;
  if (piVar1[7] != -1) {
    FUN_00299830(0,0xffffffff);
    uVar4 = FUN_00294b90(*(undefined4 *)(iVar2 + 0x1c),piVar1[7] << 3);
    *(undefined4 *)(iVar2 + 0x1c) = uVar4;
  }
  piVar3 = DAT_00469888;
  *(int *)(unaff_EBX + 8) = piVar1[1];
  *piVar3 = *piVar3 + -0x10;
  return;
}
