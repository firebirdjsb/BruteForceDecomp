/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A23C06CB769196C3C6DC3D3EA2C96A02BEBC33F574353C192CDB23B5A87D6169
 * Entry: 0x00045530, Ghidra index: 541, label: FUN_00045530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_000122d0(uint32_t param_1, uint32_t* in_EAX);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_LAB_003a4f50;
void FUN_00045530(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int local_5c;
  undefined **ppuStack_40;
  undefined **ppuStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  int iStack_1c;
  
  piVar5 = (int *)FUN_000120f0();
  if ((piVar5 != (int *)0x0) && (iVar1 = piVar5[0x167], iVar1 != 0)) {
    if (*(int *)(iVar1 + 4) != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = **(int **)(iVar1 + 8);
      }
      piVar9 = *(int **)(iVar6 + 4);
      if (piVar9 != (int *)0x0) {
        local_5c = 0;
        uVar8 = 1;
        do {
          if (piVar5 != piVar9) {
            iVar6 = (**(code **)(*piVar9 + 0x40))();
            iVar7 = (**(code **)(*piVar5 + 0x40))();
            fVar2 = *(float *)(iVar6 + 0x2c) - *(float *)(iVar7 + 0x2c);
            fVar3 = *(float *)(iVar6 + 0x28) - *(float *)(iVar7 + 0x28);
            fVar4 = *(float *)(iVar6 + 0x24) - *(float *)(iVar7 + 0x24);
            iVar6 = (**(code **)(piVar9[0x6d] + 8))();
            if (fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 <
                *(float *)(iVar6 + 0x44) * *(float *)(iVar6 + 0x44)) {
              FUN_000122d0(0x2c);
              FUN_00012000(uStack_38,&ppuStack_40);
              ppuStack_3c = &PTR_FUN_003a4f64;
              if (iStack_1c != 0) {
                FUN_0008f6e0();
              }
              if (iStack_30 != 0) {
                FUN_0008f6e0();
              }
              ppuStack_40 = &PTR_LAB_003a4f50;
            }
          }
          if (*(uint *)(iVar1 + 4) <= uVar8) {
            return;
          }
          local_5c = local_5c + 4;
          if (uVar8 < *(uint *)(iVar1 + 4)) {
            iVar6 = *(int *)(local_5c + *(int *)(iVar1 + 8));
          }
          else {
            iVar6 = 0;
          }
          piVar9 = *(int **)(iVar6 + 4);
          uVar8 = uVar8 + 1;
        } while (piVar9 != (int *)0x0);
      }
    }
  }
  return;
}
