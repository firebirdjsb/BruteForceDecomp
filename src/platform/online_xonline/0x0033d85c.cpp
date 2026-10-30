/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC8E59A6BF942EC02ADCBF7EC3B270C7F8BEC51A786B358DA1673706EE41711A
 * Entry: 0x0033d85c, Ghidra index: 12591, label: FUN_0033d85c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033d85c(void)

{
  int iVar1;
  int in_ECX;
  int local_8;
  
  if (*(int *)(in_ECX + 0x14) == 1) {
    *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8) = 0;
  }
  else {
    local_8 = in_ECX;
    iVar1 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x18));
    *(int *)(in_ECX + 0x2c) = iVar1;
    if ((iVar1 != 0) && (*(undefined4 *)(in_ECX + 0x14) = 1, -1 < iVar1)) {
      local_8 = 0;
      iVar1 = FUN_0033bcae(*(int *)(*(int *)(in_ECX + 0x10) + 0x10) << 9);
      if ((iVar1 < 0) || ((iVar1 = FUN_0033ca6a(&local_8), iVar1 < 0 || (local_8 != 0)))) {
        *(undefined4 *)(in_ECX + 0x18) = 0;
        FUN_0033bc7e(4,0,0,0,1);
        FUN_0033d4fc();
      }
    }
    if (((*(int *)(in_ECX + 0x14) == 1) && (FUN_0033bcdc(), *(int *)(in_ECX + 0x2c) < 0)) &&
       (*(int *)(in_ECX + 0x10) != 0)) {
      FUN_0033bd35();
      *(undefined4 *)(in_ECX + 0x10) = 0;
    }
  }
  return *(undefined4 *)(in_ECX + 0x2c);
}
