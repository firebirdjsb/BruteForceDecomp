/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE0692611322C60E64DBBB765AA6A3D4F4B36CE5B01E7788708C20DD3091D4D7
 * Entry: 0x00381887, Ghidra index: 13574, label: FUN_00381887
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038631c;
void FUN_00381887(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int local_8;
  int iVar3;
  
  piVar8 = *(int **)(param_1 + 0x28);
  piVar5 = (int *)(*(int *)(param_1 + 0x2c) + (int)piVar8);
  if (piVar8 < piVar5) {
    piVar6 = piVar8 + -0xe18c7;
    do {
      iVar3 = 0;
      if (*piVar8 == 0x46313539) {
LAB_003818bb:
        iVar2 = iVar3 + 1;
        if (iVar2 != 8) goto code_r0x003818c4;
        uVar4 = MmQueryAddressProtect(piVar8);
        uVar7 = 0xffffffff;
        if (-1 < param_2) {
          param_2 = -0x3fffffc2;
        }
        local_8 = 8;
        if (((byte)uVar4 & 6) == 2) {
          uVar7 = uVar4 & 0xfffffffd | 4;
          MmSetAddressProtect(piVar8,0x20,uVar7);
        }
        do {
          local_8 = local_8 + -1;
          piVar8[local_8] = 0x4c494146;
        } while (local_8 != 0);
        if (uVar7 != 0xffffffff) {
          MmSetAddressProtect(piVar8,0x20,uVar4);
        }
      }
LAB_0038192b:
      piVar8 = piVar8 + 0x400;
      piVar6 = piVar6 + 0x400;
    } while (piVar8 < piVar5);
  }
  FUN_0038156d(param_1,param_2);
  return;
code_r0x003818c4:
  iVar1 = iVar3 + 0xe18c8;
  iVar3 = iVar2;
  if (piVar6[iVar1] != (&DAT_0038631c)[iVar2]) goto LAB_0038192b;
  goto LAB_003818bb;
}
