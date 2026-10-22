/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69F156421D70BFBAE4ADC61FEF865ADE143D3BF92DFE817AA05565D22B134E70
 * Entry: 0x002d9d10, Ghidra index: 10258, label: FUN_002d9d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d9d10(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  int in_EDX;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = in_EAX;
  if (in_EDX == 0) {
    puVar2 = (undefined4 *)((uint)in_EAX & 0xfffffff0);
    param_1 = param_1 + ((int)in_EAX - (int)puVar2 >> 2);
    in_ECX = (undefined4 *)((uint)in_ECX & 0xfffffff0);
  }
  if (0 < param_1) {
    iVar3 = (param_1 - 1U >> 2) + 1;
    do {
      uVar1 = *puVar2;
      *puVar2 = *in_ECX;
      *in_ECX = uVar1;
      uVar1 = puVar2[1];
      puVar2[1] = in_ECX[1];
      in_ECX[1] = uVar1;
      uVar1 = puVar2[2];
      puVar2[2] = in_ECX[2];
      in_ECX[2] = uVar1;
      uVar1 = puVar2[3];
      puVar2[3] = in_ECX[3];
      in_ECX[3] = uVar1;
      puVar2 = puVar2 + 4;
      in_ECX = in_ECX + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
