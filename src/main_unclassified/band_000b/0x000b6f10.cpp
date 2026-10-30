/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45A071C4697B14F424CE8E51CF4EDC05F418E91B04494951B68DBBDC0563A15B
 * Entry: 0x000b6f10, Ghidra index: 2198, label: FUN_000b6f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b6f10(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 200);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 200) = 0;
  }
  piVar1 = *(int **)(in_ECX + 0xd8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xd8) = 0;
  }
  return;
}
