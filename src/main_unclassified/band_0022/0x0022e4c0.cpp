/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D22967E0820C0D76AF3201AB701C848357AAA9CDC409251F3288386D9554922
 * Entry: 0x0022e4c0, Ghidra index: 7722, label: FUN_0022e4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022e4c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x228) + 0x140);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x228) + 0x144) - iVar2 >> 2;
  }
  if (0 < iVar2) {
    puVar3 = (undefined4 *)(param_1 + 0x248);
    param_1 = iVar2;
    do {
      FUN_0022e5b0(iVar1,puVar3 + -1,puVar3 + 0xb);
      puVar3[-7] = puVar3[-1];
      puVar3[-6] = *puVar3;
      puVar3[-5] = puVar3[1];
      puVar3[7] = puVar3[0xd];
      puVar3[5] = puVar3[0xb];
      puVar3[6] = puVar3[0xc];
      FUN_002229b0();
      puVar3 = puVar3 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  if ((*(byte *)(iVar1 + 0x225) & 2) != 0) {
    FUN_0022e5b0(iVar1,iVar1 + 0x2dc,iVar1 + 0x2e8);
    FUN_002229b0();
  }
  *(byte *)(iVar1 + 0x224) = *(byte *)(iVar1 + 0x224) | 0x80;
  return;
}
