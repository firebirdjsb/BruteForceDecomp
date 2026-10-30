/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 805EFF6994C93F958B8090CB15745C4951879F23B9D81D4A52BC4942C2A617EF
 * Entry: 0x002e7940, Ghidra index: 10523, label: FUN_002e7940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003868c8;
void FUN_002e7940(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_LAB_003868c8;
  FUN_002e7880();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
