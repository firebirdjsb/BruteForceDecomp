/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 150E8E8F99636BD7147E831484040A643B00AA5B088A8CB3AF83F8EF08802B48
 * Entry: 0x00147570, Ghidra index: 4237, label: FUN_00147570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00147570(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  /* XBE 0x1475DC: after three pushes, ESP+0x10 is entry ESP+4.
   * FUN_000e0350 writes a DWORD through this first guest argument slot
   * and returns its address. Guest32/host stack aliasing is ABI_UNVERIFIED. */
  uint32_t guest_first_arg_word = (uint32_t)(uintptr_t)param_1;
  
  cVar2 = (**(code **)(*param_1 + 0x58))();
  if (cVar2 != '\0') {
    iVar1 = param_1[8];
    *(byte *)(iVar1 + 0x1bc) = *(byte *)(iVar1 + 0x1bc) | 2;
    *(undefined1 *)(iVar1 + 0x79) = 0;
    (**(code **)(**(int **)(*(int *)(iVar1 + 0xc) + 0x15c) + 0x10))(iVar1);
    iVar1 = param_1[8];
    uVar3 = (**(code **)(*(int *)(param_1[0x75] + 0x1b4) + 0x9c))();
    *(undefined4 *)(iVar1 + 0x1c0) = uVar3;
    iVar1 = param_1[8];
    *(undefined1 *)(iVar1 + 0x79) = 6;
    if (((*(byte *)(iVar1 + 0x26) & 0x10) == 0) && (*(int *)(iVar1 + 8) != 0)) {
      puVar4 = (undefined4 *)FUN_000e0350(*(int *)(iVar1 + 8),&guest_first_arg_word,iVar1);
      *(undefined4 *)(iVar1 + 0x14) = *puVar4;
      *(byte *)(iVar1 + 0x26) = *(byte *)(iVar1 + 0x26) | 0x10;
    }
    iVar1 = param_1[8];
    *(undefined4 *)(iVar1 + 0x110) = 3;
    *(undefined4 *)(iVar1 + 0x114) = 0x40000000;
    *(byte *)(param_1[8] + 0x71) = *(byte *)(param_1[8] + 0x71) | 0x40;
  }
  return;
}
