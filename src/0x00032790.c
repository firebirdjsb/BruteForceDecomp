/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51EFAD98364B6B5BD1FCC19B53027D6DFEE107141C2F9B1504F114A5FFBCF481
 * Entry: 0x00032790, Ghidra index: 326, label: FUN_00032790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00032849) */

undefined4 FUN_00032790(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  if ((in_ECX[0x23d] != 0) && ((in_ECX[0x23e] - in_ECX[0x23d]) / 0x18 != 0)) {
    iVar1 = *(int *)(in_ECX[0x23e] + -4);
    cVar2 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,in_ECX + 0x10e,0,0x40000000);
    if (cVar2 == '\0') {
      iVar3 = FUN_00055aa0();
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 2;
      if (iVar1 != 0) {
        FUN_0008f6a0(iVar1);
        FUN_00038440();
      }
      (**(code **)(*in_ECX + 0x168))();
    }
    FUN_000255d0(param_1,0);
    FUN_0004d970(in_ECX + -0x10,param_1,3,1,1);
  }
  return 1;
}
