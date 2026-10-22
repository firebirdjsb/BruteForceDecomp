/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42B5EF25703B5B324162291A59B5975943FC9F7E43C92A6475B102ED3795C219
 * Entry: 0x0034a8e6, Ghidra index: 12937, label: FUN_0034a8e6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034a8e6(undefined4 *param_1,byte *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined2 *)FUN_0034a806();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 1;
    puVar3 = (undefined4 *)(puVar1 + 0x62);
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    *(byte **)(puVar1 + 0x60) = param_2;
    puVar1[0x42] = 8;
    puVar1[0x5b] = 8;
    *(undefined4 *)(puVar1 + 0x5c) = 0x1000000;
    puVar1[0x5e] = 0x20c;
    if ((*param_2 & 0xc0) == 0x80) {
      *(undefined4 *)(puVar1 + 0x5c) = 0;
      puVar1[0x5e] = 0;
      *puVar1 = 2;
    }
  }
  return;
}
