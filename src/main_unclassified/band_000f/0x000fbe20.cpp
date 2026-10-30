/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D7406D5C3D7AF091ED213C43EA57F073C26091FA740FE01E2754BB65EA49BA0
 * Entry: 0x000fbe20, Ghidra index: 3144, label: FUN_000fbe20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fbe20(void)

{
  undefined4 *in_EAX;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    *(undefined4 *)((int)in_ECX + 0x31) = *in_EAX;
                    /* WARNING: Could not recover jumptable at 0x000fbe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x34))();
    return;
  }
  return;
}
