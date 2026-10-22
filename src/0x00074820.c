/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38D84A37B16110B1A71951F87ED0E622D5E9703FE6A55A784715B2EDD4CCB1C0
 * Entry: 0x00074820, Ghidra index: 1327, label: FUN_00074820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00074820(void)

{
  char cVar1;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 4) != 0) && (*(int *)(unaff_ESI + 8) != 0)) {
    if (*(int *)(unaff_ESI + 0xc) != 0) {
      cVar1 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(unaff_ESI + 0xc));
      if (cVar1 != '\0') {
        (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(unaff_ESI + 0xc),0);
      }
    }
    if ((*(int *)(unaff_ESI + 4) != 0) && (*(int *)(unaff_ESI + 8) != 0)) {
      *(undefined4 *)(unaff_ESI + 8) = 0;
      *(undefined4 *)(unaff_ESI + 0xc) = 0;
    }
  }
  return;
}
