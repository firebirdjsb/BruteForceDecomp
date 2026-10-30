/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09C7B265425D1C96F12D9616DB15869E5AF0CBA5485C4EB51F39C82F914A6400
 * Entry: 0x0029fed0, Ghidra index: 9501, label: FUN_0029fed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00390ddc;
void FUN_0029fed0(void)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 *unaff_EDI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *unaff_EDI = &PTR_LAB_00390ddc;
  unaff_EDI[1] = 0;
  *(undefined1 *)(unaff_EDI + 2) = local_1;
  iVar1 = FUN_0025ae60(unaff_EDI + 2);
  unaff_EDI[3] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(unaff_EDI[3] + 4) = unaff_EDI[3];
  *(undefined4 *)unaff_EDI[3] = unaff_EDI[3];
  *(undefined4 *)(unaff_EDI[3] + 8) = unaff_EDI[3];
  unaff_EDI[4] = 0;
  unaff_EDI[5] = 0;
  unaff_EDI[6] = 0;
  return;
}
