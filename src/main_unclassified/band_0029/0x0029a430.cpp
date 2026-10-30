/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B25D9FE1ED0E49CB87D5B3E8CECB18221CCBB2951E11E3AA6B2D20D05852335
 * Entry: 0x0029a430, Ghidra index: 9407, label: FUN_0029a430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_parser_data_labels_x86.h"
#include "bf_xbe_data_label_00404598.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
undefined4 FUN_0029a430(void)

{
  byte bVar1;
  byte *pbVar2;
  int in_EAX;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 local_49c [80];
  undefined4 local_44c;
  
  FUN_002959a0();
  iVar6 = DAT_00469888;
  *(undefined4 *)(DAT_00469888 + 0x28) = *(undefined4 *)(DAT_00469888 + 0x20);
  pbVar2 = *(byte **)(in_EAX + 0x10);
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  iVar4 = (int)pbVar3 - (int)(pbVar2 + 1);
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)((uint)*pbVar2 * iVar4) % 0x1f;
  }
  uVar5 = FUN_00294640(pbVar2,iVar4,*(int *)(iVar6 + 0x60) + iVar7 * 0xc);
  FUN_00299fb0(uVar5);
  iVar6 = FUN_00296110();
  FUN_0029a580();
  FUN_0029ad50();
  if (iVar6 != 0x11d) {
    FUN_0029d580(0);
    pcVar8 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
    FUN_002953d0();
    if (*pcVar8 == '\0') {
      pcVar8 = BF_XBE_DATA_00404598;
    }
    FUN_00295370(s___100s__last_token_read_____50s__00404560,BF_XBE_DATA_00403F98,pcVar8,0,
                 local_49c);
  }
  FUN_0029a0a0();
  return local_44c;
}
