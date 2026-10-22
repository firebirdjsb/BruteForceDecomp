/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF495C463443A051DD50ACC32DDADF042855C1683AD0E2EEBD89D0B47A5B6C4A
 * Entry: 0x00297be0, Ghidra index: 9356, label: FUN_00297be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00297be0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(DAT_00469888 + 0x14) < 1) || (*(int *)(DAT_00469888 + 0x10) == -1)) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_00289e20();
    if ((iVar2 != -2) && (iVar2 != -1)) {
      FUN_00295240();
    }
    uVar1 = FUN_00289a40();
  }
  iVar3 = FUN_0028aeb0(uVar1);
  iVar2 = DAT_00469888;
  if (iVar3 == 0) {
    *(undefined4 *)(DAT_00469888 + 0xc) = *(undefined4 *)(DAT_00469888 + 0x10);
    if (*(int *)(iVar2 + 0x14) == 0) {
      FUN_00289ca0();
    }
  }
  return;
}
