/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5464D722E8A4EC3052E1AED3E2A711A799E78E586C08B51DC215306B1304823E
 * Entry: 0x002e9500, Ghidra index: 10553, label: FUN_002e9500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing callee draft signature only; original Xbox ABI_UNVERIFIED. */
extern void FUN_002e9b30(void);
undefined4 FUN_002e9500(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) - *(int *)(in_ECX + 8);
  *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + *(int *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 8) = 0;
  FUN_002e9b30();
  return 0;
}
