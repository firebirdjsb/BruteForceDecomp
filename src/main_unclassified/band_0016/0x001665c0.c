/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41F5AA420C1EA8BDA2B16445E177C94F3567134B807D52F07068D56F4EC5D995
 * Entry: 0x001665c0, Ghidra index: 4717, label: FUN_001665c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001665c0(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = in_EAX;
  while( true ) {
    iVar1 = iVar2 * 2;
    iVar2 = iVar1 + 2;
    if (param_2 <= iVar2) break;
    if (*(int *)(iVar2 * 0x520 + param_1) < *(int *)(iVar2 * 0x520 + -0x520 + param_1)) {
      iVar2 = iVar1 + 1;
    }
    FUN_001666b0(iVar2 * 0x520 + param_1);
  }
  if (iVar2 == param_2) {
    FUN_001666b0(param_2 * 0x520 + -0x520 + param_1);
  }
  FUN_001662b0(&stack0x0000000c);
  FUN_001668f0(in_EAX);
  iVar2 = 0x13;
  do {
    FUN_00068c90();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
