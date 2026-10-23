/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01194CD3BF041DD77B5678121F9814A57C69905C1E93AFCFC5A7C30A231AFD31
 * Entry: 0x0020d1b0, Ghidra index: 7364, label: FUN_0020d1b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020d1b0(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  int in_EDX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = in_EAX;
  unaff_EDI[1] = in_ECX;
  unaff_EDI[3] = 0;
  if (*(int *)(in_EDX + 4) != 0) {
    FUN_0008f6a0(*(int *)(in_EDX + 4));
  }
  return;
}
