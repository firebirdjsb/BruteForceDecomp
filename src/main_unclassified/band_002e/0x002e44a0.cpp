/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA91D8E0999D6B254F5E0D30774BC1F85AB156CAF7686E552136E43E4CDD431F
 * Entry: 0x002e44a0, Ghidra index: 10440, label: FUN_002e44a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e44a0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x260) != -1) && (*(int *)(in_ECX + 0x264) != -1)) {
    return 1;
  }
  return 0;
}
