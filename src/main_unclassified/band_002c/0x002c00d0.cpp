/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A27E68F4C64169F8E4CC036C3B50F729AEAF8387C62B60F846C831E3602C6B99
 * Entry: 0x002c00d0, Ghidra index: 10006, label: FUN_002c00d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c00d0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  if (*(int **)(in_EAX + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 0x84) + 0x10))(1);
  }
  *(undefined4 *)(in_EAX + 0x84) = 0;
  iVar1 = FUN_002ea01d(0x34);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_002c8250(in_EAX);
  }
  *(undefined4 *)(in_EAX + 0x84) = uVar2;
  FUN_002bfdd0(in_EAX);
  return;
}
