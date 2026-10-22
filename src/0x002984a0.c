/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD8044B189CAF330627919695B5F72960DAA9D6A13120DBF4068310D6D5196ED
 * Entry: 0x002984a0, Ghidra index: 9361, label: FUN_002984a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_002984a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int local_24;
  int local_20;
  
  if (DAT_00469888[5] < 1) {
    iVar9 = 0;
  }
  else {
    iVar9 = DAT_00469888[4] + 1;
    if ((iVar9 != 0) && (*(int *)(DAT_00469888[1] + -0x10 + iVar9 * 0x10) == -3)) goto LAB_002984e8;
  }
  FUN_00295240();
LAB_002984e8:
  piVar7 = DAT_00469888;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = DAT_00469888[1] + -0x10 + iVar9 * 0x10;
  }
  iVar9 = *(int *)(iVar9 + 8);
  if (DAT_00469888[5] < 2) {
    iVar10 = 0;
  }
  else {
    iVar10 = DAT_00469888[4] + 2;
  }
  iVar6 = FUN_00289e20();
  if ((iVar6 != -4) && (iVar6 != -5)) {
    FUN_00295240();
    piVar7 = DAT_00469888;
  }
  if (iVar10 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)(piVar7[1] + -0x10 + iVar10 * 0x10);
  }
  uVar1 = puVar8[2];
  uVar2 = *puVar8;
  uVar3 = puVar8[1];
  uVar4 = puVar8[3];
  FUN_0028a460();
  local_20 = 0;
  if (0 < *(int *)(iVar9 + 0xc)) {
    local_24 = 0;
    piVar7 = DAT_00469888;
    do {
      puVar8 = (undefined4 *)(*(int *)(iVar9 + 8) + local_24);
      if (puVar8[4] != -6) {
        puVar5 = (undefined4 *)*piVar7;
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        puVar5[2] = uVar1;
        puVar5[3] = uVar4;
        iVar10 = *piVar7;
        *piVar7 = iVar10 + 0x10;
        *(undefined4 *)(iVar10 + 0x10) = *puVar8;
        *(undefined4 *)(iVar10 + 0x14) = puVar8[1];
        *(undefined4 *)(iVar10 + 0x18) = puVar8[2];
        *(undefined4 *)(iVar10 + 0x1c) = puVar8[3];
        iVar10 = *piVar7;
        *piVar7 = iVar10 + 0x10;
        *(undefined4 *)(iVar10 + 0x10) = puVar8[4];
        *(undefined4 *)(iVar10 + 0x14) = puVar8[5];
        *(undefined4 *)(iVar10 + 0x18) = puVar8[6];
        *(undefined4 *)(iVar10 + 0x1c) = puVar8[7];
        *piVar7 = *piVar7 + 0x10;
        FUN_0028a8b0(2,1);
        piVar7 = DAT_00469888;
        if (*(int *)(*DAT_00469888 + -0x10) != -6) {
          return;
        }
        *DAT_00469888 = *DAT_00469888 + -0x10;
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + 0x20;
    } while (local_20 < *(int *)(iVar9 + 0xc));
  }
  return;
}
