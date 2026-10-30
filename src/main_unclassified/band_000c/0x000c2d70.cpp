/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7F1E77C5E0D1DE9046ED6445D511E78EE47F3DA2209CD2454D2B5189F170823
 * Entry: 0x000c2d70, Ghidra index: 2381, label: FUN_000c2d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c8c68;
extern uint32_t DAT_003c8c6c;
extern uint32_t DAT_003c8ea0;
extern uint32_t DAT_003c8ea4;
extern uint32_t DAT_00469ab0;
void FUN_000c2d70(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  
  iVar1 = unaff_EDI + 0x2c;
  iVar4 = FUN_000b9120(DAT_00469ab0);
  if (iVar4 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar4);
    }
    *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfb;
  }
  *(int *)(iVar4 + 0x38) = unaff_EDI;
  if (*(int *)(iVar4 + 0x28) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar4 + 0x28) + -0x2c;
  }
  iVar5 = (*(int *)(unaff_EDI + 0x68) + -1 + (*(byte *)(*(int *)(iVar5 + 100) + 0x74) & 1) * 4) * 8;
  uVar2 = *(undefined2 *)(&DAT_003c8c6c + iVar5);
  *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(&DAT_003c8c68 + iVar5);
  *(undefined2 *)(iVar4 + 6) = uVar2;
  FUN_000c3680();
  uVar3 = DAT_00469ab0;
  *(int *)(unaff_EDI + 0x6c) = iVar4;
  iVar4 = FUN_000b9120(uVar3);
  if (iVar4 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar4);
    }
    *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfb;
  }
  FUN_000c3910(*(int *)(unaff_EDI + 0x68) + -1);
  iVar4 = FUN_000b9120(DAT_00469ab0);
  if (iVar4 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar4);
    }
    *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfb;
  }
  FUN_000c3cc0(*(int *)(unaff_EDI + 0x68) + -1);
  iVar4 = FUN_000b9120(DAT_00469ab0);
  if (iVar4 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar4);
    }
    *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfb;
  }
  *(int *)(iVar4 + 0x30) = unaff_EDI;
  uVar3 = DAT_00469ab0;
  if (*(int *)(iVar4 + 0x28) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar4 + 0x28) + -0x2c;
  }
  iVar5 = *(int *)(unaff_EDI + 0x68) + (*(byte *)(*(int *)(iVar5 + 100) + 0x74) & 1) * 4;
  uVar2 = *(undefined2 *)(&DAT_003c8ea4 + iVar5 * 8);
  *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(&DAT_003c8ea0 + iVar5 * 8);
  *(undefined2 *)(iVar4 + 6) = uVar2;
  iVar4 = FUN_000b9120(uVar3);
  if (iVar4 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar4);
    }
    *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfb;
  }
  FUN_000c3080(iVar4);
  iVar4 = FUN_000b9120(DAT_00469ab0);
  if (iVar4 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar4);
    }
    *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfb;
  }
  FUN_000c4b20();
  *(int *)(unaff_EDI + 0x70) = iVar4;
  return;
}
