/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04D538428EAE7E6BF9942EBCFD5DB0B9D88FA80575FCE30DDA9DA2661BF79195
 * Entry: 0x00349b99, Ghidra index: 12922, label: FUN_00349b99
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
void FUN_00349b99(void)

{
  undefined1 uVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_8;
  int local_4;
  
  local_8 = in_ECX;
  local_4 = in_ECX;
  if (*(int *)(in_ECX + 0xae4) == 4) {
    iVar2 = *(int *)(in_ECX + 0x1d8);
    while ((*(int *)(*(int *)(in_ECX + 0xbcc) + 0xa48) == 0x103 &&
           (*(uint *)(in_ECX + 0x1d8) <= iVar2 + 0x19U))) {
      local_4 = -1;
      local_8 = -100000;
      KeWaitForSingleObject(*(undefined4 *)(in_ECX + 0xaec),6,1,0,&local_8);
    }
    if (*(int *)(*(int *)(in_ECX + 0xbcc) + 0xa50) != 0) {
      ObfDereferenceObject();
      *(undefined4 *)(*(int *)(in_ECX + 0xbcc) + 0xa50) = 0;
    }
  }
  uVar1 = KeRaiseIrqlToDpcLevel();
  /* 0x00349c27: MOV byte [ESP+0x10],AL. Preserve the other three bytes;
   * 0x00349c9b later loads only this byte into CL for the indirect call. */
  bf_x86_word_store_byte(&local_8,0U,(uint8_t)uVar1);
  *(undefined4 *)(in_ECX + 0xae4) = 0;
  *(undefined4 *)(in_ECX + 0xae8) = 0;
  if (*(int *)(in_ECX + 0xaec) != 0) {
    ObfDereferenceObject();
    *(int *)(in_ECX + 0xaec) = 0;
  }
  piVar3 = (int *)(in_ECX + 0xb08);
  iVar2 = 4;
  do {
    if (*piVar3 != 0) {
      ObfDereferenceObject();
    }
    piVar3 = piVar3 + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar4 = (undefined4 *)(in_ECX + 0xaf0);
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(in_ECX + 0xbb0) = 0;
  *(undefined4 *)(in_ECX + 0xbb4) = 0;
  *(undefined4 *)(in_ECX + 3000) = 0;
  *(undefined4 *)(in_ECX + 0xbbc) = 0;
  if (*(undefined4 **)(in_ECX + 0xbcc) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(in_ECX + 0xbcc);
    for (iVar2 = 0x295; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  FUN_00349750(1);
  KfLowerIrql();
  return;
}
