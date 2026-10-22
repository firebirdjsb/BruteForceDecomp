/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62EECF231E8C0AAC6EE6A5D56FC96F1F8F5F2A2E05AB330BE04AA0633FE62EF8
 * Entry: 0x000bb600, Ghidra index: 2274, label: FUN_000bb600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5ca0;
extern uint32_t _DAT_004a5ca4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bb600(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int in_EAX;
  undefined4 uVar5;
  undefined1 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((iVar2 != 0) &&
     (((piVar3 = *(int **)(iVar2 + 0x24), piVar3 == (int *)0x0 || (*piVar3 != 0xc626fd5)) ||
      (piVar3[1] != in_EAX)))) {
    uVar5 = FUN_000cd9c0();
    *(undefined4 *)(iVar2 + 0x24) = uVar5;
  }
  uVar4 = _DAT_004a5ca4;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfc | 4;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x2c) + 0x3b);
  *pbVar1 = *pbVar1 | 0x10;
  if ((uVar4 & 1) == 0) {
    _DAT_004a5ca4 = _DAT_004a5ca4 | 1;
    DAT_004a5ca0 = 0xffffd7c0;
  }
  uVar5 = DAT_004a5ca0;
  iVar2 = *(int *)(param_1 + 0x2c);
  uVar6 = (undefined1)DAT_004a5ca0;
  *(char *)(iVar2 + 0x3a) = (char)((uint)DAT_004a5ca0 >> 8);
  *(undefined1 *)(iVar2 + 0x38) = uVar6;
  *(char *)(iVar2 + 0x39) = (char)((uint)uVar5 >> 0x10);
  return;
}
