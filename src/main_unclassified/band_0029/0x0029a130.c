/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EEECADDCA137C5C3E9F350B236424E55B8DB8956AF4E4F66163BD8C6994CB954
 * Entry: 0x0029a130, Ghidra index: 9401, label: FUN_0029a130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_data_label_00404598.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9170;
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s___s__expected_00403ff8[];
void FUN_0029a130(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  char *pcVar3;
  int unaff_EDI;
  char local_cc [16];
  undefined1 local_bc [80];
  undefined1 local_6c [108];
  
  if (in_EAX < 0xff) {
    local_cc[0] = (char)in_EAX;
    local_cc[1] = 0;
  }
  else {
    pcVar3 = *(char **)(&DAT_003b9170 + in_EAX * 4);
    iVar2 = -(int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)(local_cc + iVar2)] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  FUN_002eaa86(local_6c,s___s__expected_00403ff8,local_cc);
  FUN_0029d580(0);
  pcVar3 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
  FUN_002953d0();
  if (*pcVar3 == '\0') {
    pcVar3 = BF_XBE_DATA_00404598;
  }
  FUN_00295370(s___100s__last_token_read_____50s__00404560,local_6c,pcVar3,
               *(undefined4 *)(unaff_EDI + 0x1c),local_bc);
  return;
}
