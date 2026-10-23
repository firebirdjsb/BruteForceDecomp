/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A0902BE9DDE52AAD5C2441AD241FC1339613C24CDEE0E97E607F567BB4324CE
 * Entry: 0x0033d9e8, Ghidra index: 12593, label: FUN_0033d9e8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033d9e8(int param_1)

{
  int in_ECX;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0x14) == 499)) {
    FUN_0033d66a(param_1,in_ECX + 0x24,*(undefined4 *)(in_ECX + 0x18));
    *(undefined4 *)(in_ECX + 0x14) = 3;
  }
  else {
    FUN_0033ce8e(param_1,*(undefined4 *)(in_ECX + 0x18));
    *(undefined4 *)(in_ECX + 0x14) = 2;
  }
  return;
}
