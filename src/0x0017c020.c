/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E56659ACF6F027792C9B1F2D8301E24EB0130C459A4DA4F86D670A26C6553B56
 * Entry: 0x0017c020, Ghidra index: 5037, label: FUN_0017c020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
undefined4 FUN_0017c020(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 unaff_EDI;
  undefined1 local_6c [108];
  
  iVar1 = FUN_0017beb0(in_EAX);
  if (iVar1 != 0) {
    FUN_00179c00();
    FUN_0017c0b0(unaff_EDI);
    (**(code **)(*DAT_00469940 + 0x18))(iVar1 + 4,local_6c);
    return 1;
  }
  return 0;
}
