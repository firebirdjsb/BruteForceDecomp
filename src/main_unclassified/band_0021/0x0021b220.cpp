/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC8BCF482D7A6A8EF05D28809998B2ACA7DF854688D3BD9A746CD0B226E14AF6
 * Entry: 0x0021b220, Ghidra index: 7517, label: FUN_0021b220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021b220(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  char cVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  int local_28;
  
  fVar5 = 0.0;
  iVar1 = *(int *)(param_1 + 0xc);
  pfVar8 = *(float **)(iVar1 + 0x104);
  for (pfVar7 = *(float **)(iVar1 + 0xf4); pfVar7 != *(float **)(iVar1 + 0xf8); pfVar7 = pfVar7 + 8)
  {
    if (((*pfVar7 < *(float *)(param_1 + 0xa8)) &&
        (*(float *)(param_1 + 0xa8) <= pfVar7[1] + *pfVar7)) && (fVar5 <= pfVar7[2])) {
      fVar5 = pfVar7[2];
    }
  }
  for (; pfVar8 != *(float **)(iVar1 + 0x108); pfVar8 = pfVar8 + 6) {
    if (((*pfVar8 < *(float *)(param_1 + 0xa8)) &&
        (*(float *)(param_1 + 0xa8) <= pfVar8[1] + *pfVar8)) && (fVar5 <= pfVar8[2])) {
      fVar5 = pfVar8[2];
    }
  }
  if (0.0 < fVar5) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x204);
    iVar2 = *(int *)(iVar1 + 0x3c);
    *(int *)(iVar1 + 0x3c) = iVar2 + 1;
    FUN_000d1420(fVar5);
    if (local_28 != 0) {
      do {
        for (puVar3 = *(undefined4 **)(local_28 + 0x1c); puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)*puVar3) {
          uVar9 = *(uint *)((uint)*(ushort *)(puVar3 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
          if (((uVar9 != 0) &&
              (iVar4 = *(int *)(uVar9 + 0x18), *(int *)(uVar9 + 0x18) = iVar2, iVar4 != iVar2)) &&
             (uVar9 = -(uint)((*(byte *)(uVar9 + 0x26) & 0x40) != 0) & uVar9, uVar9 != 0)) {
            FUN_0021b410(param_1,uVar9,param_2);
            FUN_0021b620(param_1,uVar9,param_2);
          }
        }
        do {
          cVar6 = FUN_000d14d0();
          if (cVar6 == '\0') {
            local_28 = 0;
            break;
          }
        } while (local_28 == 0);
        if (local_28 == 0) {
          return;
        }
      } while( true );
    }
  }
  return;
}
