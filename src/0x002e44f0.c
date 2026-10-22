/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21C7085E79D83711F250932A0D5A22D33DE176426C2576331D971393C1450DF1
 * Entry: 0x002e44f0, Ghidra index: 10444, label: FUN_002e44f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e44f0(int param_1)

{
  int in_ECX;
  
  if (param_1 != *(int *)(in_ECX + 0x260)) {
    *(int *)(in_ECX + 0x260) = param_1;
    *(undefined1 *)(in_ECX + 0x248) = 1;
    return 1;
  }
  return 0;
}
