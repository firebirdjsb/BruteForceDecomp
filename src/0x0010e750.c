/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 057C63DF46248BAD32E70DACC289D3A1E27DF69936458EC7E2CBDE596C447F1D
 * Entry: 0x0010e750, Ghidra index: 3515, label: FUN_0010e750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_0010e750(void)

{
  char cVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 8) != 0) {
    cVar1 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(unaff_ESI + 8));
    if (cVar1 != '\0') {
      (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(unaff_ESI + 8),0);
      *(undefined4 *)(unaff_ESI + 8) = 0;
      *(byte *)(unaff_ESI + 0x1c) = *(byte *)(unaff_ESI + 0x1c) & 0xdf;
      return;
    }
    (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(unaff_ESI + 8),1);
    *(undefined4 *)(unaff_ESI + 8) = 0;
  }
  *(byte *)(unaff_ESI + 0x1c) = *(byte *)(unaff_ESI + 0x1c) & 0xdf;
  return;
}
