/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 282468335CA9057319861B24121A5F4C654655FC3D7D395BA3A63634E9E7D8E4
 * Entry: 0x0015ed00, Ghidra index: 4565, label: FUN_0015ed00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698bc;
undefined4 FUN_0015ed00(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_EDI;
  
  if (((byte)DAT_004698bc & 1) == 0) {
    uVar1 = FUN_00238370();
    *unaff_EDI = uVar1;
    return 0;
  }
  *unaff_EDI = *in_ECX;
  return 0;
}
