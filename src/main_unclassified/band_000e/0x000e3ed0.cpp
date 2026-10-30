/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA2E9AA2AE9C6E55F678F418914863ACADAEEBA810108E5409CABBE95DC84868
 * Entry: 0x000e3ed0, Ghidra index: 2835, label: FUN_000e3ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efb4;
extern uint32_t PTR_FUN_0039f000;
void FUN_000e3ed0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_0039efb4;
  uVar1 = FUN_00061500(unaff_ESI + 1);
  unaff_ESI[2] = uVar1;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = &PTR_FUN_0039efb4;
  uVar1 = FUN_00061500(unaff_ESI + 5);
  unaff_ESI[6] = uVar1;
  unaff_ESI[7] = 0;
  unaff_ESI[4] = &PTR_FUN_0039f000;
  uVar1 = FUN_00061500(unaff_ESI + 8);
  unaff_ESI[9] = uVar1;
  unaff_ESI[10] = 0;
  uVar1 = FUN_00061500(unaff_ESI + 0xb);
  unaff_ESI[0xc] = uVar1;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1a] = 0;
  return;
}
