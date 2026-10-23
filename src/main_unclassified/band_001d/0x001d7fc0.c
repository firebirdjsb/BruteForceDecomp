/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1483850B629B6706E9908D2113D6A7D90D547C05F339E2892939F69665D3D565
 * Entry: 0x001d7fc0, Ghidra index: 6416, label: FUN_001d7fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d7fc0(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)(param_3 + 0x14);
    puVar2 = (undefined4 *)(param_4 + 0x14);
    do {
      *(undefined4 *)(param_4 + -0x2c) = *(undefined4 *)(param_3 + -0x2c);
      param_3 = param_3 + -0x2c;
      param_4 = param_4 + -0x2c;
      puVar2[-0xf] = puVar1[-0xf];
      puVar2[-0xe] = puVar1[-0xe];
      puVar2[-0xd] = puVar1[-0xd];
      puVar2[-0xc] = puVar1[-0xc];
      puVar2[-0xb] = puVar1[-0xb];
      puVar2[-10] = puVar1[-10];
      puVar2[-9] = puVar1[-9];
      puVar2[-8] = puVar1[-8];
      puVar2[-7] = puVar1[-7];
      puVar2[-6] = puVar1[-6];
      puVar1 = puVar1 + -0xb;
      puVar2 = puVar2 + -0xb;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}
