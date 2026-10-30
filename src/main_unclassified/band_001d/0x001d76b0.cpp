/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3423952AB13E09C0827075FD44667D2EA8D46848FAC5D7CD30D3BAEC69357501
 * Entry: 0x001d76b0, Ghidra index: 6400, label: FUN_001d76b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d76b0(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)(param_3 + 0x14);
    puVar2 = (undefined4 *)(param_4 + 0x14);
    do {
      *(undefined4 *)(param_4 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      param_3 = param_3 + -0x18;
      param_4 = param_4 + -0x18;
      *(undefined2 *)(puVar2 + -10) = *(undefined2 *)(puVar1 + -10);
      *(undefined1 *)((int)puVar2 + -0x26) = *(undefined1 *)((int)puVar1 + -0x26);
      puVar2[-9] = puVar1[-9];
      puVar2[-8] = puVar1[-8];
      puVar2[-7] = puVar1[-7];
      puVar2[-6] = puVar1[-6];
      puVar1 = puVar1 + -6;
      puVar2 = puVar2 + -6;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}
