/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A35C40578B272BFCB12B8D5548FFC51CEF18F799236D13EE94EA2B798A40A318
 * Entry: 0x0029c720, Ghidra index: 9444, label: FUN_0029c720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_bad_code_in__s_00403e58[];
extern char s_unexpected_end_of_file_in__s_00403e8c[];
int FUN_0029c720(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_0029c5b0();
  uVar2 = FUN_0029c5b0();
  uVar2 = uVar2 | iVar1 << 0x10;
  iVar1 = FUN_00294b90(0,uVar2 + 5);
  iVar3 = FUN_0029c530(iVar1,uVar2);
  if (iVar3 != 0) {
    FUN_00295370(s_unexpected_end_of_file_in__s_00403e8c,*(undefined4 *)(in_EAX + 0x10));
  }
  if (*(char *)((uVar2 - 1) + iVar1) != '\0') {
    FUN_00295370(s_bad_code_in__s_00403e58,*(undefined4 *)(in_EAX + 0x10));
  }
  *(undefined4 *)(uVar2 + iVar1) = 0;
  *(undefined1 *)((undefined4 *)(uVar2 + iVar1) + 1) = 0;
  return iVar1;
}
