/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F935695FE5CFC82BD9D1E4967DC6640A661EF7EC66E13C138561C8422816C95
 * Entry: 0x0036c5c0, Ghidra index: 13276, label: FUN_0036c5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b820;
void FUN_0036c5c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_0037b820;
  puVar2 = DAT_0037b820;
  while (puVar2 != (undefined4 *)0x0) {
    if (puVar2[1] == param_1) {
      *puVar1 = *puVar2;
      if ((*(byte *)(puVar2 + 7) & 1) != 0) {
        (**(code **)(*(int *)puVar2[8] + 8))((int *)puVar2[8]);
      }
      XAPILIB__LocalFree(puVar2);
      puVar2 = (undefined4 *)*puVar1;
    }
    else {
      puVar1 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  return;
}
