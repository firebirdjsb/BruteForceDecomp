/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0D48697881FBCE9597A31969D4E11664594BAC4DAB9250A39868A6B0678A8DC
 * Entry: 0x00297900, Ghidra index: 9352, label: FUN_00297900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00297900(void)

{
  int iVar1;
  int iVar2;
  
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
  FUN_00289a40();
  FUN_002ebf10();
  FUN_00295000();
  FUN_00289580();
  FUN_00289d80();
  return;
}
