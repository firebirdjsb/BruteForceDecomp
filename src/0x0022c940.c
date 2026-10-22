/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56A65EF41E85F46FE339B30314F6A3C0E6A70132B26EC15C3BD2DB7E7C029DB6
 * Entry: 0x0022c940, Ghidra index: 7696, label: FUN_0022c940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
float10 FUN_0022c940(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_EAX;
  int in_ECX;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  float local_4;
  
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  fVar4 = ((float10)(float)(DAT_0046cfd8 >> 9 | 0x3f800000) - (float10)1.0) *
          ((float10)*(float *)(in_ECX + 0x1f0) - (float10)*(float *)(in_ECX + 500)) +
          (float10)*(float *)(in_ECX + 500);
  if ((in_EAX != 0) && (*(int *)(*(int *)(in_EAX + 0xc) + 4) == 3)) {
    fVar5 = (float10)(**(code **)(**(int **)(in_EAX + 0x5a4) + 0xec))();
    puVar1 = *(undefined4 **)(in_EAX + 0x55c);
    local_4 = (float)((float10)*(float *)(in_EAX + 0x754) * fVar5 * (float10)(float)fVar4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)*puVar1;
    }
    if (puVar3 != puVar1) {
      do {
        fVar4 = (float10)(**(code **)(*(int *)puVar3[2] + 0x10))(local_4);
        local_4 = (float)fVar4;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != *(undefined4 **)(in_EAX + 0x55c));
    }
    if ((*(int *)(in_EAX + 0x59c) != 0) &&
       (piVar2 = *(int **)(*(int *)(in_EAX + 0x59c) + 0x1c), piVar2 != (int *)0x0)) {
      fVar4 = (float10)(**(code **)(*piVar2 + 0x10))(local_4);
      return fVar4;
    }
    fVar4 = (float10)local_4;
  }
  return fVar4;
}
