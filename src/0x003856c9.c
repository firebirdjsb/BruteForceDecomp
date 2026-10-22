/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8084BB3AE5A45521252392E625F6959C3D8C7E7A288F2204687AB2109C8AD955
 * Entry: 0x003856c9, Ghidra index: 13673, label: FUN_003856c9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004a8fe8;
void FUN_003856c9(void)

{
  if (DAT_004a8fe8 != (undefined4 *)0x0) {
    DAT_004a8fe8 = (undefined4 *)*DAT_004a8fe8;
  }
  return;
}
