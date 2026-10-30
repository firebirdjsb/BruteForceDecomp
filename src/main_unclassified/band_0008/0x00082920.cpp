/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFB12379E8E12CCDF6BF5D80C16E097D020855367BA7434F992CD2831991AC19
 * Entry: 0x00082920, Ghidra index: 1533, label: FUN_00082920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern bool FUN_000816f0(int param_1);
extern undefined1 FUN_00081d10(int param_1);

undefined4 FUN_00082920(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar1 = (**(code **)(*in_ECX + 0x18))();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*in_ECX + 0x210))();
  if (iVar2 != 0) {
    FUN_00082040();
    iVar3 = 0;
    do {
      FUN_000816f0(iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    FUN_00081d10(iVar2,iVar1);
    return 1;
  }
  return 0;
}
