/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3CFE086CB339EE3DD77B3A0AC6C0F7AA874B4DDF18426C661C27530BADD608A
 * Entry: 0x00383571, Ghidra index: 13615, label: FUN_00383571
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00383571(void)

{
  int in_ECX;
  
  KeRaiseIrqlToDpcLevel();
  if ((*(byte *)(in_ECX + 0xc) & 6) == 0) {
    FUN_003832c8();
  }
  else {
    (**(code **)(in_ECX + 0x30))();
  }
                    /* WARNING: Could not recover jumptable at 0x00383599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KfLowerIrql();
  return;
}
