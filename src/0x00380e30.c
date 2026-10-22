/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B566564561C29B4AA98BCA7F59410558E878B97D2ED2BF41444CA5475E03B0E
 * Entry: 0x00380e30, Ghidra index: 13538, label: FUN_00380e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00380e30(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)((int)in_ECX + 0xa1) = 0;
  in_ECX[0x26] = param_1;
  in_ECX[0x27] = param_2;
  puVar2 = in_ECX;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = (undefined4 *)((int)in_ECX + 0x32);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = in_ECX + 0x19;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  return;
}
