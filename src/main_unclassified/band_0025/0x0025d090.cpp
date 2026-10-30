/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92F3E2D6C23ED9B924EF9A8B9FC83EBFBA78009EC536C2B4A83C4AEC38E4B2D5
 * Entry: 0x0025d090, Ghidra index: 8563, label: FUN_0025d090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025d090(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  uint *unaff_EDI;
  
  iVar1 = FUN_000a7ba0(unaff_EDI);
  if ((iVar1 != *(int *)(in_EAX + 4)) && (*(uint *)(iVar1 + 0xc) <= *unaff_EDI)) {
    *unaff_EBX = iVar1;
    return;
  }
  *unaff_EBX = *(int *)(in_EAX + 4);
  return;
}
