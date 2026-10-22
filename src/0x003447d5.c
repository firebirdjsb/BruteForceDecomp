/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF070E143A8C157F2D8865B7DDFCE112494AF5E3A2A25128C41770031DE5A92F
 * Entry: 0x003447d5, Ghidra index: 12740, label: FUN_003447d5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b1420;
bool FUN_003447d5(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_003430ea(param_2,&DAT_004b1420,4);
  iVar2 = FUN_003437b3(param_1,iVar1 + param_2);
  if (iVar2 != 0) {
    FUN_0034310e(param_1,param_2,iVar1);
  }
  return iVar2 != 0;
}
