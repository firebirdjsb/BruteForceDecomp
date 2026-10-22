/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C181E3E5EC08414875A78D82FAD84F1830775FC61A6914A5A24F2F1280688B1
 * Entry: 0x00178b20, Ghidra index: 4975, label: FUN_00178b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469990;
extern uint32_t DAT_00469994;
void FUN_00178b20(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002ea01d(0xc);
  if (iVar1 != 0) {
    uVar2 = FUN_00061500(iVar1);
    *(undefined4 *)(iVar1 + 4) = uVar2;
    *(undefined4 *)(iVar1 + 8) = 0;
    DAT_00469990 = iVar1;
    DAT_00469994 = 1;
    return;
  }
  DAT_00469990 = 0;
  DAT_00469994 = 1;
  return;
}
