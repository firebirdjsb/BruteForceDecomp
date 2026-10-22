/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E4BF4A6E2162EAC35D994BFF6580B1523EA3E3D5074CCA98261189E8C6BF4A8
 * Entry: 0x00038470, Ghidra index: 372, label: FUN_00038470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00038470(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(in_EAX + 0x10) != 0) {
    uVar2 = *(int *)(in_EAX + 0xc) + 1;
    *(uint *)(in_EAX + 0xc) = uVar2;
    if ((uint)(*(int *)(in_EAX + 8) << 2) <= uVar2) {
      *(undefined4 *)(in_EAX + 0xc) = 0;
    }
    iVar1 = *(int *)(in_EAX + 0x10) + -1;
    *(int *)(in_EAX + 0x10) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(in_EAX + 0xc) = 0;
    }
  }
  return;
}
