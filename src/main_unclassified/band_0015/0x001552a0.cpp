/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3081F4F4606622612238AD225AF181039F904326496359464995AB8A821A40B2
 * Entry: 0x001552a0, Ghidra index: 4460, label: FUN_001552a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
unkbyte10 FUN_001552a0(void)

{
  int iVar1;
  int *in_ECX;
  unkbyte10 Var2;
  
  iVar1 = (**(code **)(*in_ECX + 0x40))();
  Var2 = fpatan(-(float10)*(float *)(iVar1 + 8),(float10)-*(float *)(iVar1 + 0x20));
  return Var2;
}
