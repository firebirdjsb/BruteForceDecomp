/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6198367C7F76AE794BD91236DECB12E88940E5AADDAEB8E34AA7DEF927B499D
 * Entry: 0x000ef1b0, Ghidra index: 2969, label: FUN_000ef1b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ef1b0(void)

{
  byte bVar1;
  byte in_AL;
  int *in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 10);
  if ((bVar1 >> 1 & 1) != in_AL) {
    *(byte *)(in_ECX + 10) = (in_AL << 1 ^ bVar1) & 2 ^ bVar1;
                    /* WARNING: Could not recover jumptable at 0x000ef1cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x24))();
    return;
  }
  return;
}
