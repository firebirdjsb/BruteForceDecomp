/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A02308E6A8E868E488ACFDCFF8F4CDAEE9778E695DECD47CBC8204C3140AC5EF
 * Entry: 0x00039920, Ghidra index: 407, label: FUN_00039920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00055650(void);

extern uint32_t PTR_FUN_003a479c;
extern uint32_t PTR_FUN_003a4f64;
void FUN_00039920(void)

{
  undefined4 *in_EAX;
  undefined4 unaff_EBX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_003a479c;
  unaff_ESI[4] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[1] = &PTR_FUN_003a4f64;
  unaff_ESI[7] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[10] = 0;
  *(byte *)(unaff_ESI + 0xe) = *(byte *)(unaff_ESI + 0xe) & 0xfe;
  *(byte *)(unaff_ESI + 0xf) = *(byte *)(unaff_ESI + 0xf) & 0xfe;
  if (unaff_ESI + 1 != in_EAX) {
    FUN_00055650();
  }
  unaff_ESI[2] = unaff_EBX;
  return;
}
