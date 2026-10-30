/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0EEAEC9DF853F0F9C3E7B6323F4EE12662EC87C26CA34C3F674CE89E917756CA
 * Entry: 0x001466e0, Ghidra index: 4220, label: FUN_001466e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039bd60;
extern uint32_t PTR_LAB_0039bec0;
void FUN_001466e0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *unaff_ESI;
  undefined4 local_10;
  undefined4 local_c;
  
  *unaff_ESI = PTR_LAB_0039bec0;
  local_10 = param_1;
  local_c = 0;
  piVar1 = (int *)FUN_00279c40(&local_10);
  *(undefined4 **)(*piVar1 + 0x10) = unaff_ESI;
  unaff_ESI[1] = param_1;
  *unaff_ESI = &PTR_LAB_0039bd60;
  return;
}
