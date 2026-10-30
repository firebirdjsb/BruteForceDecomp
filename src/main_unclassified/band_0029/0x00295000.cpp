/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF0AC615200122B384374AB08B14F971A6EA8BA96444ACFDF0D1D0D594F7760F
 * Entry: 0x00295000, Ghidra index: 9308, label: FUN_00295000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9620;
extern uint32_t DAT_003b96e0;
extern uint32_t DAT_00469888;
extern uint32_t PTR_s_gettable_003b9690;
extern char s____50s__is_not_a_valid_event_nam_004047e8[];
extern char s__d_is_not_a_valid_tag_004047a8[];
undefined * FUN_00295000(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_002951e0(&PTR_s_gettable_003b9690);
  if (iVar1 < 0) {
    FUN_00295370(s____50s__is_not_a_valid_event_nam_004047e8);
  }
  if ((unaff_ESI < *(int *)(DAT_00469888 + 0x68)) || (0 < unaff_ESI)) {
    FUN_00295370(s__d_is_not_a_valid_tag_004047a8);
  }
  if ((-7 < unaff_ESI) && ((&DAT_003b96e0)[iVar1 + unaff_ESI * -0x12] == '\0')) {
    return &DAT_003b9620;
  }
  return (undefined *)((iVar1 + unaff_ESI * -0x12) * 0x10 + *(int *)(DAT_00469888 + 100));
}
