/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBC2F2FBBEB84002B3557046A216F741152089D0F90AC7E1E8139DBFC0D8DEC3
 * Entry: 0x00073f10, Ghidra index: 1313, label: FUN_00073f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00073e40(float param_1);
extern void FUN_002333b0(float *param_1);

undefined4 FUN_00073f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  FUN_002339d0(local_54);
  FUN_002339d0(local_34);
  uVar1 = FUN_00073e40(param_3);
  FUN_002333b0(local_44);
  *param_1 = local_24;
  param_1[1] = uStack_20;
  param_1[2] = uStack_1c;
  param_1[3] = uStack_18;
  param_1[8] = local_4;
  param_1[4] = local_14;
  param_1[5] = uStack_10;
  param_1[6] = uStack_c;
  param_1[7] = uStack_8;
  return CONCAT31((int3)((uint)&local_24 >> 8),uVar1);
}
