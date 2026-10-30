/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B4FC70FB2CD271BC33EFBCAF951E7C04D52468FAA0B32CFADBA1E6BB5AA54BA
 * Entry: 0x00276e30, Ghidra index: 8901, label: FUN_00276e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046988c;
extern uint32_t PTR_FUN_00392660;
void FUN_00276e30(void)

{
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  
  unaff_ESI[3] = DAT_0046988c;
  *unaff_ESI = PTR_FUN_00392660;
  unaff_ESI[2] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[1] = 0;
  DAT_0046988c = DAT_0046988c + 1;
  unaff_ESI[5] = 0xffffffff;
  unaff_ESI[6] = 0xffffffff;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1a] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x15) = 0;
  unaff_ESI[0x21] = 0xf;
  unaff_ESI[0x20] = 0;
  *(undefined1 *)(unaff_ESI + 0x1c) = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0xffffffff;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0xffffffff;
  unaff_ESI[0x10] = 0xffffffff;
  unaff_ESI[0x11] = 0;
  FUN_00276f40(unaff_EDI);
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  FUN_00276f40(unaff_EDI);
  unaff_ESI[0xd] = unaff_ESI[3];
  return;
}
