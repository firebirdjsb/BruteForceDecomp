/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91423D99A32C758011157358DCDDB7054238D471AF7C5470BD5853C1029D1A49
 * Entry: 0x002e38d0, Ghidra index: 10414, label: FUN_002e38d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e38d0(int *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int *in_ECX;
  
  if (((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) && (param_3 != (undefined1 *)0x0))
  {
    if (in_ECX[8] == 0) {
      return 0x80004005;
    }
    *param_1 = *(int *)(in_ECX[4] + 4 + in_ECX[6] * 0xc) + *in_ECX;
    *param_2 = *(undefined4 *)(in_ECX[4] + in_ECX[6] * 0xc);
    *param_3 = *(undefined1 *)(in_ECX[4] + 9 + in_ECX[6] * 0xc);
    return 0;
  }
  return 0x80004003;
}
