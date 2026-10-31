/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 507D995669208F37358B9CFB37318C6FAFFF3F5ABBAB1257D2BA5FCD0108F9F4
 * Entry: 0x00335527, Ghidra index: 12429, label: FUN_00335527
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern void FUN_0033d39c(int param_1,undefined4 param_2);
void FUN_00335527(int param_1)

{
  int in_ECX;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_0033d39c(*(undefined4 *)(in_ECX + 0x15c4),*(undefined4 *)(in_ECX + 0x15c8));
    *(undefined4 *)(in_ECX + 0x15c4) = 0;
  }
  return;
}
