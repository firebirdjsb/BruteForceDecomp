/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AF804EF142109FF00D558BED59856A7EA201D9138AA4C369724918E242DC343
 * Entry: 0x002e3500, Ghidra index: 10403, label: FUN_002e3500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e3500(int param_1)

{
  if (param_1 == 0) {
    FUN_002e3490(2,0x11);
  }
  else {
    if (param_1 == 1) {
      FUN_002e3490(1,6);
      return;
    }
    if (param_1 == 2) {
      FUN_002e3490(2,0xfe);
      return;
    }
  }
  return;
}
