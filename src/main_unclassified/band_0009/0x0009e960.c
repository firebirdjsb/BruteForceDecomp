/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3661A6385F24C43BB2259070C3B80A9B9DC69E89ED559FEB2A8B7AE963DF5DE
 * Entry: 0x0009e960, Ghidra index: 1879, label: FUN_0009e960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0009e960(int param_1,byte param_2)

{
  uint local_4;
  
  local_4 = (uint)param_2;
  FUN_0006a610(&local_4);
  if (param_2 != 0xff) {
    *(undefined1 *)(param_1 + 0xb44) = 1;
  }
  return;
}
