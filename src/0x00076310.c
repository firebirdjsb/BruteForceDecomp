/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5F9DF646F766100E35968F433749B4DABDC72AD388A094139EE2387F7001604
 * Entry: 0x00076310, Ghidra index: 1369, label: FUN_00076310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
extern uint32_t DAT_0046d064;
undefined4 * FUN_00076310(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) != 0) && (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2 != 0)) {
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    iVar1 = *(int *)(in_ECX + 4);
    if (iVar1 == 0) {
      return (undefined4 *)((DAT_0046cfd8 % 0) * 4);
    }
    return (undefined4 *)(iVar1 + (DAT_0046cfd8 % (uint)(*(int *)(in_ECX + 8) - iVar1 >> 2)) * 4);
  }
  return &DAT_0046d064;
}
