/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 158EA3A6C01F4E74012E17B4CA717729BD746995F5A9DAD7892F788BFC6552FC
 * Entry: 0x0029a240, Ghidra index: 9403, label: FUN_0029a240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9170;
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s___s__expected__to_close___s__at_l_00403fb8[];
void FUN_0029a240(int param_1)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  char *pcVar3;
  char local_d8 [16];
  char local_c8 [16];
  undefined1 local_b8 [80];
  undefined1 local_68 [104];
  
  if (in_ECX == *(int *)(param_1 + 0x1c)) {
    FUN_0029a130();
    return;
  }
  if (in_EAX < 0xff) {
    local_d8[0] = (char)in_EAX;
    local_d8[1] = 0;
  }
  else {
    pcVar3 = *(char **)(&DAT_003b9170 + in_EAX * 4);
    iVar2 = -(int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)(local_d8 + iVar2)] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  if (in_EDX < 0xff) {
    local_c8[0] = (char)in_EDX;
    local_c8[1] = 0;
  }
  else {
    pcVar3 = *(char **)(&DAT_003b9170 + in_EDX * 4);
    iVar2 = -(int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)(local_c8 + iVar2)] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  FUN_002eaa86(local_68,s___s__expected__to_close___s__at_l_00403fb8,local_d8,local_c8);
  FUN_0029d580(0);
  pcVar3 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
  FUN_002953d0();
  if (*pcVar3 == '\0') {
    pcVar3 = s_<eof>_00404598;
  }
  FUN_00295370(s___100s__last_token_read_____50s__00404560,local_68,pcVar3,
               *(undefined4 *)(param_1 + 0x1c),local_b8);
  return;
}
