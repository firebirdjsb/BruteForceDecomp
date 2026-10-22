/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F73B30B812492B2AA63A8F3234AF538E09221451BCA494011BFFE17A6D922B6
 * Entry: 0x001e0ef0, Ghidra index: 6725, label: FUN_001e0ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396cdc;
extern uint32_t PTR_FUN_00396d00;
void FUN_001e0ef0(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  *(undefined1 *)(unaff_ESI + 6) = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  *unaff_ESI = &PTR_FUN_00396d00;
  unaff_ESI[5] = &PTR_FUN_00396cdc;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  iVar1 = FUN_002ea01d(0x80);
  unaff_ESI[0xb] = iVar1;
  unaff_ESI[0xc] = iVar1;
  unaff_ESI[0xd] = iVar1 + 0x80;
  FUN_001e0f70(unaff_ESI + 10);
  return;
}
