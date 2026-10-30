/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E64F1B27500263227C9464E133483722FC7BB9DBE2284AF9CACDC6A8C0D36415
 * Entry: 0x000ac5e0, Ghidra index: 2062, label: FUN_000ac5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000ab860(void);

void FUN_000ac5e0(void)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  byte bVar4;
  int unaff_EDI;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [12];
  
  if (0.0 < *(float *)(unaff_EDI + 0x70)) {
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x28) + 0xe0) + 0x2e8);
    local_18 = *(int *)(iVar1 + 0x1c0);
    local_14 = *(int *)(iVar1 + 0x1c4);
    local_20 = (int *)(unaff_EDI + 0x88);
    bVar2 = true;
    local_1c = 2;
    do {
      iVar1 = *local_20;
      if ((*(float *)(unaff_EDI + 0x70) == 0.0) || (!bVar2)) {
        *(byte *)(iVar1 + 0x13) = *(byte *)(iVar1 + 0x13) | 1;
      }
      else {
        piVar3 = (int *)FUN_0014d960(local_10,&local_18,1);
        local_18 = *piVar3;
        local_14 = piVar3[1];
        if ((local_18 == 10) && (local_14 == -1)) {
          bVar4 = 1;
        }
        else {
          bVar4 = 0;
        }
        *(byte *)(iVar1 + 0x13) = *(byte *)(iVar1 + 0x13) ^ (*(byte *)(iVar1 + 0x13) ^ bVar4) & 1;
        if ((local_18 == 10) && (local_14 == -1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      FUN_000ab860();
      local_20 = local_20 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x28) + 0xe0) + 0x2e8);
    local_18 = *(int *)(iVar1 + 0x1c0);
    local_14 = *(int *)(iVar1 + 0x1c4);
    local_20 = (int *)(unaff_EDI + 0x90);
    bVar2 = true;
    local_1c = 2;
    do {
      iVar1 = *local_20;
      if ((*(float *)(unaff_EDI + 0x70) == 0.0) || (!bVar2)) {
        *(byte *)(iVar1 + 0x13) = *(byte *)(iVar1 + 0x13) | 1;
      }
      else {
        piVar3 = (int *)FUN_0014d7c0(local_10,&local_18,1);
        local_18 = *piVar3;
        local_14 = piVar3[1];
        if ((local_18 == 10) && (local_14 == -1)) {
          bVar4 = 1;
        }
        else {
          bVar4 = 0;
        }
        *(byte *)(iVar1 + 0x13) = *(byte *)(iVar1 + 0x13) ^ (*(byte *)(iVar1 + 0x13) ^ bVar4) & 1;
        if ((local_18 == 10) && (local_14 == -1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      FUN_000ab860();
      local_20 = local_20 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}
