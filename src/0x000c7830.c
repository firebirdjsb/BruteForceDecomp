/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4773C72F3D88B79F1334E1D8FB4E47E36876674247EED2DE9EF3E7B16C3F03C
 * Entry: 0x000c7830, Ghidra index: 2453, label: FUN_000c7830
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

void FUN_000c7830(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar7 = FUN_000b9120(DAT_00469ab0);
  if (iVar7 != 0) {
    if (iVar2 != 0) {
      FUN_000b25a0(iVar2,iVar7);
    }
    *(byte *)(iVar7 + 0x13) = *(byte *)(iVar7 + 0x13) & 0xfb;
  }
  *(int *)(param_1 + 0x60) = iVar7;
  iVar2 = *(int *)(iVar7 + 0x2c);
  if ((iVar2 != 0) &&
     (((piVar3 = *(int **)(iVar2 + 0x24), piVar3 == (int *)0x0 || (*piVar3 != 0xc626fd5)) ||
      (piVar3[1] != 0xc)))) {
    uVar8 = FUN_000cd9c0();
    *(undefined4 *)(iVar2 + 0x24) = uVar8;
  }
  uVar6 = _DAT_004a5ca4;
  *(byte *)(*(int *)(param_1 + 0x60) + 0x48) = *(byte *)(*(int *)(param_1 + 0x60) + 0x48) & 0xfc;
  pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x60) + 0x2c) + 0x3b);
  *pbVar1 = *pbVar1 | 0x10;
  if ((uVar6 & 1) == 0) {
    _DAT_004a5ca4 = _DAT_004a5ca4 | 1;
    DAT_004a5ca0._0_1_ = 0xc0;
    DAT_004a5ca0._1_1_ = 0xd7;
    DAT_004a5ca0._2_1_ = 0xff;
    DAT_004a5ca0._3_1_ = 0xff;
  }
  uVar5 = DAT_004a5ca0._2_1_;
  uVar4 = DAT_004a5ca0._1_1_;
  iVar2 = *(int *)(*(int *)(param_1 + 0x60) + 0x2c);
  *(undefined1 *)(iVar2 + 0x38) = (undefined1)DAT_004a5ca0;
  *(undefined1 *)(iVar2 + 0x39) = uVar5;
  *(undefined1 *)(iVar2 + 0x3a) = uVar4;
  *(byte *)(*(int *)(param_1 + 0x60) + 0x13) = *(byte *)(*(int *)(param_1 + 0x60) + 0x13) | 1;
  return;
}
