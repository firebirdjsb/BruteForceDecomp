/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8173FDE53D6AE167F38D6C774DD4184BE51E7B748914E3C3064AB5EE4773050C
 * Entry: 0x00206a20, Ghidra index: 7303, label: FUN_00206a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00206a20(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int extraout_EDX;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00206880(param_1);
  if (fVar4 != (float10)*(float *)(param_1 + 0xa0)) {
    if (fVar4 <= (float10)*(float *)(param_1 + 0xa0)) {
      *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xa0) - param_2 * 4.0;
      fVar1 = *(float *)(param_1 + 0xa0);
      if (*(float *)(param_1 + 0xa0) <= (float)fVar4) {
        fVar1 = (float)fVar4;
      }
    }
    else {
      *(float *)(param_1 + 0xa0) = param_2 * 4.0 + *(float *)(param_1 + 0xa0);
      fVar1 = *(float *)(param_1 + 0xa0);
      if ((float)fVar4 <= *(float *)(param_1 + 0xa0)) {
        fVar1 = (float)fVar4;
      }
    }
    *(float *)(param_1 + 0xa0) = fVar1;
    if (*(float *)(param_1 + 0xa0) <= 0.0) {
      FUN_002063c0(param_1,0);
      return;
    }
    if (((*(byte *)(param_1 + 0x8d) & 4) == 0) ||
       (cVar2 = FUN_00206660(), iVar3 = extraout_EDX, cVar2 != '\0')) {
      FUN_002062a0(0);
      FUN_002060c0(*(undefined4 *)(param_1 + 0xa0));
      iVar3 = param_1;
    }
    if (*(int *)(iVar3 + 0x44) != 0) {
      (**(code **)(*DAT_00469940 + 0x34))(*(int *)(iVar3 + 0x44),*(undefined4 *)(iVar3 + 0xa0));
      return;
    }
  }
  return;
}
