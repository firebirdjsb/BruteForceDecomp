/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4A5AC15F90230124D1E4DC172F83CDAEAAFD910C25E793074F42E1D1FD14111
 * Entry: 0x0005c2f0, Ghidra index: 949, label: FUN_0005c2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0005c2f0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 *in_ECX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_1 + 4);
  iVar6 = 0;
  uVar5 = 0;
  if (uVar4 != 0) {
    iVar3 = in_EAX - (int)in_ECX;
    do {
      if (3 < iVar6) {
        return iVar6;
      }
      if ((((uVar5 < uVar4) && (iVar1 = *(int *)(*(int *)(param_1 + 8) + uVar5 * 4), iVar1 != 0)) &&
          (*(int *)(iVar1 + 0x14) == 0)) &&
         (((iVar2 = *(int *)(iVar1 + 4), iVar2 != 0 && (*(int *)(iVar2 + 0xc) != 0)) &&
          ((*(byte *)(iVar2 + 0x70) & 1) == 0)))) {
        *(undefined4 *)(iVar3 + (int)in_ECX) = *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x120);
        *in_ECX = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + 0xc) + 8);
        iVar6 = iVar6 + 1;
        in_ECX = in_ECX + 1;
      }
      uVar4 = *(uint *)(param_1 + 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return iVar6;
}
