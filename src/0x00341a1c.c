/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD5D43CCF5723786535D151997321009C7DC22F201F2AEF1269648A711953316
 * Entry: 0x00341a1c, Ghidra index: 12677, label: FUN_00341a1c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00341a1c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_stack_00000018;
  
  FUN_002ebea0();
  puVar3 = (undefined4 *)&stack0xffffff8c;
  for (iVar2 = 500; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_0033f362();
  iVar2 = FUN_0033fbee();
  if (iVar2 == 0) {
    uVar1 = *in_stack_00000018;
    iVar2 = FUN_00341540();
    if (iVar2 == 0) {
      *in_stack_00000018 = uVar1;
      return 0;
    }
  }
  return 0xc000009a;
}
