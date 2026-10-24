/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8066F33FAC9D0D9BAA4B6ABB27B2A7320DE5406A81F104138B66B42CE6891A3C
 * Entry: 0x002c96d0, Ghidra index: 10140, label: FUN_002c96d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002c96d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x68;
  iVar2 = 0x15;
  do {
    FUN_0001fe40(iVar1,0x10,3,(uintptr_t)0x0006eef0U);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    iVar1 = iVar1 + 0x40;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_002c9670();
  return param_1;
}
