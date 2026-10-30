/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CE7FD9D9BC4D6F77E95EBDFFD8D7F549F0100D0380FB6FC4B80B70894B869A8
 * Entry: 0x00023b20, Ghidra index: 240, label: FUN_00023b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a479c;
extern uint32_t PTR_FUN_003a4f64;
void FUN_00023b20(undefined4 param_1)

{
  int in_ECX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = PTR_FUN_003a479c;
  unaff_EDI[4] = 0;
  unaff_EDI[9] = 0;
  unaff_EDI[2] = 0;
  unaff_EDI[1] = PTR_FUN_003a4f64;
  unaff_EDI[7] = 0;
  unaff_EDI[6] = 0;
  unaff_EDI[5] = 0;
  unaff_EDI[0xb] = 0;
  unaff_EDI[0xc] = 0;
  unaff_EDI[0xd] = 0;
  unaff_EDI[10] = 0;
  *(byte *)(unaff_EDI + 0xe) = *(byte *)(unaff_EDI + 0xe) & 0xfe;
  *(byte *)(unaff_EDI + 0xf) = *(byte *)(unaff_EDI + 0xf) & 0xfe;
  unaff_EDI[2] = param_1;
  if (unaff_EDI[9] != in_ECX) {
    FUN_0008f6a0();
  }
  return;
}
