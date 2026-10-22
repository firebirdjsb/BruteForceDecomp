/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8F878719009C56358E24B075B443E13555488610E9CC2DE8CBC32435EA5A030
 * Entry: 0x001827b0, Ghidra index: 5181, label: FUN_001827b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f640;
extern uint32_t *DAT_00469940;
void FUN_001827b0(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_c;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x40) + iVar5 * 4);
      if (piVar1[0xe] != 0) {
        iVar2 = piVar1[0xb];
        switch(iVar2) {
        case 0:
          fVar6 = (float10)FUN_001814e0();
          local_c = (float)fVar6;
          break;
        case 1:
          fVar6 = (float10)FUN_001814e0();
          local_c = (float)fVar6;
          break;
        case 2:
          fVar6 = (float10)FUN_001814e0();
          local_c = (float)fVar6;
          break;
        case 3:
          fVar6 = (float10)FUN_001814e0();
          local_c = (float)fVar6;
          break;
        default:
          local_c = 0.0;
        }
        fVar3 = (float)piVar1[0xc];
        if ((*(byte *)(piVar1 + 7) & 0x20) == 0) {
          fVar6 = (float10)(**(code **)(*DAT_00469940 + 0x8c))(iVar2);
          fVar6 = fVar6 * (float10)fVar3;
        }
        else {
          fVar6 = (float10)fVar3;
        }
        fVar6 = fVar6 * (float10)local_c;
        if (0.0 <= (float)fVar6) {
          if (1.0 < (float)fVar6) {
            fVar6 = (float10)1.0;
          }
        }
        else {
          fVar6 = (float10)0.0;
        }
        (**(code **)(*piVar1 + 0x3c))
                  (*(undefined4 *)(&DAT_0041f640 + (int)(fVar6 * (float10)100.0) * 4));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}
