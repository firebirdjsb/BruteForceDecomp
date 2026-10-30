/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A5406B9D8343422F2DD35B70B798F857E88297A63895BF24868288AD44C8C9B
 * Entry: 0x00316656, Ghidra index: 12142, label: FUN_00316656
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00316656(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xc) = 0x8000000a;
  }
  return;
}
