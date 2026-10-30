/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54816CA382C5C989B4B985022736B99C2CEEFFBEEBFC81F319AAFDE1FC9DA432
 * Entry: 0x0029bf00, Ghidra index: 9434, label: FUN_0029bf00
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
extern char s_code_size_overflow_004040f0[];
extern char s_invalid_constructor_syntax_00403ec4[];
void FUN_0029bf00(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_ESI;
  char *pcVar3;
  undefined1 local_64 [4];
  int local_60;
  undefined1 local_5c [4];
  int local_58;
  undefined1 local_54 [84];
  
  piVar1 = *(int **)(unaff_ESI + 8);
  uVar2 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*piVar1 + 0x10) = uVar2;
  *(int *)(*(int *)(unaff_ESI + 8) + 8) = *(int *)(*(int *)(unaff_ESI + 8) + 8) + 2;
  FUN_00299360();
  if (*(int *)(unaff_ESI + 4) != 0x7b) {
    FUN_0029a130();
  }
  uVar2 = FUN_00296110();
  *(undefined4 *)(unaff_ESI + 4) = uVar2;
  FUN_0029c080(local_64);
  if (*(int *)(unaff_ESI + 4) == 0x3b) {
    uVar2 = FUN_00296110();
    *(undefined4 *)(unaff_ESI + 4) = uVar2;
    FUN_0029c080(local_5c);
    if (local_60 == local_58) {
      FUN_0029d580(0);
      pcVar3 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
      FUN_002953d0();
      if (*pcVar3 == '\0') {
        pcVar3 = BF_XBE_DATA_00404598;
      }
      FUN_00295370(s___100s__last_token_read_____50s__00404560,s_invalid_constructor_syntax_00403ec4
                   ,pcVar3,*(undefined4 *)(unaff_ESI + 0x1c),local_54);
    }
  }
  if (*(int *)(unaff_ESI + 4) != 0x7d) {
    FUN_0029a240();
  }
  if ((*(int *)(DAT_00469888 + 0x34) != 0) &&
     (*(int *)(unaff_ESI + 0x1c) != *(int *)(*(int *)(unaff_ESI + 8) + 0x20))) {
    FUN_00299580(0x3c,*(int *)(unaff_ESI + 0x1c),0);
    *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  }
  uVar2 = FUN_00296110();
  *(undefined4 *)(unaff_ESI + 4) = uVar2;
  FUN_002994d0();
  return;
}
