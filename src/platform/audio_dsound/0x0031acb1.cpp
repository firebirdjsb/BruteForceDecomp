/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA8482391521EB9D331F447F461828B9D1A1CCF340AFAB49B3DD1EAC2B72B996
 * Entry: 0x0031acb1, Ghidra index: 12277, label: FUN_0031acb1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fdec;
extern uint32_t PTR_FUN_00386ad8;
void FUN_0031acb1(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = in_ECX + 2;
  in_ECX[1] = 1;
  *in_ECX = &PTR_FUN_00386ad8;
  DAT_0032fdec = in_ECX;
  in_ECX[3] = puVar1;
  *puVar1 = puVar1;
  puVar1 = in_ECX + 4;
  in_ECX[5] = puVar1;
  *puVar1 = puVar1;
  return;
}
