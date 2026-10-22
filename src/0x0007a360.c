/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72CA7889298E1CE8AF2A46A6BEE071D02FF5524411A928C2B370A34A3932BBA9
 * Entry: 0x0007a360, Ghidra index: 1455, label: FUN_0007a360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_0007a360(void)

{
  char cVar1;
  int *unaff_ESI;
  byte bStack_c;
  
  cVar1 = (**(code **)(*unaff_ESI + 0x24))();
  if (cVar1 != '\0') {
    (**(code **)(*DAT_00469940 + 0x70))(0,*(byte *)(unaff_ESI + 0x16f) >> 1 & 1);
    bStack_c = *(byte *)(unaff_ESI + 0x16f) >> 1 & 1;
    (**(code **)(*DAT_00469940 + 0x70))(3);
    if (bStack_c != 0) {
      (**(code **)(*DAT_00469940 + 0x70))(2,*(byte *)(unaff_ESI + 0x16f) >> 1 & 1);
      (**(code **)(*DAT_00469940 + 0x70))(1,*(byte *)(unaff_ESI + 0x16f) >> 1 & 1);
    }
  }
  return;
}
