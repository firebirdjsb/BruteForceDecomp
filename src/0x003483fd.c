/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97DCDBA419328AB45E42A6AA2DC0A565B95B7F8ED861CF9A7FB9501E1D690824
 * Entry: 0x003483fd, Ghidra index: 12894, label: FUN_003483fd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
byte * FUN_003483fd(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)*(byte *)(in_ECX + 0xe);
  pbVar3 = *(byte **)(in_ECX + 0xac4);
  do {
    if (uVar2 == 0) {
      return (byte *)0x0;
    }
    if (((pbVar3[2] != 0) && ((*pbVar3 & 4) != 0)) && (*(int *)(pbVar3 + 0xb8) == param_1)) {
      if (*(int *)(pbVar3 + 0xc0) == param_2) {
        return pbVar3;
      }
      if (*(int *)(in_ECX + 0xae0) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = thunk_FUN_0033378c(*(int *)(pbVar3 + 0xc0));
      }
      if ((iVar1 != 0) && (*(int *)(param_3 + 0xd0) == *(int *)(iVar1 + 0xd0))) {
        return pbVar3;
      }
    }
    pbVar3 = pbVar3 + 0x130;
    uVar2 = uVar2 - 1;
  } while( true );
}
