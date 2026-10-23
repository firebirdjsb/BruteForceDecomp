/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A28E4255ADA2663834C80B981D19CBED83FA48A6C45E41147D34B9BBCA069F7A
 * Entry: 0x000fbd90, Ghidra index: 3142, label: FUN_000fbd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fbd90(void)

{
  undefined4 *in_EAX;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    *(undefined4 *)((int)in_ECX + 0x2d) = *in_EAX;
                    /* WARNING: Could not recover jumptable at 0x000fbdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x34))();
    return;
  }
  return;
}
