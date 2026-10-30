/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F60C0DD6C279EE5D04726A867B02BBA05E8DE760EA1726042FFBE4254196AEAF
 * Entry: 0x0006f2b0, Ghidra index: 1260, label: FUN_0006f2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a2640;
extern uint32_t PTR_LAB_003a2810;
void FUN_0006f2b0(void)

{
  undefined4 *unaff_EDI;
  
  *unaff_EDI = PTR_LAB_003a2640;
  unaff_EDI[0x12] = PTR_LAB_003a2810;
  if (unaff_EDI[0x83] != 0) {
    FUN_0016ad50();
    if ((undefined4 *)unaff_EDI[0x83] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)unaff_EDI[0x83])(1);
    }
    unaff_EDI[0x83] = 0;
  }
  if ((undefined4 *)unaff_EDI[0x82] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)unaff_EDI[0x82])(1);
    unaff_EDI[0x82] = 0;
  }
  if (unaff_EDI[0x52] != 0) {
    FUN_0008f6e0();
  }
  FUN_0006bd50();
  return;
}
