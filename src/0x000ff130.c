/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03B6DB568F9E01EB95123CB87B9DEDC7D1F1DC43F8D41D12BEDB18E9AD38D694
 * Entry: 0x000ff130, Ghidra index: 3190, label: FUN_000ff130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000ff130(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)in_ECX[2];
  puVar2 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar3;
  }
  if (puVar3 != puVar2) {
    do {
      iVar1 = *(int *)(puVar3[1] + 8);
      if (*(int *)(iVar1 + 0x24) == *param_1) {
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      (**(code **)(*in_ECX + 0x14))(iVar1);
      puVar3 = (undefined4 *)in_ECX[2];
      puVar2 = (undefined4 *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (puVar3 != puVar2);
  }
  return (uint)puVar2 & 0xffffff00;
}
