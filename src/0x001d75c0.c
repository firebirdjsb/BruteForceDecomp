/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE16624E8F3EC0F30144001AA1EF2A100C72E97DE29951B58E21417C382B106D
 * Entry: 0x001d75c0, Ghidra index: 6398, label: FUN_001d75c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d75c0(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)(param_3 + 0x3c);
    puVar2 = (undefined4 *)(param_4 + 0x10);
    do {
      *(undefined4 *)(param_4 + -0x40) = *(undefined4 *)(param_3 + -0x40);
      puVar2[-0x13] = puVar1[-0x1e];
      param_3 = param_3 + -0x40;
      param_4 = param_4 + -0x40;
      puVar2[-0x12] = puVar1[-0x1d];
      puVar2[-0x11] = puVar1[-0x1c];
      puVar2[-0x10] = puVar1[-0x1b];
      puVar2[-0xf] = puVar1[-0x1a];
      FUN_0001f4f0(puVar1 + -0x19,0,0xffffffff);
      puVar2[-7] = puVar1[-0x12];
      puVar2[-6] = puVar1[-0x11];
      puVar2[-5] = puVar1[-0x10];
      puVar1 = puVar1 + -0x10;
      puVar2 = puVar2 + -0x10;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}
