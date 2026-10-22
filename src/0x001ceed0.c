/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56836B3C907CB84D4DFD85E73BC1E2DCD47BAA2429D2ECA6C8B2B4903FDF62AC
 * Entry: 0x001ceed0, Ghidra index: 6083, label: FUN_001ceed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ceed0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EDX;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *in_EDX;
    param_1[1] = in_EDX[1];
    param_1[2] = in_EDX[2];
  }
  return;
}
