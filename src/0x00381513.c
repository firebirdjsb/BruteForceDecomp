/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C292A4692EB5A99E4DE0D5214D31707B59E5126E684A62C386BF8F6BCFCDEBBE
 * Entry: 0x00381513, Ghidra index: 13566, label: FUN_00381513
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00381513(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar3 = 0x103;
  KeRaiseIrqlToDpcLevel();
  if ((*(byte *)(iVar2 + 0xc) & 6) == 0) {
    pbVar1 = (byte *)(*(int *)(param_2 + 0x5c) + 3);
    *pbVar1 = *pbVar1 | 1;
    IoStartPacket(param_1,param_2,0);
  }
  else {
    uVar3 = 0xc000009d;
    *(undefined4 *)(param_2 + 0x10) = 0xc000009d;
    IofCompleteRequest();
  }
  KfLowerIrql();
  return uVar3;
}
