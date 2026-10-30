/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B66472F4BB444F49FAA7AB2AA83C939A8A1957BDD85A6023731B03716517FE2
 * Entry: 0x00108c00, Ghidra index: 3391, label: FUN_00108c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00108c00(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [64];
  
  if (in_EAX != (int *)0x0) {
    iVar1 = (**(code **)(*in_EAX + 4))();
    if (iVar1 == 1) {
      iVar1 = FUN_00106c30();
      uVar2 = FUN_001e97c0(-iVar1);
      FUN_002ea9a9(auStack_40,0x20,uVar2);
      FUN_0010a7d0();
    }
  }
  return;
}
