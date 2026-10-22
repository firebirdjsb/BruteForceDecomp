/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6FC4130A139A88BD580CC518930CBB230D1892F5AD4F02A8223521B31B73B66
 * Entry: 0x001a9410, Ghidra index: 5462, label: FUN_001a9410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9410(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x6c;
    if (iVar1 != 0) goto LAB_001a9449;
  }
  FUN_001b05c0(in_EAX);
LAB_001a9449:
  FUN_001b5380(0);
  return iVar1 * 0x6c + *(int *)(in_ECX + 4);
}
