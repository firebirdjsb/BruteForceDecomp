/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 576A9F7F697280C3EB2C93C6AB5E1A6C63C446ED288DAB3B6BC0DC29F63D9177
 * Entry: 0x001548b0, Ghidra index: 4449, label: FUN_001548b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001548b0(undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int in_ECX;
  
  *(int *)(param_2 + 0xc) = in_ECX;
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 4);
  if (((iVar1 == 2) || (iVar1 == 0x1a)) || (iVar1 == 0x1f)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  *(byte *)(param_2 + 0x26) =
       *(byte *)(param_2 + 0x26) ^ (!bVar2 << 5 ^ *(byte *)(param_2 + 0x26)) & 0x20;
  return;
}
