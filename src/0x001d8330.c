/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72AABE2FFD258432ABC641619F4D44F0D7CEBF51EB51CD3ACD94B25F9D7F5ADF
 * Entry: 0x001d8330, Ghidra index: 6423, label: FUN_001d8330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d8330(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)(param_3 + 0xc);
    puVar2 = (undefined4 *)(param_4 + 0xc);
    do {
      *(undefined4 *)(param_4 + -0x94) = *(undefined4 *)(param_3 + -0x94);
      puVar2[-0x27] = puVar1[-0x27];
      param_3 = param_3 + -0x94;
      param_4 = param_4 + -0x94;
      puVar2[-0x26] = puVar1[-0x26];
      puVar2[-0x25] = puVar1[-0x25];
      puVar2[-0x24] = puVar1[-0x24];
      *(undefined1 *)(puVar2 + -0x23) = *(undefined1 *)(puVar1 + -0x23);
      *(undefined1 *)((int)puVar2 + -0x8b) = *(undefined1 *)((int)puVar1 + -0x8b);
      puVar2[-0x22] = puVar1[-0x22];
      *(undefined1 *)(puVar2 + -0x21) = *(undefined1 *)(puVar1 + -0x21);
      FUN_001d2f50(puVar2 + -0x20);
      puVar1 = puVar1 + -0x25;
      puVar2 = puVar2 + -0x25;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}
