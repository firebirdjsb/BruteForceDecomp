/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C29FE230A8877AF719237DB8997AB34A44B2BE8302D037185F72354D1170B0F
 * Entry: 0x002fec6c, Ghidra index: 11046, label: FUN_002fec6c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b4c;
extern uint32_t DAT_00414b50;
void FUN_002fec6c(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame__YAXPAUFrameInfo___Z(*(undefined4 *)(unaff_EBP + -0x30));
  DAT_00414b4c = *(undefined4 *)(unaff_EBP + -0x34);
  DAT_00414b50 = *(undefined4 *)(unaff_EBP + -0x38);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) && (unaff_ESI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x20) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar1 = FUN_002fe401(unaff_ESI[6]);
    if (iVar1 != 0) {
      FUN_002ef9a6();
      ___DestructExceptionObject();
    }
  }
  return;
}
