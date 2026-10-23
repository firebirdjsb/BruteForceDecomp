/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 771835AE23DCC7F3E0622D073A637D989CF8759FF9E7A05C5340E3B970FE5730
 * Entry: 0x00123080, Ghidra index: 3671, label: FUN_00123080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039df6c;
undefined4 FUN_00123080(int param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [4];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [16];
  undefined4 local_150 [10];
  undefined1 auStack_128 [4];
  undefined **local_124;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 local_8;
  undefined4 uStack_4;
  
  puVar1 = local_150;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_c = *(int *)(param_1 + 0x6c);
  local_20 = 0;
  local_1c = 1;
  local_10 = 0;
  local_124 = &PTR_LAB_0039df6c;
  local_18 = 0xfffffffd;
  local_14 = 0xfffffff7;
  if (*(int *)(local_c + 0x10) != 0) {
    local_c = *(int *)(local_c + 8);
  }
  local_8 = param_2;
  uStack_4 = (**(code **)(*(int *)(param_1 + 0x1b4) + 0x9c))();
  iVar2 = *(int *)(param_1 + 0x6c);
  uStack_1bc = *(undefined4 *)(iVar2 + 0x40);
  uStack_1b8 = *(undefined4 *)(iVar2 + 0x3c);
  uStack_174 = *(undefined4 *)(iVar2 + 0x38);
  uStack_170 = uStack_1b8;
  uStack_16c = uStack_1bc;
  puVar1 = (undefined4 *)(**(code **)(*(int *)(param_1 + 0x1b4) + 0x30))(auStack_168);
  uStack_1bc = puVar1[2];
  uStack_1b4 = puVar1[1];
  uStack_1b8 = *puVar1;
  uStack_1b0 = uStack_1bc;
  iStack_198 = FUN_000ddd10(*(undefined4 *)(param_1 + 8),&uStack_1bc,&uStack_16c,auStack_160,
                            auStack_178,&uStack_1b8,auStack_128,0x40000000,0);
  if (iStack_198 == 0) {
    uStack_17c = 0x3f800000;
    uStack_18c = 0x3f800000;
    uStack_19c = 0x3f800000;
    iStack_194 = iStack_198;
    iStack_190 = iStack_198;
    iStack_188 = iStack_198;
    iStack_184 = iStack_198;
    iStack_180 = iStack_198;
    FUN_00039380(&uStack_19c,0x3e4ccccd);
    FUN_0001f9c0();
    uStack_1ac = uStack_1a0;
    uStack_1b8 = uStack_1a8;
    uStack_1b0 = uStack_1a0;
    uStack_1b4 = uStack_1a4;
    iStack_198 = FUN_000ddd10(*(undefined4 *)(param_1 + 8),&uStack_1bc,&uStack_16c,auStack_160,
                              auStack_178,&uStack_1b8,auStack_128,0x40000000,0);
    if (iStack_198 == 0) {
      uStack_17c = 0x3f800000;
      uStack_18c = 0x3f800000;
      uStack_19c = 0x3f800000;
      iStack_194 = iStack_198;
      iStack_190 = iStack_198;
      iStack_188 = iStack_198;
      iStack_184 = iStack_198;
      iStack_180 = iStack_198;
      FUN_00039380(&uStack_19c,0xbecccccd);
      FUN_0001f9c0();
      uStack_1ac = uStack_1a4;
      uStack_1b8 = uStack_1a8;
      uStack_1b4 = uStack_1a4;
      uStack_1b0 = uStack_1a0;
      iVar2 = FUN_000ddd10(*(undefined4 *)(param_1 + 8),&uStack_1bc,&uStack_16c,auStack_160,
                           auStack_178,&uStack_1b8,auStack_128,0x40000000,0);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return 1;
}
