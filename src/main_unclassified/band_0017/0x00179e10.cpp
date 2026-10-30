/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C7FA62CFE5B79A3065FE847291A921302BF56F2E42E53F1093D47E2ED4C3644
 * Entry: 0x00179e10, Ghidra index: 4996, label: FUN_00179e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00179e10(void)

{
  int iVar1;
  int unaff_ESI;
  
  if ((*(byte *)(unaff_ESI + 4) & 4) == 0) {
    iVar1 = *(int *)(unaff_ESI + 0x34);
    *(byte *)(unaff_ESI + 4) = *(byte *)(unaff_ESI + 4) | 4;
    if (iVar1 != 0) {
      if (((*(byte *)(unaff_ESI + 0x44) & 1) != 0) && (1.0 < *(float *)(unaff_ESI + 0x40))) {
        (**(code **)(*DAT_00469940 + 0x54))(iVar1,1);
        return;
      }
      (**(code **)(*DAT_00469940 + 0x20))(iVar1,1);
      *(undefined4 *)(unaff_ESI + 0x34) = 0;
      *(undefined4 *)(unaff_ESI + 0x40) = 0;
    }
  }
  return;
}
