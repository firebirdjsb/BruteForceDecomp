/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82C7C7F4E99C10D05D8A19AFF375274C69017D23A774A60299EB3AB28A8EEA4E
 * Entry: 0x00023cd0, Ghidra index: 245, label: FUN_00023cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00023cd0(void)

{
  int iVar1;
  int in_EDX;
  
  if ((*(int *)(in_EDX + 0x1f8) < 1) && (*(int *)(in_EDX + 0x1f8) != -1)) {
    iVar1 = FUN_0022da80();
    if ((iVar1 == 0) || (*(short *)(iVar1 + 0x1a) < 1)) {
      return 0;
    }
  }
  return 1;
}
