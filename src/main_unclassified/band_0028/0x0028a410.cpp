/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A3A0F09AAD1DD1C9364768F2A5D6D558033EB07666146142E9556201E18D1D3
 * Entry: 0x0028a410, Ghidra index: 9159, label: FUN_0028a410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern uint32_t PTR_DAT_003b9760;
extern uint32_t _DAT_00469884;
extern char s_not_enough_memory_00404860[];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0028a410(void)

{
  int *piVar1;
  int iVar2;
  
  PTR_DAT_003b9760 = (undefined *)0x404874;
  _DAT_00469884 = 0x47;
  iVar2 = FUN_00067c30(0,0x800);
  if (iVar2 == 0) {
    FUN_0028ab50(s_not_enough_memory_00404860);
  }
  piVar1 = DAT_00469888;
  DAT_00469888[1] = iVar2;
  *piVar1 = iVar2;
  piVar1[2] = piVar1[1] + 0x7f0;
  return;
}
