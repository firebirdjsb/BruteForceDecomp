/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE82BC5AA16BA70EA43C8FDA00108696B60334E6FE25E77A8115F31571D635EA
 * Entry: 0x0003ef40, Ghidra index: 467, label: FUN_0003ef40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 * FUN_0003ef40(int param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)puVar1[1] + 0xa9) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      puVar5 = (uint *)(*(int *)(param_1 + 4) + 4);
      if (*(int *)(param_1 + 4) == 0) {
        puVar5 = &DAT_0046d064;
      }
      if (puVar2[4] == 0) {
        puVar4 = &DAT_0046d064;
      }
      else {
        puVar4 = (uint *)(puVar2[4] + 4);
      }
      if (*puVar5 < *puVar4) {
        puVar3 = (undefined4 *)*puVar2;
        puVar1 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xa9) == '\0');
  }
  return puVar1;
}
