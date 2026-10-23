/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44602AE0736A2D7A37D1CD378BA37B390F4DA1C1408ED48DF70EA7212B009030
 * Entry: 0x002ec3c9, Ghidra index: 10657, label: FUN_002ec3c9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c80;
void FUN_002ec3c9(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_003b6c80)[uVar1 * 2]) break;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x12);
  if (param_1 == (&DAT_003b6c80)[uVar1 * 2]) {
    XAPILIB__OutputDebugStringA(*(undefined4 *)(uVar1 * 8 + 0x3b6c84));
  }
  return;
}
