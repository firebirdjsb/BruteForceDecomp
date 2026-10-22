/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5DBCBFE8E83AEBD4ED05F80BB24AF83D1F488A5BEFBB9AA2A652E373FC891E5
 * Entry: 0x00076fc0, Ghidra index: 1388, label: FUN_00076fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00076fc0(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *in_ECX = 0;
  }
  return;
}
