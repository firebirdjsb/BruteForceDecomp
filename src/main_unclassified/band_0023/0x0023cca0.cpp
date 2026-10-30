/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2ED7F2401C53E947B6A5A2952011738C5CC87A56FEB2EB9C8D169BDC3F7C3E81
 * Entry: 0x0023cca0, Ghidra index: 7943, label: FUN_0023cca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00394068;
void FUN_0023cca0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_LAB_00394068;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  if (unaff_ESI[2] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[2]);
  }
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[6] = unaff_ESI[6] & 0x7fffffff;
  return;
}
