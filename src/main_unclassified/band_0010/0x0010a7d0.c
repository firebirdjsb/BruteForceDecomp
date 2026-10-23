/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 258E550BE534906956CB868EE129DA6682F168E127F8556F3B07FB3DB5D62162
 * Entry: 0x0010a7d0, Ghidra index: 3429, label: FUN_0010a7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5ba4;
void FUN_0010a7d0(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_EDI == 0) {
    uVar1 = FUN_002eaa70(&DAT_004a5ba4);
    FUN_000876a0(unaff_ESI + 0x60,uVar1);
    FUN_0010a740(unaff_ESI);
    return;
  }
  uVar1 = FUN_002eaa70();
  FUN_000876a0(unaff_ESI + 0x60,uVar1);
  FUN_0010a740(unaff_ESI);
  if (*(float *)(unaff_ESI + 0xe0) < 0.0 != (*(float *)(unaff_ESI + 0xe0) == 0.0)) {
    FUN_0010aac0();
    return;
  }
  *(undefined4 *)(unaff_ESI + 0xe4) = 0;
  *(undefined4 *)(unaff_ESI + 0xe8) = 0;
  return;
}
