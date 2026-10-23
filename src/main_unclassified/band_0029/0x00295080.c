/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30FCF274532FD278656C404FDA9B38FD65653A5BEE41ACD55A11B135A4972746
 * Entry: 0x00295080, Ghidra index: 9309, label: FUN_00295080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b96e0;
extern uint32_t DAT_00469888;
extern uint32_t DAT_004a5b2c;
extern uint32_t PTR_s_gettable_003b9690;
extern uint32_t PTR_s_userdata_003b95ec;
extern char s____50s__is_not_a_valid_event_nam_004047e8[];
extern char s__d_is_not_a_valid_tag_004047a8[];
extern char s_cannot_change_tag_method____20s__00404738[];
extern char s_with_default_tag_00404770[];
void FUN_00295080(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EAX;
  int iVar5;
  char *pcVar6;
  undefined4 *unaff_EBX;
  undefined4 *puVar7;
  
  iVar5 = FUN_002951e0(&PTR_s_gettable_003b9690);
  if (iVar5 < 0) {
    FUN_00295370(s____50s__is_not_a_valid_event_nam_004047e8,param_1);
  }
  if ((in_EAX < *(int *)(DAT_00469888 + 0x68)) || (0 < in_EAX)) {
    FUN_00295370(s__d_is_not_a_valid_tag_004047a8);
  }
  if ((-7 < in_EAX) && ((&DAT_003b96e0)[iVar5 + in_EAX * -0x12] == '\0')) {
    if ((in_EAX == -3) || (pcVar6 = &DAT_004a5b2c, in_EAX == 0)) {
      pcVar6 = s_with_default_tag_00404770;
    }
    FUN_00295370(s_cannot_change_tag_method____20s__00404738,(&PTR_s_gettable_003b9690)[iVar5],
                 (&PTR_s_userdata_003b95ec)[-in_EAX],pcVar6);
  }
  uVar1 = *unaff_EBX;
  uVar2 = unaff_EBX[1];
  uVar3 = unaff_EBX[2];
  uVar4 = unaff_EBX[3];
  iVar5 = (iVar5 + in_EAX * -0x12) * 0x10;
  puVar7 = (undefined4 *)(*(int *)(DAT_00469888 + 100) + iVar5);
  *unaff_EBX = *puVar7;
  unaff_EBX[1] = puVar7[1];
  unaff_EBX[2] = puVar7[2];
  unaff_EBX[3] = puVar7[3];
  puVar7 = (undefined4 *)(*(int *)(DAT_00469888 + 100) + iVar5);
  *puVar7 = uVar1;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  return;
}
