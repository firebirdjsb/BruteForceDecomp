/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F048DC97A9908AEC8EC015A400288DA5CA172849F098392A901F25311DFA9295
 * Entry: 0x00274b10, Ghidra index: 8877, label: FUN_00274b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046988c;
extern uint32_t PTR_LAB_003923c0;
void FUN_00274b10(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[3] = DAT_0046988c;
  unaff_ESI[2] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = &PTR_LAB_003923c0;
  DAT_0046988c = DAT_0046988c + 1;
  unaff_ESI[5] = 0xffffffff;
  unaff_ESI[6] = 0xffffffff;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0xd] = 0xffffffff;
  unaff_ESI[0xf] = 0xffffffff;
  unaff_ESI[0x10] = 0xffffffff;
  FUN_00274b80(param_1);
  unaff_ESI[0xd] = unaff_ESI[3];
  return;
}
