/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82BABF79D4FF4DAB61E5F76A34BEABAE48045D5D52650C56D37FAFBE39CF81E3
 * Entry: 0x0007c530, Ghidra index: 1478, label: FUN_0007c530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0007c530(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 200))();
  if (*(char *)(iVar1 + 4) == '\0') {
    return 0;
  }
  iVar1 = (**(code **)(*in_ECX + 200))();
  if (*(char *)(iVar1 + 4) == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 8;
  }
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    return *(int *)(iVar1 + 4);
  }
  return iVar1 + 4;
}
