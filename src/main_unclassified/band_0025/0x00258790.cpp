/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAF8CD1DF93FCC32980557C60B69CB9B50946778B78D1646A5729C915D97637F
 * Entry: 0x00258790, Ghidra index: 8473, label: FUN_00258790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00393640;
void FUN_00258790(void)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 *unaff_ESI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 7;
  *unaff_ESI = PTR_FUN_00393640;
  *(undefined1 *)(unaff_ESI + 9) = local_1;
  iVar1 = FUN_0025ae60(unaff_ESI + 9);
  unaff_ESI[10] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(unaff_ESI[10] + 4) = unaff_ESI[10];
  *(undefined4 *)unaff_ESI[10] = unaff_ESI[10];
  *(undefined4 *)(unaff_ESI[10] + 8) = unaff_ESI[10];
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  return;
}
