/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D158CE9656867F6045EC4F1DFFAF8AA58EAD980F147197E4192F9A0B32050AA
 * Entry: 0x00042c60, Ghidra index: 516, label: FUN_00042c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00042c60(void)

{
  int iVar1;
  undefined1 *in_EDX;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(in_EDX + 8);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *in_EDX = 0;
  in_EDX[1] = 0;
  in_EDX[2] = 0;
  in_EDX[3] = 0;
  in_EDX[4] = 0;
  in_EDX[5] = 0;
  return;
}
