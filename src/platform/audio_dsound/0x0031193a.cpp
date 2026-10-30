/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E17B02ED625F054E3774194E9AEE2029B0276F7CD9D573FD4E64953BC7F2BC01
 * Entry: 0x0031193a, Ghidra index: 11900, label: FUN_0031193a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f798;
extern uint32_t DAT_0032fe6c;
void FUN_0031193a(void)

{
  int iVar1;
  int unaff_FS_OFFSET;
  
  iVar1 = DAT_0032f798;
  if ((*(int *)(unaff_FS_OFFSET + 0x58) != 0) && (DAT_0032f798 = DAT_0032f798 + 1, iVar1 == 0)) {
    KeSaveFloatingPointState(&DAT_0032fe6c);
  }
  return;
}
