/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7883723C33A8E2D202A39429A2EFFCD06A0421E750EB073C244D42C30F04E95
 * Entry: 0x0003f1e0, Ghidra index: 472, label: FUN_0003f1e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0003f1e0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)FUN_000120f0();
  (**(code **)(*piVar1 + 0x15c))(*(undefined4 *)(in_ECX + 0x878),*(undefined4 *)(in_ECX + 0x870));
  return 1;
}
