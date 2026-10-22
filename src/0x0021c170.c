/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEE66EF5C6CDEE61AC0119DC0C1D891E9D6F79FF1D3F0BCEEB0209F8E252F957
 * Entry: 0x0021c170, Ghidra index: 7522, label: FUN_0021c170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Call target FUN_0021c110 has this exact signature in its current C draft.
 * Callback ABI, register inputs and Xbox behavior remain ABI_UNVERIFIED. */
extern undefined4 FUN_0021c110(int param_1);
void FUN_0021c170(void)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  FUN_0015ed30(*(undefined4 *)(in_ECX + 0xe8));
  if ((*(byte *)(*(int *)(in_ECX + 0xc) + 0x128) & 0x10) != 0) {
    piVar2 = (int *)(in_ECX + 0x7c);
    iVar3 = 8;
    do {
      if ((*piVar2 != 0) && (piVar1 = *(int **)(*piVar2 + 0x14), piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x30))(piVar1,FUN_0021c110,0);
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
