/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81012C6189500FFB867D87D29CF1D109327F8CF4347C7C7479922BA93F824B48
 * Entry: 0x00038b70, Ghidra index: 382, label: FUN_00038b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 * FUN_00038b70(int param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar2 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)puVar2[1] + 0xa9) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      puVar5 = (uint *)(puVar2[4] + 4);
      if (puVar2[4] == 0) {
        puVar5 = &DAT_0046d064;
      }
      puVar4 = (uint *)(*(int *)(param_1 + 4) + 4);
      if (*(int *)(param_1 + 4) == 0) {
        puVar4 = &DAT_0046d064;
      }
      if (*puVar5 < *puVar4) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0xa9) == '\0');
  }
  return puVar2;
}
