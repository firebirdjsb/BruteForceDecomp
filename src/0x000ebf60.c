/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53BE4F46226C2A253A9D9D986272A5BEE9720EF8CF876BA1BA2C65FACEA8F9D2
 * Entry: 0x000ebf60, Ghidra index: 2916, label: FUN_000ebf60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ebf60(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_00059a80();
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}
