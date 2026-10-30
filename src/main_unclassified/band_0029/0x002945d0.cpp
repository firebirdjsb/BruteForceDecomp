/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63D64009B0F2AF34BB58ECB6724E15D4936E31B21813AE2338804B806AFA5454
 * Entry: 0x002945d0, Ghidra index: 9290, label: FUN_002945d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern uint32_t PTR_DAT_003b9760;
extern uint32_t _DAT_00469884;
extern char s_not_enough_memory_00404860[];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002945d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint unaff_EDI;
  
  PTR_DAT_003b9760 = (undefined *)0x404874;
  _DAT_00469884 = 0x47;
  iVar2 = FUN_00067c30(0,0x30);
  if (iVar2 == 0) {
    FUN_0028ab50(s_not_enough_memory_00404860);
  }
  *(undefined4 *)(iVar2 + 0x14) = param_1;
  iVar1 = DAT_00469888;
  *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
  *(uint *)(iVar2 + 0x10) = (unaff_EDI == 0xffffffff) - 1 & unaff_EDI;
  *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) + 1;
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)iVar2 = iVar2;
  *(undefined4 *)(iVar2 + 8) = param_2;
  return iVar2;
}
