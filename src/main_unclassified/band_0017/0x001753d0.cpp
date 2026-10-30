/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F89F841D211F93094B6CBEF4E8B90F3BD67940EA34984866ABBC74C6545BA4C1
 * Entry: 0x001753d0, Ghidra index: 4931, label: FUN_001753d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001753d0(undefined4 param_1)

{
  int *piVar1;
  int in_EAX;
  
  piVar1 = *(int **)(in_EAX + 0x74);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))(piVar1,param_1);
  }
  return;
}
