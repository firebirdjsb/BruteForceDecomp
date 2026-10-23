/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC21FAFAB282BC16EDA988F3A7120DF48A1D6A98050AE2098939DA5ABB7E0961
 * Entry: 0x002c5ca0, Ghidra index: 10071, label: FUN_002c5ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002c5ca0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EBX;
  int *piVar3;
  int unaff_EDI;
  
  iVar2 = *(ushort *)(in_EAX + 0x3e) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)(in_EAX + 0x40) + iVar2 * 4);
    do {
      iVar1 = *piVar3;
      if ((*(int *)(iVar1 + 0x2c) == unaff_EDI) && (*(int *)(iVar1 + 0x30) == unaff_EBX)) {
        return iVar1;
      }
      if ((*(int *)(iVar1 + 0x2c) == unaff_EBX) && (*(int *)(iVar1 + 0x30) == unaff_EDI)) {
        return iVar1;
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar2);
  }
  return 0;
}
