/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A3461E74407F900F251E3CD2D675A71924780B5569865611364786C78CC90C1
 * Entry: 0x0010f970, Ghidra index: 3540, label: FUN_0010f970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0010f970(void)

{
  int in_EAX;
  
  if (((*(byte *)(in_EAX + 0x71) & 0x10) != 0) && ((*(byte *)(in_EAX + 0x71) & 0x20) != 0)) {
    return 1;
  }
  return 0;
}
