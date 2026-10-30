/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA34EFD3CABEBC626A69A399615895BA7F4DD10144FABB7F8A707A9DB7736241
 * Entry: 0x002c4c10, Ghidra index: 10059, label: FUN_002c4c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002c4c10(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar2 = *(ushort *)(in_EAX + 0x3e) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)(in_EAX + 0x40) + iVar2 * 4);
    do {
      iVar1 = *piVar3;
      if ((*(int *)(iVar1 + 0x2c) == unaff_EDI) || (*(int *)(iVar1 + 0x30) == unaff_EDI)) {
        if (*(int *)(iVar1 + 0x2c) == param_1) {
          return iVar1;
        }
        if (*(int *)(iVar1 + 0x30) == param_1) {
          return iVar1;
        }
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar2);
  }
  return 0;
}
