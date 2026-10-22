/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8108E1D366F252A49FEE8734FBFCDAFB02E4A4DA138F894C77749D2AF4448C82
 * Entry: 0x00277780, Ghidra index: 8912, label: FUN_00277780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00277780(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  int *unaff_EDI;
  
  iVar1 = FUN_0024ff60(unaff_EDI);
  if ((iVar1 != *(int *)(in_EAX + 4)) && (*(int *)(iVar1 + 0xc) <= *unaff_EDI)) {
    *unaff_EBX = iVar1;
    return;
  }
  *unaff_EBX = *(int *)(in_EAX + 4);
  return;
}
