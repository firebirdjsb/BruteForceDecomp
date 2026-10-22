/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6ECE0F11335A528B7D42B16E56A9F55A5A3C2C374FF57A9890D2E5EE1C82C4F1
 * Entry: 0x001a8d50, Ghidra index: 5450, label: FUN_001a8d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8d50(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x3c;
    if (iVar1 != 0) goto LAB_001a8d8b;
  }
  FUN_001af330(in_EAX);
  in_EAX = 1;
LAB_001a8d8b:
  FUN_001b4820(iVar1 + in_EAX,0);
  return iVar1 * 0x3c + *(int *)(in_ECX + 4);
}
