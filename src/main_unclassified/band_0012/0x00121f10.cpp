/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F6D68F6AF6BF9447423CCDCAF282E500511E0DBCF1482E35A8052DA6225C0BE
 * Entry: 0x00121f10, Ghidra index: 3659, label: FUN_00121f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00121f10(void)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if (*(char *)(*(int *)(in_ECX + 0xc) + 0x294 + in_EAX) != '\0') {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x5a4) + 0x94))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}
