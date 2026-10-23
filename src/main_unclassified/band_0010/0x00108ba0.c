/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E9817BF5643A7D187BBE793291B3AF5501CE4C217E686184FF65B478AD991EA
 * Entry: 0x00108ba0, Ghidra index: 3390, label: FUN_00108ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00108ba0(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [64];
  
  if (in_EAX != (int *)0x0) {
    iVar1 = (**(code **)(*in_EAX + 4))();
    if (iVar1 == 1) {
      uVar2 = FUN_00106be0();
      uVar2 = FUN_001e97c0(uVar2);
      FUN_002ea9a9(auStack_40,0x20,uVar2);
      FUN_0010a7d0();
    }
  }
  return;
}
