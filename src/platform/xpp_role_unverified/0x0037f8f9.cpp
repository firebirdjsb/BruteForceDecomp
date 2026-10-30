/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8B571B44AB5F00B446DD249AF829310685C7863B07E0FA04A34408AA76AE1B6
 * Entry: 0x0037f8f9, Ghidra index: 13504, label: FUN_0037f8f9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0037f8f9(void)

{
  int iVar1;
  uint *puVar2;
  int *in_ECX;
  uint uVar3;
  uint local_c;
  
  iVar1 = *in_ECX;
  KeInitializeTimerEx(in_ECX + 0x11e,0);
  KeInitializeDpc(in_ECX + 0x128,(uintptr_t)0x00384969U);
  *(undefined1 *)(in_ECX + 0x118) = 4;
  local_c = *(uint *)(iVar1 + 0x50) & 0xffff0000;
  *(uint *)(iVar1 + 0x50) = local_c;
  uVar3 = 0;
  if ((char)in_ECX[0x118] != '\0') {
    puVar2 = (uint *)(iVar1 + 0x54);
    do {
      local_c = *puVar2 & 0xffff0000;
      *puVar2 = local_c;
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < *(byte *)(in_ECX + 0x118));
  }
  *(undefined4 *)(iVar1 + 0x10) = 0x40;
  KeRaiseIrqlToDpcLevel();
  FUN_00384870();
  KfLowerIrql();
  return;
}
