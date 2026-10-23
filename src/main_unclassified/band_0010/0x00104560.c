/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AE52882B9E0EC71676BACB5B9D1F1CEE13CFB7158E4AAFED63DEA4919D6F5D3
 * Entry: 0x00104560, Ghidra index: 3320, label: FUN_00104560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00104560(void)

{
  int in_EAX;
  int *in_ECX;
  
  *(int **)(in_EAX + 0x120) = in_ECX;
  if ((in_ECX != (int *)0x0) && ((*(byte *)(in_ECX + 10) & 4) != 0)) {
    *(byte *)(in_ECX + 10) = *(byte *)(in_ECX + 10) & 0xfb;
                    /* WARNING: Could not recover jumptable at 0x00104578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x28))();
    return;
  }
  return;
}
