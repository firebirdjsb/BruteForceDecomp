/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05EC369BCDB7B85D4CA7FAD94EB3A64FB583C9D673ECD3AB66ACAEBCF2402D65
 * Entry: 0x001780e0, Ghidra index: 4960, label: FUN_001780e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
undefined4 FUN_001780e0(void)

{
  char cVar1;
  undefined4 unaff_EBX;
  int unaff_ESI;
  undefined4 local_4;
  
  FUN_00356c80(0x160,0);
  FUN_00356c80(3,1);
  FUN_00356c80(5,1);
  local_4 = 0;
  cVar1 = (**(code **)(*DAT_00469940 + 0x74))(&local_4);
  if (cVar1 != '\0') {
    FUN_00356e20(FUN_0035a8c0,unaff_EBX);
    *(undefined1 *)(unaff_ESI + 0x2c) = 1;
    return 1;
  }
  *(undefined1 *)(unaff_ESI + 0x2c) = 0;
  return 0;
}
