/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70F19CF364EA37A53B7F4E163F4AEC5B265E907C02BB55E0C74B3893E56250C6
 * Entry: 0x00053d60, Ghidra index: 779, label: FUN_00053d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00053d60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    uVar1 = in_ECX[2];
    uVar2 = in_ECX[1];
    *in_EAX = *in_ECX;
    in_EAX[1] = uVar2;
    in_EAX[2] = uVar1;
  }
  return;
}
