/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09E66DBBD9595FFD30B3A3C890154DA7E28B9C1E1805F155E37DCB7F7E982B42
 * Entry: 0x002bbeb0, Ghidra index: 9917, label: FUN_002bbeb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002bbeb0(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  uint uVar3;
  int unaff_EDI;
  
  iVar2 = in_EAX[1] * 0x70 + in_EAX[2];
  if (*(int *)(in_EAX[1] * 0x70 + 100 + in_EAX[2]) != 0) {
    do {
      uVar3 = in_EAX[1] + 1U & *in_EAX - 1U;
      in_EAX[1] = uVar3;
      iVar2 = uVar3 * 0x70 + in_EAX[2];
    } while (*(int *)(iVar2 + 100) != 0);
  }
  in_EAX[1] = *in_EAX - 1U & in_EAX[1] + 1U;
  iVar1 = *(int *)(iVar2 + 0x68);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
    *(undefined4 *)(*(int *)(iVar1 + 0x3c) + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  *(int *)(iVar2 + 0x68) = unaff_EDI;
  *(int *)(unaff_EDI + 0x3c) = iVar2;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  if ('\a' < *(char *)(unaff_EDI + 0x70)) {
    FUN_002bbf70();
  }
  return iVar2;
}
