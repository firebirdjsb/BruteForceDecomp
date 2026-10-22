/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08DD6EF79AEF9E11875B5AEA37A2CBD74E666FE0B6FDDDB9F95E4CF27A4B6EB3
 * Entry: 0x003826ea, Ghidra index: 13602, label: FUN_003826ea
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-tied callee source: FUN_0038267d; callback ABI remains ABI_UNVERIFIED.
 * Provisional C11 declaration only; not a verified link/runtime contract. */
extern void FUN_0038267d(undefined4 param_1,int param_2);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412721;
extern uint32_t DAT_00412723;
extern uint32_t DAT_00412724;
extern uint32_t DAT_00412725;
extern uint32_t DAT_00412770;
extern uint32_t _DAT_0041272c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003826ea(int param_1)

{
  int unaff_retaddr;
  
  KeCancelTimer(&DAT_00412770);
  DAT_00412723 = 3;
  if ((*(int *)(unaff_retaddr + 4) < 0) || (_DAT_0041272c = (code *)0x382269, DAT_00412721 != '\0'))
  {
    _DAT_0041272c = FUN_0038267d;
  }
  DAT_00412724 = 0x1c;
  DAT_00412725 = 0x43;
  FUN_00383a75(*(int *)(param_1 + 0xc) + 0x18,&DAT_00412724);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}
