/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6511F5D976C5904ABF7B570CCFEEF87F9ABAE2B3DC9200893CD4BA7CCC1BFF7E
 * Entry: 0x002a2d10, Ghidra index: 9531, label: FUN_002a2d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
void FUN_002a2d10(void)

{
  int unaff_ESI;
  
  *(undefined ***)(unaff_ESI + 0x60) = &PTR_FUN_003a35a8;
  *(undefined ***)(unaff_ESI + 0x68) = &PTR_FUN_003a35a4;
  if ((*(int *)(unaff_ESI + 0x6c) != 0) && (*(int *)(unaff_ESI + 0x70) != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x70));
  }
  *(undefined ***)(unaff_ESI + 0x40) = &PTR_FUN_003a35a8;
  *(undefined ***)(unaff_ESI + 0x48) = &PTR_FUN_003a35a4;
  if ((*(int *)(unaff_ESI + 0x4c) != 0) && (*(int *)(unaff_ESI + 0x50) != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x50));
  }
  FUN_00060c00();
  return;
}
