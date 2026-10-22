/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63B138F2B097173AA62269A5602DE19847F24E132BA5997C6A901A59C6A69FC2
 * Entry: 0x001dce50, Ghidra index: 6598, label: FUN_001dce50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dce50(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  
  if (in_EAX != (undefined4 *)0x0) {
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *in_EAX = *in_EDX;
      in_EDX = in_EDX + 1;
      in_EAX = in_EAX + 1;
    }
  }
  return;
}
