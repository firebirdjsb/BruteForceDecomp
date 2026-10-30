/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39FC36CDD02E6B30AA0E0C640687E7E576DCE10A310FFAF8BA655CBA177543EA
 * Entry: 0x0026b210, Ghidra index: 8759, label: FUN_0026b210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0044363c;
extern uint32_t DAT_00469888;
undefined4 FUN_0026b210(undefined4 param_1)

{
  int in_EAX;
  undefined4 uVar1;
  
  if ((in_EAX != 0) && (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + in_EAX * 0x10) == -3)) {
    FUN_00289d80();
    FUN_00289bc0(param_1);
    FUN_00289520(2);
    FUN_00292910();
    uVar1 = FUN_00289600();
    return uVar1;
  }
  return DAT_0044363c;
}
