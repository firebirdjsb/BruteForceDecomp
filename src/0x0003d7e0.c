/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90DB3D843A195165EA89E8AB35B2E3E5B81570AA11EA07D01CCF66D3E324DC67
 * Entry: 0x0003d7e0, Ghidra index: 453, label: FUN_0003d7e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003d7e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  *(undefined4 *)(in_EAX + 0x24) = *in_ECX;
  *(undefined4 *)(in_EAX + 0x28) = uVar2;
  *(undefined4 *)(in_EAX + 0x2c) = uVar1;
  return;
}
