/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84B17B3AFE7D448C08F55C7D3836B1898E531F210E47A91F3C456D85677ABC34
 * Entry: 0x0033f9b0, Ghidra index: 12653, label: FUN_0033f9b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033f9b0(int param_1,int param_2,undefined4 param_3)

{
  undefined1 local_88 [92];
  undefined1 local_2c [20];
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0x400;
  FUN_0033f453(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),"signaturekey",0xd,0,0,
               local_18);
  FUN_00356778(local_88);
  FUN_003567b6(local_88,&local_8,4);
  FUN_003567b6(local_88,param_2 + 0x140,0x10);
  FUN_003568e4(local_88);
  FUN_0033f453(local_18,0x10,local_2c,0x10,0,0,param_3);
  return;
}
