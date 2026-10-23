/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CE3BD8475255823B88BB91AE98391FB1650F480EEFDCC74D6695149E650A4CC
 * Entry: 0x00355398, Ghidra index: 13118, label: FUN_00355398
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00355398(int param_1,uint param_2)

{
  KeRaiseIrqlToDpcLevel();
  if ((param_2 & 0x10) != 0) {
    FUN_00345e88(param_1,*(undefined4 *)(param_1 + 0x20),0x8007274a);
    FUN_003455c1(param_1);
  }
  if ((param_2 & 8) != 0) {
    FUN_00345e88(param_1,*(undefined4 *)(param_1 + 0x30),0x8007274a);
  }
  FUN_00345541(0xffffffff,param_2);
  KfLowerIrql();
  return 0;
}
