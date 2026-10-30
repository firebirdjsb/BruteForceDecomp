/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6097A0FACBEF06BD59C6A44539E1A7ED8FD4961338756DB049D05CC3FF09D3DE
 * Entry: 0x000f31e0, Ghidra index: 3038, label: FUN_000f31e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000f31e0(int param_1)

{
  int *in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_200 [512];
  
  if (in_EAX != (int *)0x0) {
    iVar1 = (**(code **)(*in_EAX + 4))();
    if (iVar1 == 1) {
      uVar2 = FUN_001e97c0(param_1 + 4);
      FUN_002ea9a9(auStack_200,0x100,uVar2);
      FUN_0010a7d0();
    }
  }
  return;
}
