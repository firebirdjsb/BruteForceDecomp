/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2442A8630AA197E4E24404B289A40B27CA08823EC1F345F72FBBA8D4615B2EF4
 * Entry: 0x00292c90, Ghidra index: 9261, label: FUN_00292c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_00292c90(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  
  piVar7 = DAT_00469888;
  uVar8 = param_1[4];
  if (uVar8 == 0xfffffff9) {
    uVar8 = *(uint *)(param_1[6] + 0x10);
  }
  else if (uVar8 == 0xfffffffd) {
    uVar8 = *(uint *)(param_1[6] + 0x14);
  }
  else if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1[6] + 0x10) & (-1 < (int)*(uint *)(param_1[6] + 0x10)) - 1;
  }
  iVar9 = DAT_00469888[0x19] + uVar8 * -0x120;
  if (*(int *)(iVar9 + 0x40) == -6) {
    iVar9 = *DAT_00469888;
    *DAT_00469888 = iVar9 + -0x10;
    param_1[4] = *(int *)(iVar9 + -0x10);
    param_1[5] = *(int *)(iVar9 + -0xc);
    param_1[6] = *(int *)(iVar9 + -8);
    param_1[7] = *(int *)(iVar9 + -4);
    if ((int *)*param_1 == param_1) {
      *param_1 = piVar7[0x16];
      piVar7[0x16] = (int)param_1;
      return;
    }
  }
  else {
    iVar1 = *DAT_00469888;
    uVar2 = *(undefined4 *)(iVar1 + -0x10);
    uVar3 = *(undefined4 *)(iVar1 + -0xc);
    uVar4 = *(undefined4 *)(iVar1 + -8);
    uVar5 = *(undefined4 *)(iVar1 + -4);
    *(undefined4 *)(iVar1 + -0x10) = 0xfffffffe;
    *(int **)(*piVar7 + -8) = param_1;
    piVar6 = (int *)*piVar7;
    *piVar6 = param_1[4];
    piVar6[1] = param_1[5];
    piVar6[2] = param_1[6];
    piVar6[3] = param_1[7];
    iVar1 = *piVar7;
    *piVar7 = iVar1 + 0x10;
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
    *(undefined4 *)(iVar1 + 0x14) = uVar3;
    *(undefined4 *)(iVar1 + 0x18) = uVar4;
    *(undefined4 *)(iVar1 + 0x1c) = uVar5;
    *piVar7 = *piVar7 + 0x10;
    FUN_0028a540(3);
    iVar1 = *DAT_00469888;
    *(undefined4 *)(iVar1 + -0x40) = *(undefined4 *)(iVar9 + 0x40);
    *(undefined4 *)(iVar1 + -0x3c) = *(undefined4 *)(iVar9 + 0x44);
    *(undefined4 *)(iVar1 + -0x38) = *(undefined4 *)(iVar9 + 0x48);
    *(undefined4 *)(iVar1 + -0x34) = *(undefined4 *)(iVar9 + 0x4c);
    FUN_0028a8b0(3,0);
  }
  return;
}
