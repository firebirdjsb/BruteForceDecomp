/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAEA5B94789834F61ED1B98F58A313A56BF28F3E27E4D768B0F06D0CDE5D7670
 * Entry: 0x00124380, Ghidra index: 3683, label: FUN_00124380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00124380(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  float10 fVar3;
  float fVar4;
  undefined4 local_4;
  
  cVar2 = FUN_00112790();
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 0x78c) != 0) {
      (**(code **)(*DAT_00469940 + 0x20))(*(int *)(param_1 + 0x78c),1);
      *(undefined4 *)(local_4 + 0x78c) = 0;
      return;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x7a8) == 0) || (*(float *)(param_1 + 0x7c8) != 0.0)) {
      fVar1 = *(float *)(param_1 + 0x7a4) - (param_2 + param_2);
    }
    else {
      fVar1 = param_2 + param_2 + *(float *)(param_1 + 0x7a4);
    }
    *(float *)(param_1 + 0x7a4) = fVar1;
    fVar3 = (float10)FUN_00124740(param_1);
    fVar1 = (float)(fVar3 * (float10)0.5 + (float10)0.5);
    fVar4 = *(float *)(param_1 + 0x7a4);
    if (*(float *)(param_1 + 0x7a4) <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar1 <= fVar4) {
      fVar4 = fVar1;
    }
    *(float *)(param_1 + 0x7a4) = fVar4;
    if (*(float *)(param_1 + 0x7a4) == 0.0) {
      if (*(int *)(param_1 + 0x78c) != 0) {
        (**(code **)(*DAT_00469940 + 0x20))(*(int *)(param_1 + 0x78c),1);
        *(undefined4 *)((int)fVar4 + 0x78c) = 0;
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x78c) != 0) {
        (**(code **)(*DAT_00469940 + 0x34))
                  (*(int *)(param_1 + 0x78c),*(undefined4 *)(param_1 + 0x7a4));
        return;
      }
      FUN_001242e0();
    }
  }
  return;
}
