/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E47F7F988E5B92AB95982F2CC532483D24207E2E8B7A9FB45C576C4D85B6891
 * Entry: 0x002927e0, Ghidra index: 9255, label: FUN_002927e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00404954;
extern uint32_t DAT_00469888;
void FUN_002927e0(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar1 = (char *)&DAT_00404954;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  pcVar2 = pcVar2 + -0x404954;
  if (pcVar2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)((uint)DAT_00404954 * (int)pcVar2) % 0x1f;
  }
  FUN_00294640(&DAT_00404954,pcVar2,*(int *)(DAT_00469888 + 0x60) + iVar3 * 0xc);
  FUN_00293f40();
  return;
}
