/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 091468AF93E016958F928C8C5BBBE95B7BBC89145344AA51F7305DBAB0F777A0
 * Entry: 0x00104580, Ghidra index: 3321, label: FUN_00104580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00104580(void)

{
  int in_EAX;
  int *in_ECX;
  
  *(int **)(in_EAX + 0x124) = in_ECX;
  if ((in_ECX != (int *)0x0) && ((*(byte *)(in_ECX + 10) & 4) != 0)) {
    *(byte *)(in_ECX + 10) = *(byte *)(in_ECX + 10) & 0xfb;
                    /* WARNING: Could not recover jumptable at 0x00104598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x28))();
    return;
  }
  return;
}
