/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1922BB7DCD60E475F8B8FB9A01D018DDB1A33CEBB28ABC473B37C6C4E7403A20
 * Entry: 0x0025c970, Ghidra index: 8558, label: FUN_0025c970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b2c8;
undefined4 FUN_0025c970(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80004005;
  RtlEnterCriticalSection(&DAT_0046b2c8);
  iVar2 = FUN_0025c2b0();
  if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + 4), *param_2 = iVar1, iVar1 != 0)) {
    (**(code **)(**(int **)(iVar2 + 4) + 4))(*(int **)(iVar2 + 4));
    uVar3 = 0;
  }
  RtlLeaveCriticalSection(&DAT_0046b2c8);
  return uVar3;
}
