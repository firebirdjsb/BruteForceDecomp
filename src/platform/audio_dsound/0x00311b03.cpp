/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A83B0C387114D8F1A7AB1E629BFDF90497E0B11E54EDDDA319A39949712D669
 * Entry: 0x00311b03, Ghidra index: 11914, label: FUN_00311b03
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fe68;
extern uint32_t PTR_FUN_00386988;
void FUN_00311b03(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = in_ECX + 4;
  in_ECX[1] = 2;
  *in_ECX = &PTR_FUN_00386988;
  DAT_0032fe68 = in_ECX;
  in_ECX[5] = puVar1;
  *puVar1 = puVar1;
  return;
}
