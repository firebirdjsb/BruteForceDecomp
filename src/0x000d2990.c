/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF4B3D3901F206D7866399F2CC80208B56C1513DA61C6F2ED76E1751D5C98538
 * Entry: 0x000d2990, Ghidra index: 2618, label: FUN_000d2990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000d2990(void)

{
  int iVar1;
  int iVar2;
  int *in_EDX;
  
  iVar1 = in_EDX[1];
  if (iVar1 == -1) {
    return 0;
  }
  iVar2 = in_EDX[2];
  if (iVar1 <= iVar2) {
    return (iVar2 - iVar1) + 1;
  }
  return (iVar2 - iVar1) + 1 + *in_EDX;
}
