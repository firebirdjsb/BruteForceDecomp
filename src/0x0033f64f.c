/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E02F64B734B0FFBD1338FAAA4E35BD9B763A48DB38C146F8EA4FE7858C5FC141
 * Entry: 0x0033f64f, Ghidra index: 12649, label: FUN_0033f64f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033f64f(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_88 [92];
  undefined1 local_2c [20];
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0x402;
  FUN_0033f453(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4),"signaturekey",0xd,0,0,
               local_18);
  FUN_00356778(local_88);
  FUN_003567b6(local_88,&local_8,4);
  FUN_003567b6(local_88,&param_3,4);
  FUN_003568e4(local_88);
  FUN_0033f453(local_18,0x10,local_2c,0x10,0,0,param_4);
  return;
}
