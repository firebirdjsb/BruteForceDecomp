/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DAAD1810D2820EBBDE71E772B5099C66DB924FD8CACA862862C277219832E16
 * Entry: 0x00040f70, Ghidra index: 490, label: FUN_00040f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00042a40(void);

void FUN_00040f70(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  
  if (*(int *)(in_EAX + 4) != 0) {
    iVar2 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x18;
    if (iVar2 != 0) {
      iVar1 = *(int *)(in_EAX + 0x10);
      if ((iVar1 == iVar2 + -1) && (iVar1 != iVar1 + -1)) {
        *(int *)(in_EAX + 0x10) = iVar1 + -1;
        *(undefined4 *)(in_EAX + 0x18) = 0x7f7fffff;
        *(undefined4 *)(in_EAX + 0x24) = 0;
      }
      FUN_00042a40();
    }
  }
  return;
}
