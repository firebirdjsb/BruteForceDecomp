/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 713DFCD6867B332C4143284D6A98866F941516CAB5BC0DF91A4E1A99DD537C68
 * Entry: 0x00061c40, Ghidra index: 1037, label: FUN_00061c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00061c40(int *param_1,int *param_2)

{
  int *piVar1;
  int *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    piVar1 = (int *)*in_EAX;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *in_EAX = 0;
    }
    piVar1 = (int *)*param_1;
    *in_EAX = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    in_EAX = in_EAX + 1;
  }
  return in_EAX;
}
