/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3978B66C85A237C7F70BFCBB9B4A903A3978CD2FB1A154DE5886050BEB05285C
 * Entry: 0x0014b410, Ghidra index: 4313, label: FUN_0014b410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014b410(void)

{
  short sVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  uVar2 = (**(code **)(*in_ECX + 0x5c))();
  sVar1 = *(short *)((int)in_ECX + 0x1a);
  (**(code **)(*in_ECX + 0x38))();
  (**(code **)(*in_ECX + 0x28))(uVar2);
  (**(code **)(*in_ECX + 0x24))((int)sVar1);
  return;
}
