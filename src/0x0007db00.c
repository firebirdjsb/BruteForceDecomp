/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CCE36684BD9B442788C03FA85A6931DA53452DC584CA890EF5E007475E899CD
 * Entry: 0x0007db00, Ghidra index: 1492, label: FUN_0007db00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0007db00(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  uVar2 = param_1;
  param_1 = 0xa6de845;
  iVar1 = (**(code **)(*in_ECX + 0x18c))(&param_1);
  if (iVar1 != 0) {
    FUN_0007db60();
    uVar2 = FUN_002eaa70(uVar2);
    FUN_000876a0(in_EAX,uVar2);
    *(undefined1 *)(in_EAX + 0x20) = 0;
    return 1;
  }
  return 0;
}
