/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8B1C49C4F86FC3A9F59B0F031A91578B897F97387D606BE18524DA0847E2DDB
 * Entry: 0x0029ae00, Ghidra index: 9418, label: FUN_0029ae00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9378;
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_ill_formed_expression_00403f68[];
void FUN_0029ae00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_58 [8];
  undefined1 local_50 [80];
  
  FUN_0029aeb0(param_1,local_58);
  FUN_00299cd0();
  puVar1 = &DAT_003b9378;
  if (DAT_003b9378 != 0) {
    iVar2 = DAT_003b9378;
    do {
      if (iVar2 == *(int *)(param_1 + 4)) {
        if (-1 < (int)(puVar1 + -0xee4de) >> 2) {
          return;
        }
        break;
      }
      iVar2 = puVar1[1];
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0);
  }
  FUN_0029d580(0);
  pcVar3 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
  FUN_002953d0();
  if (*pcVar3 == '\0') {
    pcVar3 = s_<eof>_00404598;
  }
  FUN_00295370(s___100s__last_token_read_____50s__00404560,s_ill_formed_expression_00403f68,pcVar3,
               *(undefined4 *)(param_1 + 0x1c),local_50);
  return;
}
