/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A141C6FC9AC2F1770FB7FDCA6623DE2F5C7B932854A2E90E83650942CC0ADAF3
 * Entry: 0x0035b940, Ghidra index: 13201, label: FUN_0035b940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b5108;
extern uint32_t DAT_004b510c;
extern uint32_t DAT_004b5110;
extern uint32_t DAT_004b5114;
extern uint32_t DAT_004b5118;
/* WARNING: Removing unreachable block (ram,0x0035ba15) */

uint * FUN_0035b940(uint param_1,uint param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  longlong local_8;
  
  uVar6 = param_1;
  if (param_1 < 0xac44) {
    param_1 = (-(uint)(param_1 < 0x5622) & 0xfffffe00) + 0x400;
  }
  else {
    param_1 = 0x800;
  }
  uVar2 = param_1 * param_2;
  local_24 = uVar2 * 2;
  local_1c = param_3 & 1;
  if (local_1c == 0) {
    uVar6 = uVar6 * param_2;
    param_2 = 1;
    param_1 = uVar2;
  }
  uVar7 = param_1 >> 1;
  uVar2 = uVar6 + 1 >> 1;
  uVar6 = 0;
  do {
    if (uVar2 <= (uint)(&DAT_004b5108)[uVar6]) break;
    if (uVar2 <= (uint)(&DAT_004b510c)[uVar6]) {
      uVar6 = uVar6 + 1;
      break;
    }
    if (uVar2 <= (uint)(&DAT_004b5110)[uVar6]) {
      uVar6 = uVar6 + 2;
      break;
    }
    if (uVar2 <= (uint)(&DAT_004b5114)[uVar6]) {
      uVar6 = uVar6 + 3;
      break;
    }
    if (uVar2 <= (uint)(&DAT_004b5118)[uVar6]) {
      uVar6 = uVar6 + 4;
      break;
    }
    uVar6 = uVar6 + 5;
  } while (uVar6 < 0x19);
  local_20 = uVar7;
  FUN_002f8cb0(&local_18,uVar6 * 4 + 4);
  local_8 = (longlong)ROUND(SQRT((double)uVar7));
  FUN_002f8cb0(&local_14,(int)local_8 * 4 + 8);
  if (local_1c == 0) {
    uVar7 = uVar7 * 4 - 1;
  }
  else {
    uVar7 = param_1 * 5 & 0x3fffffff;
  }
  FUN_002f8cb0(&local_28,uVar7);
  uVar7 = local_24;
  FUN_002f8cb0(&local_10,local_24 >> 1);
  FUN_002f8cb0(&local_c,uVar7);
  puVar3 = (uint *)FUN_002f8da0(0x34);
  puVar4 = (uint *)0x0;
  if (puVar3 != (uint *)0x0) {
    puVar4 = puVar3;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar3[8] = local_18;
    puVar3[9] = local_14;
    puVar3[10] = local_28;
    puVar3[0xb] = local_10;
    puVar3[4] = param_2;
    puVar3[5] = local_c;
    puVar3[2] = local_24;
    puVar3[0xc] = param_3;
    puVar3[7] = uVar6;
    fVar1 = (float)(int)param_1;
    *puVar3 = param_1;
    puVar3[3] = local_24 >> 4;
    if ((int)param_1 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    uVar7 = 0;
    puVar3[1] = (uint)(2.0 / SQRT(fVar1));
    if (uVar6 != 0) {
      do {
        *(uint *)(puVar3[8] + uVar7 * 4) = ((&DAT_004b5108)[uVar7] * local_20) / uVar2;
        if (*(int *)(puVar3[8] + uVar7 * 4) == 0) {
          *(undefined4 *)(puVar3[8] + uVar7 * 4) = 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    *(uint *)(puVar3[8] + uVar7 * 4) = local_20;
    *(undefined4 *)puVar3[9] = 0;
    puVar3[6] = 1;
    puVar4 = puVar3;
  }
  return puVar4;
}
