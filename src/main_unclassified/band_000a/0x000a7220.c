/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27651F9DB1505FFBD21C0D6D2AB904BF168429A8ED703720A9437241DD2EBF7D
 * Entry: 0x000a7220, Ghidra index: 1984, label: FUN_000a7220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000a7220(void)

{
  int *piVar1;
  int unaff_EBX;
  uint *unaff_EDI;
  int local_8;
  int local_4;
  
  local_8 = FUN_000a7ba0(unaff_EDI);
  if ((local_8 == *(int *)(unaff_EBX + 0x10c)) || (*unaff_EDI < *(uint *)(local_8 + 0xc))) {
    local_4 = *(int *)(unaff_EBX + 0x10c);
    piVar1 = &local_4;
  }
  else {
    piVar1 = &local_8;
  }
  if (*piVar1 != *(int *)(unaff_EBX + 0x10c)) {
    return *(undefined4 *)(*piVar1 + 0x10);
  }
  return 0;
}
