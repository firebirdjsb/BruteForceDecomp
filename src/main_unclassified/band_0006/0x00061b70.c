/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81336020B3EC7B9DF31A958956F2FBF2770BDF32A56D62DC52FC75CF24E45B03
 * Entry: 0x00061b70, Ghidra index: 1035, label: FUN_00061b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00061b70(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  int *piStack00000004;
  
  if (in_ECX != (undefined4 *)0x0) {
    *in_ECX = *in_EAX;
    piStack00000004 = (int *)in_EAX[1];
    in_ECX[1] = piStack00000004;
    if (piStack00000004 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00061b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piStack00000004 + 4))();
      return;
    }
  }
  return;
}
