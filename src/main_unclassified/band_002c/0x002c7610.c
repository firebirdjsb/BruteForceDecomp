/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFDA499F44DEB0357166E9D195BDA9F12ADAC9279023A564FFCBF03B4B9D80C9
 * Entry: 0x002c7610, Ghidra index: 10100, label: FUN_002c7610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002c7610(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  
  *(undefined4 *)(in_ECX[0xb] + 4) = param_1;
  iVar4 = in_ECX[0xb];
  pcVar2 = *(char **)(iVar4 + 4);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_002b2b80();
  iVar4 = FUN_002beb90(iVar4,uVar3);
  *(undefined4 *)(in_ECX[0xb] + 4) = 0;
  if (iVar4 == 0) {
    iVar5 = FUN_002ea01d(0x2c);
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = FUN_002c79a0(param_2);
    }
    (**(code **)(*in_ECX + 8))(iVar4);
  }
  return iVar4;
}
