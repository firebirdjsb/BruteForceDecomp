/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFDA6A9A49D52FAF8FA1489C682106EB27A774430F67A43947A4BF03ADD5A55E
 * Entry: 0x0014b250, Ghidra index: 4311, label: FUN_0014b250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0014b250(int *param_1)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *in_ECX;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    in_EAX = 0;
    if (iVar1 != 0) {
      iVar1 = *in_ECX;
      uVar2 = (**(code **)(*param_1 + 0x5c))();
      uVar3 = (**(code **)(iVar1 + 0x74))(uVar2);
      return uVar3;
    }
  }
  return in_EAX & 0xffffff00;
}
