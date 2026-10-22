/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03E1B467F3DD1B78429D46D5DD132A8AEC8CE514DF413FC72B96A4A73965EEE2
 * Entry: 0x001575d0, Ghidra index: 4485, label: FUN_001575d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001575d0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*(int *)(param_1 + 200) != 0) &&
     (*(int *)(param_1 + 0xcc) - *(int *)(param_1 + 200) >> 2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x6c);
    fVar2 = *(float *)(iVar1 + 0x40);
    fVar3 = *(float *)(iVar1 + 0x3c);
    fVar4 = *(float *)(iVar1 + 0x38);
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_58 = 0x3f800000;
    local_68 = 0x3f800000;
    local_78 = 0x3f800000;
    iVar1 = *(int *)(param_1 + 0x6c);
    local_c0 = 0.0;
    local_bc = *(float *)(iVar1 + 0x1c) * -0.5;
    local_b8 = *(float *)(iVar1 + 0x28) * -0.5;
    fStack_b4 = *(float *)(iVar1 + 0x34) * -0.5;
    piVar8 = *(int **)(param_1 + 200);
    if (piVar8 != *(int **)(param_1 + 0xcc)) {
      do {
        if (*piVar8 != DAT_0046d064) {
          uVar5 = *(undefined4 *)(param_1 + 8);
          piVar6 = (int *)FUN_00160da0(0xffffffff,1);
          if ((piVar6 != (int *)0x0) &&
             (piVar6 = (int *)(**(code **)(*piVar6 + 8))(uVar5), piVar6 != (int *)0x0)) {
            FUN_000da880(uVar5,piVar6,1);
            FUN_000da8f0(uVar5);
            if (piVar6 != (int *)0x0) {
              fStack_4c = fStack_b4 + fVar2;
              fStack_50 = local_b8 + fVar3 + 0.5;
              fStack_54 = local_bc + fVar4;
              (**(code **)(*piVar6 + 0x48))(&fStack_54);
              local_c0 = local_c0 + 0.8;
              FUN_00039380(&local_78,local_c0);
              puVar7 = (undefined4 *)FUN_002334b0();
              uStack_48 = *puVar7;
              uStack_44 = puVar7[1];
              uStack_3c = puVar7[3];
              uStack_38 = puVar7[4];
              uStack_30 = puVar7[6];
              uStack_2c = puVar7[7];
              local_bc = (float)puVar7[2] * -0.5;
              local_b8 = (float)puVar7[5] * -0.5;
              fStack_b4 = (float)puVar7[8] * -0.5;
            }
          }
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != *(int **)(param_1 + 0xcc));
    }
    if (*(int *)(param_1 + 200) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(param_1 + 200));
    }
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  return;
}
