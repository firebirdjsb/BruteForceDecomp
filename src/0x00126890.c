/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BBCB231891E9532269E7923AA842C2C1B3A1108E0957C78F1AEB78F5684ABEFD
 * Entry: 0x00126890, Ghidra index: 3716, label: FUN_00126890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00126890(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(in_EAX + 8) + 0xbec) + 0xc))();
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x24);
}
