/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3F6576D8E1BED7AB12FEADE0072EA15B8173FCA746EBD60375C3CC4798CFF28
 * Entry: 0x00297800, Ghidra index: 9351, label: FUN_00297800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00297800(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(DAT_00469888 + 0x14) < 3) || (*(int *)(DAT_00469888 + 0x10) == -3)) {
    FUN_00295240();
  }
  FUN_00289d80();
  iVar2 = DAT_00469888;
  iVar1 = FUN_00289e20();
  if ((iVar1 != -2) && (iVar1 != -1)) {
    FUN_00295240();
    iVar2 = DAT_00469888;
  }
  if (((*(int *)(iVar2 + 0x14) < 1) || (iVar1 = *(int *)(iVar2 + 0x10) + 1, iVar1 == 0)) ||
     ((*(int *)(*(int *)(iVar2 + 4) + -0x10 + iVar1 * 0x10) != -1 &&
      (iVar2 = FUN_00292690(), iVar2 != 0)))) {
    FUN_00295240();
  }
  FUN_002899f0();
  uVar3 = FUN_00289a40();
  FUN_00289520(1);
  FUN_002ebf10(uVar3);
  FUN_00295080();
  FUN_00289600();
  FUN_00289d80();
  return;
}
