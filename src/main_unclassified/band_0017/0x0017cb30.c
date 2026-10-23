/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E5F88FD7E431997BD9045F39EA7A88E4FDD1D5ADFC17D3AA97CA47C2911FE09
 * Entry: 0x0017cb30, Ghidra index: 5057, label: FUN_0017cb30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017cb30(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_EAX = *in_EDX;
  in_EAX[1] = in_EDX[1];
  puVar2 = in_EDX + 2;
  puVar3 = in_EAX + 2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = in_EDX + 7;
  puVar3 = in_EAX + 7;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = in_EDX + 0xc;
  puVar3 = in_EAX + 0xc;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = in_EDX + 0x11;
  puVar3 = in_EAX + 0x11;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = in_EDX + 0x16;
  puVar3 = in_EAX + 0x16;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}
