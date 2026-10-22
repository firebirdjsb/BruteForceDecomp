/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B439B35DE8A8E1A57DA698A23E957849B42EE292887B0A54C81C5A42C4C49EE
 * Entry: 0x0029f5d0, Ghidra index: 9488, label: FUN_0029f5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aec;
extern uint32_t DAT_0046b2e8;
void FUN_0029f5d0(void)

{
  undefined4 *unaff_ESI;
  int iVar1;
  undefined4 local_4;
  
  if (unaff_ESI[1] == 0x303) {
    iVar1 = 2;
    if (DAT_00469aec == 2) goto LAB_0029f610;
  }
  else {
    iVar1 = 1;
    if (DAT_00469aec == 1) goto LAB_0029f610;
  }
  FUN_000a51e0(&DAT_0046b2e8);
  DAT_00469aec = iVar1;
LAB_0029f610:
  local_4 = 0;
  FUN_0006a610(&local_4);
  local_4 = 0;
  FUN_0006a610(&local_4);
  local_4 = *unaff_ESI;
  FUN_0006a610(&local_4);
  local_4 = unaff_ESI[1];
  FUN_0006a610(&local_4);
  return;
}
