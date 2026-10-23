/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF2994B509B783D038D7719A30E4CF3E94D69F282EE55C191BAC324EC6255BB5
 * Entry: 0x002c61a0, Ghidra index: 10080, label: FUN_002c61a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002c61a0(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  if ((((*(int *)(in_ECX + 0x10) == *(int *)(in_EAX + 0x28)) &&
       (*(int *)(in_ECX + 0x24) == *(int *)(in_EAX + 0x44))) && (iVar1 = FUN_002c60d0(), iVar1 != 0)
      ) && (iVar1 = FUN_002c60d0(), iVar1 != 0)) {
    return 1;
  }
  if (((*(int *)(in_ECX + 0x24) == *(int *)(in_EAX + 0x28)) &&
      (*(int *)(in_ECX + 0x10) == *(int *)(in_EAX + 0x44))) &&
     ((iVar1 = FUN_002c60d0(), iVar1 != 0 && (iVar1 = FUN_002c60d0(), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}
