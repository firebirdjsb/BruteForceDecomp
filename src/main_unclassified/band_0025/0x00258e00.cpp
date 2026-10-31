/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40C073793DC4517BB9A08F991BE66BD264B9304FA528F69FC768E73F0FDFF80C
 * Entry: 0x00258e00, Ghidra index: 8488, label: FUN_00258e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_00258b20(int param_1,int param_2);
void FUN_00258e00(void)

{
  int *in_EAX;
  int in_EDX;
  
  if (*in_EAX == 0) {
    *(int *)(in_EDX + 8) = in_EAX[1];
  }
  else {
    *(int *)(*in_EAX + 4) = in_EAX[1];
  }
  if ((int *)in_EAX[1] != (int *)0x0) {
    *(int *)in_EAX[1] = *in_EAX;
  }
  FUN_00258b20(in_EDX,in_EAX);
  return;
}
