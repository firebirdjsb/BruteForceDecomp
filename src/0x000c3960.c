/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CAF648C5B70F984075A3133400DF4E23F72CA18C900DEC394CA5B61314E3EFCB
 * Entry: 0x000c3960, Ghidra index: 2393, label: FUN_000c3960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c3960(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0x28) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x28) + -0x2c;
  }
  FUN_000c3910(*(int *)(iVar2 + 0x68) + -1);
  iVar2 = *(int *)(in_ECX + 0x28);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar2 + -0x2c;
  }
  iVar1 = *(int *)(iVar3 + 0x68);
  if (((0 < iVar1) && (iVar1 < 5)) &&
     (*(int *)(*(int *)(*(int *)(iVar3 + 100) + 0x70) + 0x34 + iVar1 * 8) != 0)) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -0x2c;
    }
    iVar3 = *(int *)(iVar2 + 0x68);
    if ((iVar3 < 1) || (4 < iVar3)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 100) + 0x70) + 0x34 + iVar3 * 8);
    }
    iVar2 = (**(code **)(**(int **)(*(int *)(iVar2 + 8) + 0xbec) + 0xc))(iVar2);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != 0)) &&
       ((*(byte *)(*(int *)(iVar2 + 0x24) + 0x14) & 2) != 0)) {
      iVar2 = *(int *)(in_ECX + 0x28);
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar2 + -0x2c;
      }
      if (*(int *)(iVar3 + 0x68) != 1) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar2 + -0x2c;
        }
        if (*(int *)(iVar2 + 0x68) != 3) {
          FUN_000ba6a0();
          *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) & 0xfe;
          return;
        }
      }
      FUN_000ba6a0();
      *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) & 0xfe;
      return;
    }
  }
  *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) | 1;
  return;
}
