/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2C66BB5C5AADBE0B16DC1BCC80B86DAB23EF9680BD9B775F98769B4055E4883
 * Entry: 0x0007b710, Ghidra index: 1468, label: FUN_0007b710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
char FUN_0007b710(void)

{
  char cVar1;
  int unaff_ESI;
  
  cVar1 = FUN_000865a0(unaff_ESI + 0x590);
  if (cVar1 != '\0') {
    (**(code **)(*DAT_00469940 + 0x88))(0,*(undefined4 *)(unaff_ESI + 0x59c));
    (**(code **)(*DAT_00469940 + 0x88))(3,*(undefined4 *)(unaff_ESI + 0x59c));
    (**(code **)(*DAT_00469940 + 0x88))(2,*(undefined4 *)(unaff_ESI + 0x59c));
    (**(code **)(*DAT_00469940 + 0x88))(1,*(undefined4 *)(unaff_ESI + 0x5a0));
    (**(code **)(*DAT_00469940 + 0x90))();
    *(byte *)(unaff_ESI + 0x5bd) = *(byte *)(unaff_ESI + 0x5bd) | 8;
  }
  return cVar1;
}
