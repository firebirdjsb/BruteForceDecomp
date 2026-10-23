/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 385F9249BD8AF16987458ADD414971E2CB55D6D7133809633AC985B5DA290DB1
 * Entry: 0x00382383, Ghidra index: 13593, label: FUN_00382383
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00382383(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  char *in_ECX;
  
  if ((in_ECX[7] != 0xff) &&
     (iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x10) + 0x14) + (uint)(byte)in_ECX[7] * 4),
     iVar1 != 0)) {
    FUN_0037fc9e(iVar1,*(undefined4 *)(in_ECX + 0x14),0);
  }
  if (*in_ECX == '\x05') {
    uVar3 = FUN_00380f6c();
    cVar2 = FUN_003812a8(in_ECX);
    if (cVar2 == '\0') {
      FUN_003822c5();
      FUN_00382100(uVar3);
    }
  }
  else if (in_ECX[5] != '\0') {
    FUN_003822c5();
  }
  FUN_00382100(in_ECX);
  return;
}
