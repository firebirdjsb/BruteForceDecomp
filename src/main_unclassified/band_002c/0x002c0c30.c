/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DB440A9C45CF8AEAA6854F4551E46AB26CEA057364887DA66D0E08D6F27EEE1
 * Entry: 0x002c0c30, Ghidra index: 10015, label: FUN_002c0c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c0c30(int param_1)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x74) != 0) {
    *(undefined4 *)(*(int *)(in_EAX + 0x74) + 0x78) = *(undefined4 *)(in_EAX + 0x78);
  }
  if (*(int *)(in_EAX + 0x78) == 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_EAX + 0x74);
  }
  else {
    *(undefined4 *)(*(int *)(in_EAX + 0x78) + 0x74) = *(undefined4 *)(in_EAX + 0x74);
  }
  if (*(int *)(in_EAX + 0x20) != 0) {
    *(undefined4 *)(*(int *)(in_EAX + 0x20) + 0xc) = *(undefined4 *)(in_EAX + 0x24);
  }
  if (*(int *)(in_EAX + 0x24) == 0) {
    *(undefined4 *)(*(int *)(in_EAX + 0x28) + 0x20) = *(undefined4 *)(in_EAX + 0x20);
  }
  else {
    *(undefined4 *)(*(int *)(in_EAX + 0x24) + 8) = *(undefined4 *)(in_EAX + 0x20);
  }
  if (*(int *)(in_EAX + 0x3c) != 0) {
    *(undefined4 *)(*(int *)(in_EAX + 0x3c) + 0xc) = *(undefined4 *)(in_EAX + 0x40);
  }
  if (*(int *)(in_EAX + 0x40) != 0) {
    *(undefined4 *)(*(int *)(in_EAX + 0x40) + 8) = *(undefined4 *)(in_EAX + 0x3c);
    return;
  }
  *(undefined4 *)(*(int *)(in_EAX + 0x44) + 0x20) = *(undefined4 *)(in_EAX + 0x3c);
  return;
}
