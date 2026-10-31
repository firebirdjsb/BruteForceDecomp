/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C03338FA953F3EE7A8088B79EEE794B6B6F5C349458F2B4B4AFFDD50C7C38A17
 * Entry: 0x003860ee, Ghidra index: 13687, label: FUN_003860ee
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern void FUN_00385df0(uint param_1);
void FUN_003860ee(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 0x28);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(in_EDX + 0x28);
    if (3 < (uint)*(ushort *)(in_EDX + 0x24) + (uint)*(ushort *)(iVar1 + 0x20)) break;
    iVar2 = *(int *)(iVar1 + 0x24);
    *(int *)(in_EDX + 0x28) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(in_EDX + 0x2c) = 0;
    }
    *(ushort *)(in_EDX + 0x24) = *(short *)(iVar1 + 0x20) + *(ushort *)(in_EDX + 0x24);
    FUN_00385df0(iVar1);
    iVar1 = *(int *)(in_EDX + 0x28);
  }
  return;
}
