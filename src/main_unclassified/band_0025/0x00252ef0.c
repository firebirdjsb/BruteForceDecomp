/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 012271762E73AEA0926FDCF5DF8A76140FAE14BCDD06506BD2916D02D9D4FDBD
 * Entry: 0x00252ef0, Ghidra index: 8389, label: FUN_00252ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00252ef0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  int *piStack00000004;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    piStack00000004 = (int *)in_ECX[3];
    in_EAX[3] = piStack00000004;
    if (piStack00000004 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00252f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piStack00000004 + 4))();
      return;
    }
  }
  return;
}
