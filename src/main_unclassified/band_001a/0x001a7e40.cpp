/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 000E1A4A0F0B21D57F1DCDECCB5F9E07B41E103C727AA6B19CCE5E841E248627
 * Entry: 0x001a7e40, Ghidra index: 5420, label: FUN_001a7e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7e40(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0xc;
    if (iVar1 != 0) goto LAB_001a7e78;
  }
  FUN_001aa320(in_EAX);
LAB_001a7e78:
  FUN_002435b0();
  return *(int *)(in_ECX + 4) + iVar1 * 0xc;
}
