/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7AB01FBEC36B10608BD628C1E5D7D4851BE2A71EBD5DEE1BB63804E4C7EAD7B
 * Entry: 0x00319dcf, Ghidra index: 12251, label: FUN_00319dcf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f73c;
void FUN_00319dcf(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  in_ECX[5] = param_1;
  in_ECX[6] = param_2;
  puVar2 = &DAT_0032f73c;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *puVar2;
    puVar2 = puVar2 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}
