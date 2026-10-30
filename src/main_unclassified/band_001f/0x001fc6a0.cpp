/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A952150173960AD620D55F53640F01592348507344F7F8037E54D17043F4CF77
 * Entry: 0x001fc6a0, Ghidra index: 7163, label: FUN_001fc6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fc6a0(int param_1)

{
  int in_ECX;
  
  FUN_001ff4c0(param_1);
  if (*(int *)(in_ECX + 0x44) != *(int *)(param_1 + 0x44)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x44));
    *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
    return;
  }
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return;
}
