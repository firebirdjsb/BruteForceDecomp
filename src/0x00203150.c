/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B753DB2262789FDD742D5915D98D97647BB8E02AB0CC42EDE894E40919A55F22
 * Entry: 0x00203150, Ghidra index: 7280, label: FUN_00203150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00203150(void)

{
  uint uVar1;
  float fVar2;
  undefined4 *puVar3;
  int *piVar4;
  int unaff_EBX;
  float10 fVar5;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  int local_4;
  
  uVar1 = *(uint *)(unaff_EBX + 0x54);
  if (uVar1 < 0xed5ad3ee) {
    if (uVar1 == 0xed5ad3ed) {
      FUN_00203060();
      return;
    }
    if ((uVar1 != 0x8050a2c) && (uVar1 == 0xed5604be)) {
      FUN_00023b80();
      FUN_00023bc0();
      puVar3 = local_18;
      while ((((local_20 != local_10 || (local_1c != local_c)) || (puVar3 != local_8)) ||
             (local_14 != local_4))) {
        if (local_20 == local_1c) {
          piVar4 = (int *)puVar3[3];
        }
        else {
          piVar4 = (int *)local_20[3];
        }
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x40))();
          fVar2 = *(float *)(unaff_EBX + 0x60);
          (**(code **)(*(int *)(unaff_EBX + 8) + 4))();
          fVar5 = (float10)FUN_00039460();
          puVar3 = local_18;
          if (fVar5 < (float10)fVar2 * (float10)fVar2) {
            FUN_00203060();
          }
        }
        if (local_20 == local_1c) {
          puVar3 = (undefined4 *)*puVar3;
          local_18 = puVar3;
        }
        else {
          local_20 = (undefined4 *)*local_20;
        }
      }
    }
  }
  else if (uVar1 == 0xf184445c) {
    FUN_001fb020();
    FUN_00203060();
  }
  return;
}
