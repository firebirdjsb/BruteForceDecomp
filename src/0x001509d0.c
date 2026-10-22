/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AF7C78B2B6385CD74638763D7A2CF04474964827608576FF5A35D4516996EC9
 * Entry: 0x001509d0, Ghidra index: 4408, label: FUN_001509d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001509d0(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  if (*(int *)(in_EAX + 0x3c) == 0) {
    uVar1 = FUN_002bbeb0();
    *(undefined4 *)(in_EAX + 0x3c) = uVar1;
  }
  if ((*(char *)(in_EAX + 0x70) < '\b') &&
     (*(int *)(*(int *)(in_EAX + 0x3c) + 0x60) < *(int *)(*(int *)(in_EAX + 0x14) + 0x120))) {
    FUN_002bbf70();
  }
  return *(undefined4 *)(in_EAX + 0x3c);
}
