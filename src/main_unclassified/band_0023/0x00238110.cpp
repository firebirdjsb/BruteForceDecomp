/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0FBC27540F3D93822209AD628A6612E68B161C69542559025F1670144E1CF83
 * Entry: 0x00238110, Ghidra index: 7865, label: FUN_00238110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00238110(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_EAX;
  
  FUN_00238160();
  iVar1 = *(int *)(in_EAX + 0x20);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 **)(in_EAX + 0x20);
    *(undefined4 *)(in_EAX + 0x20) = *puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar1 = *(int *)(in_EAX + 0x20);
  }
  *(undefined4 *)(in_EAX + 0x20) = 0;
  *(undefined4 *)(in_EAX + 0x24) = 0;
  iVar1 = *(int *)(in_EAX + 0x18);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 **)(in_EAX + 0x18);
    *(undefined4 *)(in_EAX + 0x18) = *puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar1 = *(int *)(in_EAX + 0x18);
  }
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  return;
}
