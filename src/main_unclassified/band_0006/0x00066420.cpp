/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA8F15908599C26F3DCD055000E25D5A67701DF8482F6E3E21E5EC6FA64D281F
 * Entry: 0x00066420, Ghidra index: 1119, label: FUN_00066420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_002a5bd0(int param_1);

void FUN_00066420(int param_1)

{
  int in_ECX;
  
  FUN_002a5bd0(param_1);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  return;
}
