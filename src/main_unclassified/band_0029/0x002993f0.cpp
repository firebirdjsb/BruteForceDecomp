/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDB8B0E7789D6A205777093301D0A0DF52E8B0B4D43FA99CA99F6E5F88F595D5
 * Entry: 0x002993f0, Ghidra index: 9374, label: FUN_002993f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_data_label_00404598.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_code_too_long_004040c0[];
void FUN_002993f0(int param_1,char param_2)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  char *pcVar2;
  undefined1 local_50 [80];
  
  iVar1 = *(int *)(**(int **)(param_1 + 8) + 0x10);
  FUN_00299360(param_1);
  if (in_EAX < 0x100) {
    *(char *)(iVar1 + in_ECX) = param_2;
    *(char *)(iVar1 + 1 + in_ECX) = (char)in_EAX;
    return;
  }
  if (0xffffff < in_EAX) {
    FUN_0029d580(0);
    pcVar2 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
    FUN_002953d0();
    if (*pcVar2 == '\0') {
      pcVar2 = BF_XBE_DATA_00404598;
    }
    FUN_00295370(s___100s__last_token_read_____50s__00404560,s_code_too_long_004040c0,pcVar2,
                 *(undefined4 *)(param_1 + 0x1c),local_50);
    return;
  }
  if (0xffff < in_EAX) {
    *(undefined1 *)(iVar1 + in_ECX) = 0x3e;
    *(char *)(iVar1 + 1 + in_ECX) = (char)((uint)in_EAX >> 0x10);
    in_ECX = in_ECX + 2;
  }
  *(char *)(iVar1 + 2 + in_ECX) = (char)in_EAX;
  *(char *)(iVar1 + in_ECX) = param_2 + -1;
  *(char *)(iVar1 + 1 + in_ECX) = (char)((uint)in_EAX >> 8);
  return;
}
