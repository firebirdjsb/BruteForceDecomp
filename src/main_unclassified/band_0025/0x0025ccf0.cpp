/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8417B894AEE2FF9796E8168E2121A7AD2819FFB8155CAABC466AFEBB4FE042EA
 * Entry: 0x0025ccf0, Ghidra index: 8559, label: FUN_0025ccf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b2c8;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0025ccf0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_retaddr;
  
  if (param_2 == (int *)0xffffffff) {
    return 0x80004005;
  }
  uVar3 = 0x80004005;
  RtlEnterCriticalSection(&DAT_0046b2c8);
  if (param_2 == (int *)0x0) {
    _DAT_00000000 = *(undefined4 *)(unaff_retaddr + 0x10);
    RtlLeaveCriticalSection(&DAT_0046b2c8);
    return 0;
  }
  piVar1 = (int *)FUN_0025d440();
  iVar2 = *piVar1;
  if (iVar2 != *(int *)(unaff_retaddr + 0x18)) {
    if (*(int *)(iVar2 + 0x18) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2;
    }
    *param_2 = iVar2;
    uVar3 = 0;
  }
  RtlLeaveCriticalSection(&DAT_0046b2c8);
  return uVar3;
}
