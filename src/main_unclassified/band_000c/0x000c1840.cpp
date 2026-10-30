/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98DD6E6C3E4873DCA18FD9E9056030169E20921AE535614922171DE3E89F26DB
 * Entry: 0x000c1840, Ghidra index: 2357, label: FUN_000c1840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
extern uint32_t DAT_004a5ca0;
extern uint32_t _DAT_004a5ca4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c1840(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  byte *pbVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined4 in_EAX;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_00469ab0;
  *(undefined4 *)(param_1 + 100) = in_EAX;
  *(undefined2 *)(param_1 + 0xe) = 0x40;
  *(undefined2 *)(param_1 + 0xc) = 0x40;
  iVar4 = FUN_000b9120(uVar5);
  if (iVar4 != 0) {
    if (param_1 + 0x2c != 0) {
      FUN_000b25a0(param_1 + 0x2c,iVar4);
    }
    *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfb;
  }
  *(int *)(param_1 + 0x6c) = iVar4;
  FUN_000ba6d0();
  *(undefined2 *)(*(int *)(param_1 + 0x6c) + 0xe) = 0x40;
  *(undefined2 *)(*(int *)(param_1 + 0x6c) + 0xc) = 0x40;
  iVar4 = *(int *)(param_1 + 0x6c);
  *(undefined1 *)(iVar4 + 0x2c) = 0xff;
  *(undefined1 *)(iVar4 + 0x2d) = 0xff;
  *(undefined1 *)(iVar4 + 0x2e) = 0xff;
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) ^ (*(byte *)(param_1 + 0x70) ^ param_4) & 1;
  iVar4 = FUN_000b9120(DAT_00469ab0);
  if (iVar4 != 0) {
    if (param_1 + 0x2c != 0) {
      FUN_000b25a0(param_1 + 0x2c,iVar4);
    }
    *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfb;
  }
  *(int *)(param_1 + 0x68) = iVar4;
  iVar4 = *(int *)(iVar4 + 0x2c);
  if ((iVar4 != 0) &&
     (((piVar3 = *(int **)(iVar4 + 0x24), piVar3 == (int *)0x0 || (*piVar3 != 0xc626fd5)) ||
      (piVar3[1] != 10)))) {
    uVar5 = FUN_000cd9c0();
    *(undefined4 *)(iVar4 + 0x24) = uVar5;
  }
  if ((_DAT_004a5ca4 & 1) == 0) {
    _DAT_004a5ca4 = _DAT_004a5ca4 | 1;
    DAT_004a5ca0 = 0xffffd7c0;
  }
  uVar5 = DAT_004a5ca0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x68) + 0x2c);
  *(char *)(iVar4 + 0x3a) = (char)((uint)DAT_004a5ca0 >> 8);
  *(char *)(iVar4 + 0x38) = (char)uVar5;
  *(char *)(iVar4 + 0x39) = (char)((uint)uVar5 >> 0x10);
  pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x68) + 0x2c) + 0x3b);
  *pbVar1 = *pbVar1 | 0x10;
  *(byte *)(*(int *)(param_1 + 0x68) + 0x48) = *(byte *)(*(int *)(param_1 + 0x68) + 0x48) & 0xfc;
  FUN_000bb9d0(*(undefined4 *)(param_1 + 0x68));
  pbVar1 = (byte *)(*(int *)(param_1 + 0x68) + 0x48);
  *pbVar1 = *pbVar1 | 4;
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x68);
  *(undefined2 *)(iVar4 + 4) = 0;
  *(undefined2 *)(iVar4 + 6) = uVar2;
  return;
}
