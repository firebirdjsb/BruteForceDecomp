/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 561DB017BD66A37C6062EB0937378DAEE37D6F3D101E5AA5455143C849BC775E
 * Entry: 0x000ec510, Ghidra index: 2928, label: FUN_000ec510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ec510(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_00059a80();
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(in_ECX + 0x40) != *(int *)(param_1 + 0x40)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x40));
    *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
    return;
  }
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  return;
}
