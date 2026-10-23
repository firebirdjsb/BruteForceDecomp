/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C8E7423D1FCD30BE84CB6430D0AEC30ACD54477893A8E75FF852974AD292A79
 * Entry: 0x00206390, Ghidra index: 7298, label: FUN_00206390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00206390(undefined4 param_1)

{
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x44) != 0) && ((*(byte *)(unaff_ESI + 0x8d) & 8) == 0)) {
    (**(code **)(*DAT_00469940 + 0x20))(*(int *)(unaff_ESI + 0x44),param_1);
    *(undefined4 *)(unaff_ESI + 0x44) = 0;
  }
  return;
}
