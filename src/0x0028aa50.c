/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70A600E65D1B072CE1B45D83CB9B7007C6355D10C8E9125D8979A6D56C4ADD2D
 * Entry: 0x0028aa50, Ghidra index: 9169, label: FUN_0028aa50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_0028aa50(void)

{
  int iVar1;
  code *unaff_EBX;
  int iVar2;
  
  iVar1 = (*DAT_00469888 - DAT_00469888[1]) + -0x10 >> 4;
  if (-1 < iVar1) {
    iVar2 = iVar1 << 4;
    iVar1 = iVar1 + 1;
    do {
      (*unaff_EBX)(DAT_00469888[1] + iVar2);
      iVar2 = iVar2 + -0x10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
