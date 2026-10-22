/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20FFE08502A1044D08F09428B76C8B51A0A174A80A7E5B211BDD5D2CABCCDCF5
 * Entry: 0x00229fe0, Ghidra index: 7676, label: FUN_00229fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00229fe0(int param_1,float param_2)

{
  int iVar1;
  char cVar2;
  float10 fVar3;
  float fVar4;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  cVar2 = false;
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x390) != 0) {
    local_14 = 0.0;
    FUN_00234f00();
    local_10 = *(float *)(param_1 + 0x394) - local_14;
    cVar2 = ABS(local_10) < 0.5235988;
    fVar4 = 1.0;
    if ((*(byte *)(param_1 + 0x37c) & 2) == 0) {
      fVar4 = 0.1;
    }
    if (fVar4 * 0.017453292 < ABS(local_10)) {
      local_c = param_2 * *(float *)(iVar1 + 0x3f8);
      fVar3 = (float10)FUN_0001fb30(local_10);
      local_8 = (float)fVar3;
      fVar4 = -local_c;
      local_10 = local_c;
      local_4 = local_8;
      if (local_8 <= fVar4) {
        local_4 = fVar4;
      }
      if (local_c <= local_4) {
        local_4 = local_c;
      }
      local_c = fVar4;
      fVar3 = (float10)FUN_0001fb30(local_4 + local_14);
      local_14 = (float)fVar3;
      FUN_00234dc0(*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x10),&local_14);
    }
  }
  if (*(int *)(param_1 + 0x398) != 0) {
    local_14 = 0.0;
    FUN_00234f00();
    local_c = *(float *)(param_1 + 0x39c) - local_14;
    if (ABS(local_c) < 0.2617994) {
      cVar2 = cVar2 + '\x01';
    }
    fVar4 = 1.0;
    if ((*(byte *)(param_1 + 0x37c) & 2) == 0) {
      fVar4 = 0.1;
    }
    if (fVar4 * 0.017453292 < ABS(local_c)) {
      local_10 = param_2 * *(float *)(iVar1 + 0x3fc);
      fVar3 = (float10)FUN_0001fb30(local_c);
      local_c = (float)fVar3;
      local_8 = -local_10;
      local_4 = local_10;
      fVar4 = local_c;
      if (local_c <= local_8) {
        fVar4 = local_8;
      }
      if (local_10 <= fVar4) {
        fVar4 = local_10;
      }
      local_10 = fVar4;
      fVar3 = (float10)FUN_0001fb30(fVar4 + local_14);
      local_14 = (float)fVar3;
      FUN_00234dc0(*(undefined4 *)(*(int *)(param_1 + 0x398) + 0x10),&local_14);
    }
  }
  if ((cVar2 == '\x02') && ((*(byte *)(param_1 + 0x37c) & 2) != 0)) {
    *(byte *)(param_1 + 0x37c) = *(byte *)(param_1 + 0x37c) | 4;
  }
  return;
}
