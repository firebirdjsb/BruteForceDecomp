/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDBC6FCD5DD1ABBD5CD75DAE0CC18B2317AE01E703B192B58A63D22625A51A80
 * Entry: 0x00383b8d, Ghidra index: 13630, label: FUN_00383b8d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412868;
extern uint32_t DAT_00412870;
void FUN_00383b8d(int param_1)

{
  if (*(int *)(param_1 + 4) < 0) {
    KeCancelTimer(&DAT_00412870);
    thunk_FUN_00382218(*(undefined4 *)(param_1 + 4),DAT_00412868);
  }
  return;
}
