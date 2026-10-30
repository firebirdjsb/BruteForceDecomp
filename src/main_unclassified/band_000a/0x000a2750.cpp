/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4B35328E0E2417E9954AB5FC2F7AB9282E48FFB9519AD7F396ED9B46EB08B0E
 * Entry: 0x000a2750, Ghidra index: 1925, label: FUN_000a2750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original 0x002EA018 free tail-jump forwards a guest32 stack
 * word; complete per-caller x86 ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_000a2750(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_000a2750(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
