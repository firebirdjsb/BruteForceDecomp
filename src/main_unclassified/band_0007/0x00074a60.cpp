/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A948831FBCEDD0E0B6C0CF699BC0673FB1408B3E4EE3D48C0EEF1AD209D09494
 * Entry: 0x00074a60, Ghidra index: 1330, label: FUN_00074a60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00074a60(float param_1)

{
  char cVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    return;
  }
  if (*(int *)(unaff_ESI + 8) != 0) {
    if (*(int *)(unaff_ESI + 0xc) != 0) {
      cVar1 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(unaff_ESI + 0xc));
      if (cVar1 != '\0') goto LAB_00074ab2;
    }
    (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(unaff_ESI + 0xc),0);
    if ((*(int *)(unaff_ESI + 4) != 0) && (*(int *)(unaff_ESI + 8) != 0)) {
      *(undefined4 *)(unaff_ESI + 8) = 0;
      *(undefined4 *)(unaff_ESI + 0xc) = 0;
    }
  }
LAB_00074ab2:
  *(float *)(unaff_ESI + 0x1c) = param_1 + *(float *)(unaff_ESI + 0x1c);
  FUN_00074d80();
  return;
}
