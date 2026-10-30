/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31B366A4F9C64CB98FD129FFB288FFF07879D939FA209CC77FE5410829333BA9
 * Entry: 0x0028f520, Ghidra index: 9218, label: FUN_0028f520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0028f520(undefined4 param_1,undefined4 param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *extraout_ECX;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  puVar4 = (undefined4 *)FUN_00233b10(local_30);
  local_44 = puVar4[3];
  local_48 = puVar4[2];
  local_4c = puVar4[1];
  local_50 = *puVar4;
  puVar4 = (undefined4 *)FUN_00233b10(local_20,param_1,param_2,param_3);
  local_34 = puVar4[3];
  local_38 = puVar4[2];
  local_3c = puVar4[1];
  local_40 = *puVar4;
  param_3 = (1.0 - param_3) * param_3;
  puVar4 = (undefined4 *)FUN_00233b10(local_10,&local_40,&local_50,param_3 + param_3);
  uVar1 = puVar4[3];
  uVar2 = puVar4[2];
  uVar3 = puVar4[1];
  *extraout_ECX = *puVar4;
  extraout_ECX[1] = uVar3;
  extraout_ECX[2] = uVar2;
  extraout_ECX[3] = uVar1;
  return extraout_ECX;
}
