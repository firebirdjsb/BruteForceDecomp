/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9C7753AB5E31085971704036627A97771780446EEE8DCC19028D38C553D3C2E
 * Entry: 0x0005c930, Ghidra index: 956, label: FUN_0005c930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0005c930(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_28;
  float fStack_24;
  float fStack_14;
  float fStack_10;
  
  if ((*(float *)(param_1 + 0x18) <= 60.0) &&
     (piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))(), *piVar2 == 0x17506391))
  {
    fStack_28 = 2.0;
    fStack_24 = 0.0;
    fStack_3c = 2.0;
    fStack_38 = 0.0;
    fStack_14 = 2.0;
    fStack_10 = 0.0;
    iStack_40 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(param_1 + 8);
      }
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 != 0) {
        iVar4 = 0;
        uVar5 = 1;
        do {
          if ((*(byte *)(iVar3 + 0x70) & 1) == 0) {
            fVar1 = *(float *)(iVar3 + 0x54) / *(float *)(iVar3 + 0x50);
            if (fVar1 < fStack_28) {
              fStack_28 = fVar1;
            }
            if (fStack_24 <= fVar1) {
              fStack_24 = fVar1;
            }
            fVar6 = (float10)FUN_001265c0(iVar3);
            if ((*(byte *)(iVar3 + 0x70) & 1) == 0) {
              if (fVar6 < (float10)fStack_3c) {
                fStack_3c = (float)fVar6;
              }
              if ((float10)fStack_38 <= fVar6) {
                fStack_38 = (float)fVar6;
              }
            }
            fVar6 = (float10)FUN_001264a0(iVar3);
            if ((*(byte *)(iVar3 + 0x70) & 1) == 0) {
              if (fVar6 < (float10)fStack_14) {
                fStack_14 = (float)fVar6;
              }
              if ((float10)fStack_10 <= fVar6) {
                fStack_10 = (float)fVar6;
              }
            }
            iStack_40 = iStack_40 + 1;
          }
          if (*(uint *)(param_1 + 4) <= uVar5) break;
          iVar4 = iVar4 + 4;
          if (uVar5 < *(uint *)(param_1 + 4)) {
            iVar3 = *(int *)(iVar4 + *(int *)(param_1 + 8));
          }
          else {
            iVar3 = 0;
          }
          iVar3 = *(int *)(iVar3 + 4);
          uVar5 = uVar5 + 1;
        } while (iVar3 != 0);
        if (1 < iStack_40) {
          FUN_0005c5a0();
          iVar3 = FUN_0005c5a0();
          if (iVar3 != 0) {
            FUN_00140a60(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0xc) + 8) + 0xbe8),
                         *(int *)(iVar3 + 0xc),**(undefined4 **)(iVar3 + 0x10),0);
            *(undefined4 *)(param_1 + 0x18) = 0x43160000;
          }
        }
      }
    }
  }
  return;
}
