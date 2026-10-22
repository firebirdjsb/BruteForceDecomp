/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FBBD9497C2EDAF4091F6D409F36FA6854123BE8D1B33545EAB117DE27AC9EBB
 * Entry: 0x000ad690, Ghidra index: 2075, label: FUN_000ad690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5ca0;
extern uint32_t PTR_FUN_003a00f4;
extern uint32_t _DAT_004a5ca4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000ad690(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  FUN_000bb4d0(param_1,0x10);
  iVar1 = param_1[0xb];
  param_1[0x13] = 0x3e800000;
  param_1[0x14] = 0x3f000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_003a00f4;
  param_1[0x19] = 0x40800000;
  if ((iVar1 != 0) &&
     (((piVar2 = *(int **)(iVar1 + 0x24), piVar2 == (int *)0x0 || (*piVar2 != 0xc626fd5)) ||
      (piVar2[1] != 0xe)))) {
    uVar5 = FUN_000cd9c0();
    *(undefined4 *)(iVar1 + 0x24) = uVar5;
  }
  if ((_DAT_004a5ca4 & 1) == 0) {
    _DAT_004a5ca4 = _DAT_004a5ca4 | 1;
    DAT_004a5ca0._0_1_ = 0xc0;
    DAT_004a5ca0._1_1_ = 0xd7;
    DAT_004a5ca0._2_1_ = 0xff;
    DAT_004a5ca0._3_1_ = 0xff;
  }
  uVar4 = DAT_004a5ca0._2_1_;
  uVar3 = DAT_004a5ca0._1_1_;
  iVar1 = param_1[0xb];
  *(undefined1 *)(iVar1 + 0x38) = (undefined1)DAT_004a5ca0;
  *(undefined1 *)(iVar1 + 0x3a) = uVar3;
  *(undefined1 *)(iVar1 + 0x39) = uVar4;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfc;
  *(byte *)(param_1[0xb] + 0x3b) = *(byte *)(param_1[0xb] + 0x3b) | 0x10;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 4;
  return param_1;
}
