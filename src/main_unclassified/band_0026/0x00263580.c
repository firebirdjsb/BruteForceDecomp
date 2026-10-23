/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7ECC7770C2ABC95BFB5928D3ABF390145BE511459EB79F511091D03B98734DA
 * Entry: 0x00263580, Ghidra index: 8681, label: FUN_00263580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263580(void)

{
  int *in_EAX;
  int *in_ECX;
  int *piStack00000004;
  
  if (in_ECX != (int *)0x0) {
    piStack00000004 = (int *)*in_EAX;
    *in_ECX = (int)piStack00000004;
    if (piStack00000004 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00263592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piStack00000004 + 4))();
      return;
    }
  }
  return;
}
