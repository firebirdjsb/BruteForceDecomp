/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C81A37C007328B8066189C4085328E60CF460AD8AD3A5BC90E97C4423060C424
 * Entry: 0x00347bb6, Ghidra index: 12878, label: FUN_00347bb6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00347bb6(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,uint param_4,
                 undefined4 *param_5,uint param_6)

{
  int in_ECX;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_34 [5];
  undefined1 local_20 [20];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *param_1;
  local_8 = param_1[1];
  XcHMAC(in_ECX + 0xa90,0x10,&local_c,8,param_2,0x10,local_34);
  local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
  XcHMAC(in_ECX + 0xa90,0x10,&local_c,8,param_2,0x10,local_20);
  puVar2 = local_34;
  for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  for (uVar1 = param_4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_3 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    param_3 = (undefined4 *)((int)param_3 + 1);
  }
  puVar2 = (undefined4 *)((int)local_34 + param_4);
  puVar3 = param_5;
  for (uVar1 = param_6 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = param_6 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  XcDESKeyParity(param_5,param_6);
  return;
}
