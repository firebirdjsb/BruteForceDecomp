/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93FF272318D772D50E7E8661A7DB3075153806E9825FA30B18504199D366606D
 * Entry: 0x00232920, Ghidra index: 7769, label: FUN_00232920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfdc;
extern uint32_t DAT_0046d064;
undefined4 * FUN_00232920(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) != 0) && (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2 != 0)) {
    DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
    iVar1 = *(int *)(in_ECX + 4);
    if (iVar1 == 0) {
      return (undefined4 *)((DAT_0046cfdc % 0) * 4);
    }
    return (undefined4 *)(iVar1 + (DAT_0046cfdc % (uint)(*(int *)(in_ECX + 8) - iVar1 >> 2)) * 4);
  }
  return &DAT_0046d064;
}
