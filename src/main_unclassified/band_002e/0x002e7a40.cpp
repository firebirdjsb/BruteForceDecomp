/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B893EFCAF495A7075FFBCFA8809339A7DBF5EA550565B9CB411D4B325804443D
 * Entry: 0x002e7a40, Ghidra index: 10524, label: FUN_002e7a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e7a40(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + param_1 * 4);
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x24) + param_1 * 4) = 0;
    (**(code **)(**(int **)(in_ECX + 0x44) + 8))(iVar1);
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + -1;
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x24) + param_1 * 4) = 0;
  return 0;
}
