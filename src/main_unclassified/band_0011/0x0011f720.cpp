/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8BE38E8ABDABBF9AD4B858AC3C845DE890A7CA4130C5D2ABA9D3F1498F089BD
 * Entry: 0x0011f720, Ghidra index: 3635, label: FUN_0011f720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040cbf0;
void FUN_0011f720(void)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  int unaff_ESI;
  undefined1 auStack_6c [4];
  undefined *local_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_8;
  int local_4;
  
  puVar1 = *(undefined4 **)(unaff_ESI + 0x6a4 + unaff_EBX * 4);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(unaff_ESI + 0x268 + unaff_EBX * 4) == -1)) {
    local_54 = unaff_EBX * 0x30 + unaff_ESI;
    local_58 = local_54 + 0x310;
    local_64 = *puVar1;
    local_8 = *(undefined4 *)(unaff_ESI + 0x3ac);
    local_4 = unaff_ESI + 0x3b0;
    local_60 = puVar1[1];
    local_54 = local_54 + 0x2ec;
    local_68 = &DAT_0040cbf0;
    local_4c = 0;
    local_5c = 0xc;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      local_5c = 0xd;
    }
    if ((*(byte *)(puVar1 + 2) & 2) != 0) {
      local_5c = local_5c | 2;
    }
    if (unaff_EBX == 2) {
      local_5c = local_5c | 0x60;
    }
    local_50 = puVar1[3];
    FUN_0003d730(local_54,local_60 + 0x14);
    iVar3 = (**(code **)(**(int **)(*(int *)(unaff_ESI + 8) + 0xbec) + 0xc))();
    if (((iVar3 == 0) || (*(int *)(iVar3 + 0x24) == 0)) ||
       ((*(byte *)(*(int *)(iVar3 + 0x24) + 0x14) & 2) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = *(undefined4 *)(*(int *)(unaff_ESI + 0xc) + 0x230);
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(unaff_ESI + 0xc) + 0x238);
    }
    uVar4 = FUN_0023d8e0(*(undefined4 *)(unaff_ESI + 500),auStack_6c,uVar4);
    *(undefined4 *)(unaff_ESI + 0x268 + unaff_EBX * 4) = uVar4;
  }
  return;
}
