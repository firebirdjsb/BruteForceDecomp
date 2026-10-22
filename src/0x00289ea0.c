/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 188E5468F58EB87EC67FE78B40F4A7D134EF1EB6836113645D2486D50EF2EEE3
 * Entry: 0x00289ea0, Ghidra index: 9150, label: FUN_00289ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern uint32_t PTR_s_userdata_003b95ec;
extern char s_cannot_change_the_tag_of_a___20s_00404b4c[];
extern char s_tag__d_was_not_created_by__newta_00404784[];
void FUN_00289ea0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  
  FUN_00289520(1);
  if ((unaff_ESI < DAT_00469888[0x1a]) || (-7 < unaff_ESI)) {
    FUN_00295370(s_tag__d_was_not_created_by__newta_00404784);
  }
  piVar3 = DAT_00469888;
  iVar1 = *DAT_00469888;
  iVar2 = *(int *)(iVar1 + -0x10);
  if (iVar2 != -3) {
    if (iVar2 != 0) {
      FUN_00295370(s_cannot_change_the_tag_of_a___20s_00404b4c,(&PTR_s_userdata_003b95ec)[-iVar2]);
      *DAT_00469888 = *DAT_00469888 + -0x10;
      return;
    }
    *(int *)(*(int *)(iVar1 + -8) + 0x10) = unaff_ESI;
    *piVar3 = *piVar3 + -0x10;
    return;
  }
  *(int *)(*(int *)(iVar1 + -8) + 0x14) = unaff_ESI;
  *piVar3 = *piVar3 + -0x10;
  return;
}
