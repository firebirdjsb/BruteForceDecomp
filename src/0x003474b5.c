/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB12AB93C697449EF50F420015EF6DDAD34B94974073AC7E36F76E36ADB60F12
 * Entry: 0x003474b5, Ghidra index: 12850, label: FUN_003474b5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003474b5(void)

{
  int in_ECX;
  
  KeRaiseIrqlToDpcLevel();
  if ((*(byte *)(in_ECX + 3) & 2) != 0) {
    FUN_00349cac();
    FUN_00347182();
  }
  FUN_00352ebc(0x20000000);
  FUN_0034a157();
  KfLowerIrql();
  FUN_00347ad7();
  return;
}
