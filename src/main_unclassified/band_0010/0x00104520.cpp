/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92D17135746F61395850EFAD8BCC27676B4EED061DA590CC178FB17E889ABEBC
 * Entry: 0x00104520, Ghidra index: 3318, label: FUN_00104520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00104520(void)

{
  int in_EAX;
  int *in_ECX;
  
  *(int **)(in_EAX + 0x118) = in_ECX;
  if ((in_ECX != (int *)0x0) && ((*(byte *)(in_ECX + 10) & 4) != 0)) {
    *(byte *)(in_ECX + 10) = *(byte *)(in_ECX + 10) & 0xfb;
                    /* WARNING: Could not recover jumptable at 0x00104538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x28))();
    return;
  }
  return;
}
