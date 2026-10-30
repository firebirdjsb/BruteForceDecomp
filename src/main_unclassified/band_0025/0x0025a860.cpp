/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A9DF2F705412C15DC76F239DBCB0264C4F2DCB66E241B59AF7E9A608626B94F
 * Entry: 0x0025a860, Ghidra index: 8523, label: FUN_0025a860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00393570;
void FUN_0025a860(void)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 *unaff_EDI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *unaff_EDI = PTR_FUN_00393570;
  unaff_EDI[1] = 0;
  unaff_EDI[2] = 0;
  unaff_EDI[3] = 0;
  *(undefined1 *)(unaff_EDI + 4) = local_1;
  iVar1 = FUN_0025ae60(unaff_EDI + 4);
  unaff_EDI[5] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(unaff_EDI[5] + 4) = unaff_EDI[5];
  *(undefined4 *)unaff_EDI[5] = unaff_EDI[5];
  *(undefined4 *)(unaff_EDI[5] + 8) = unaff_EDI[5];
  unaff_EDI[6] = 0;
  return;
}
