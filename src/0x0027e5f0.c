/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5ECE598259D33E886F251990A652964A5782172A1B5A2BE55C8D66C2BD545757
 * Entry: 0x0027e5f0, Ghidra index: 9011, label: FUN_0027e5f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027e5f0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined1 *in_EDX;
  byte bVar3;
  
  iVar1 = FUN_0027e580();
  *(undefined4 *)(iVar1 + 0x16ac) = 8;
  if (param_1 != 0) {
    *(byte *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) = (byte)in_ECX;
    iVar2 = *(int *)(iVar1 + 0x14) + 1;
    *(int *)(iVar1 + 0x14) = iVar2;
    bVar3 = (byte)((uint)in_ECX >> 8);
    *(byte *)(iVar2 + *(int *)(iVar1 + 8)) = bVar3;
    iVar2 = *(int *)(iVar1 + 0x14) + 1;
    *(int *)(iVar1 + 0x14) = iVar2;
    *(byte *)(iVar2 + *(int *)(iVar1 + 8)) = ~(byte)in_ECX;
    iVar2 = *(int *)(iVar1 + 0x14) + 1;
    *(int *)(iVar1 + 0x14) = iVar2;
    *(byte *)(iVar2 + *(int *)(iVar1 + 8)) = ~bVar3;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    *(undefined1 *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) = *in_EDX;
    in_EDX = in_EDX + 1;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  return;
}
