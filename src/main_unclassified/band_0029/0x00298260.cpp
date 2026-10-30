/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D527F31DCF7097A0B34F38114F8326C8745FC20AE9DA2372E6F7CBC6866E42C1
 * Entry: 0x00298260, Ghidra index: 9359, label: FUN_00298260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern uint32_t DAT_004a5b2c;
extern char s_assertion_failed____100s_00404288[];
void FUN_00298260(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)(DAT_00469888 + 0x14) < 1) ||
      (iVar1 = *(int *)(DAT_00469888 + 0x10) + 1, iVar1 == 0)) ||
     (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) == -6)) {
    if ((*(int *)(DAT_00469888 + 0x14) < 2) || (*(int *)(DAT_00469888 + 0x10) == -2)) {
      FUN_00295370(s_assertion_failed____100s_00404288,&DAT_004a5b2c);
      return;
    }
    iVar1 = FUN_00289e20();
    if ((iVar1 != -2) && (iVar1 != -1)) {
      FUN_00295240();
    }
    uVar2 = FUN_00289a40();
    FUN_00295370(s_assertion_failed____100s_00404288,uVar2);
  }
  return;
}
