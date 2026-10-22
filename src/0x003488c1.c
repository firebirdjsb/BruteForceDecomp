/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 411130AC80D5A1C1C2382667F3C70EC8267EAF053D51E533C4904A64508D8E39
 * Entry: 0x003488c1, Ghidra index: 12902, label: FUN_003488c1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003488c1(uint param_1)

{
  int in_ECX;
  undefined4 uVar1;
  
  KeRaiseIrqlToDpcLevel();
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(param_1 * 0x30 + 0xafc + in_ECX);
  }
  else {
    uVar1 = 0;
  }
  KfLowerIrql();
  return uVar1;
}
