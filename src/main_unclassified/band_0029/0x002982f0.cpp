/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA3BBBC1AE90CC2E3CBC4D8529137371F4B3255506CD735990BC0712730B5AE9
 * Entry: 0x002982f0, Ghidra index: 9360, label: FUN_002982f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_002982f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int local_34;
  undefined4 local_28 [2];
  double local_20;
  undefined4 local_c;
  
  if (((DAT_00469888[5] < 1) || (DAT_00469888[4] + 1 == 0)) ||
     (*(int *)(DAT_00469888[1] + -0x10 + (DAT_00469888[4] + 1) * 0x10) != -3)) {
    FUN_00295240();
  }
  FUN_00296d20();
  iVar4 = FUN_002ebf10();
  piVar7 = DAT_00469888;
  if (DAT_00469888[5] < 2) {
    iVar8 = 0;
  }
  else {
    iVar8 = DAT_00469888[4] + 2;
  }
  iVar5 = FUN_00289e20();
  if ((iVar5 != -4) && (iVar5 != -5)) {
    FUN_00295240();
    piVar7 = DAT_00469888;
  }
  if (iVar8 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)(piVar7[1] + -0x10 + iVar8 * 0x10);
  }
  local_c = puVar6[3];
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  FUN_0028a460();
  local_34 = 1;
  if (0 < iVar4) {
    local_28[0] = 0xffffffff;
    piVar7 = DAT_00469888;
    do {
      puVar6 = (undefined4 *)*piVar7;
      local_20 = (double)local_34;
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = local_c;
      iVar8 = *piVar7;
      *piVar7 = iVar8 + 0x10;
      *(undefined4 *)(iVar8 + 0x10) = 0xffffffff;
      *(double *)(*piVar7 + 8) = local_20;
      *piVar7 = *piVar7 + 0x10;
      iVar8 = FUN_00293c90(local_28);
      piVar7 = DAT_00469888;
      puVar6 = (undefined4 *)*DAT_00469888;
      *puVar6 = *(undefined4 *)(iVar8 + 0x10);
      puVar6[1] = *(undefined4 *)(iVar8 + 0x14);
      puVar6[2] = *(undefined4 *)(iVar8 + 0x18);
      puVar6[3] = *(undefined4 *)(iVar8 + 0x1c);
      *piVar7 = *piVar7 + 0x10;
      FUN_0028a8b0(2,1);
      piVar7 = DAT_00469888;
      if (*(int *)(*DAT_00469888 + -0x10) != -6) {
        return;
      }
      *DAT_00469888 = *DAT_00469888 + -0x10;
      local_34 = local_34 + 1;
    } while (local_34 <= iVar4);
  }
  return;
}
