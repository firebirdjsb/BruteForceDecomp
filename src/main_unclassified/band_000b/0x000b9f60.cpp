/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0F45102F1BC62F565DD28096F1CF3089A096884F80E496F0003B8918FF7DF42
 * Entry: 0x000b9f60, Ghidra index: 2246, label: FUN_000b9f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_000bcb90(void);
extern undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern void FUN_000b2a50(void);

undefined4 FUN_000b9f60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar1 = FUN_002ea01d(0x118);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000bcb90();
  }
  iVar1 = *(int *)(param_1 + 0x1348);
  local_4 = uVar2;
  iVar3 = FUN_000ff730(param_1 + 0x1344,iVar1,*(undefined4 *)(iVar1 + 4),&local_4);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  return uVar2;
}
