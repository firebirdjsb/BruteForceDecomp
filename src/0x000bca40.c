/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DE8A4AD645E08CFBF13B7B5FE9375CEC9A76DEBAF9993903E4E4D814E386DF1
 * Entry: 0x000bca40, Ghidra index: 2296, label: FUN_000bca40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bca40(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x118))(2,0,0x3f800000);
    FUN_00095360();
    (**(code **)(piVar1[0x12] + 0x18))();
    D3D8LTCG__D3DDevice_SetScissors(1,0,&stack0xffffffe4);
    FUN_000b2720();
    (**(code **)(*piVar1 + 0x120))();
  }
  return;
}
