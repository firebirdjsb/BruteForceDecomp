/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 852B1AE7152BD3FFBAD212AFAD6A81BEABEF65B151E39149EF468F1F872F55EC
 * Entry: 0x00289ca0, Ghidra index: 9146, label: FUN_00289ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_tag__d_was_not_created_by__newta_00404784[];
void FUN_00289ca0(void)

{
  int in_EAX;
  undefined4 uVar1;
  uint *puVar2;
  
  if (((in_EAX < 0) && (in_EAX != -1)) && ((in_EAX < (int)DAT_00469888[0x1a] || (-7 < in_EAX)))) {
    FUN_00295370(s_tag__d_was_not_created_by__newta_00404784);
  }
  uVar1 = FUN_00294730();
  puVar2 = DAT_00469888;
  *(undefined4 *)(*DAT_00469888 + 8) = uVar1;
  *(undefined4 *)*puVar2 = 0;
  if (puVar2[2] <= *puVar2) {
    FUN_0028a460();
    puVar2 = DAT_00469888;
  }
  *puVar2 = *puVar2 + 0x10;
  if (puVar2[0x1d] <= puVar2[0x1e]) {
    FUN_002942f0(0);
  }
  return;
}
