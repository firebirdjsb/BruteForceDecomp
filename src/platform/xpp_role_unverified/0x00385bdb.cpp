/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2AE15033FFE961C0C2E6724FDE392DC86383D4BFC3F1BA624C8146BA231E919
 * Entry: 0x00385bdb, Ghidra index: 13679, label: FUN_00385bdb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00385bdb(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  undefined4 uVar3;
  
  iVar1 = *(int *)(in_EDX + 0x10);
  uVar3 = 0;
  KeRaiseIrqlToDpcLevel();
  if ((*(byte *)(iVar1 + 0x10) & 2) == 0) {
    uVar3 = 0xc0000f00;
  }
  else {
    *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 0x40;
    iVar2 = FUN_00384f75();
    *(int *)(iVar1 + 0x1c) = iVar2 + 2;
    *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) & 0xfd | 4;
  }
  KfLowerIrql();
  *(undefined4 *)(in_EDX + 4) = uVar3;
  FUN_00380eda(in_EDX);
  return uVar3;
}
