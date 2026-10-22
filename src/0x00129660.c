/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D20A1F240426CFF09FC3C1784F121447DB8E735E31543F8C9FA07D220DC9F83
 * Entry: 0x00129660, Ghidra index: 3746, label: FUN_00129660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00129660(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    return 1;
  }
  iVar1 = *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4);
  return CONCAT31((int3)(iVar1 >> 0xb),iVar1 >> 3 == 0);
}
