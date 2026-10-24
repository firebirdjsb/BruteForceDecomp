/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B750A647A98852B37D31D4CCA1DCC340DD055541FE8C32CFF209559527E0C4C
 * Entry: 0x002e1800, Ghidra index: 10372, label: FUN_002e1800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e1800(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  byte bVar6;
  undefined4 *puVar7;
  byte local_26;
  char local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  char local_14;
  byte local_13;
  byte local_12 [6];
  int local_c;
  
  uVar2 = param_2;
  local_24 = *(char *)(param_1 + 4);
  iVar3 = *(int *)(in_ECX + 0x104);
  ((uint8_t *)&local_18)[2] = 0;
  puVar7 = &local_18;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_26 = 0;
  ((uint8_t *)&local_18)[3] = ((uint8_t *)&local_18)[3] & 0xfe;
  iVar5 = 0;
  bVar1 = true;
  local_1c = in_ECX;
  local_c = iVar3;
  if (*(char *)(param_1 + 5) != '\0') {
    do {
      if ((bVar1) || (7 < (((uint8_t *)&local_18)[3] & 0xe))) {
        if ((local_26 != 0) && (iVar3 = FUN_002e0960(&local_18,uVar2), iVar3 < 0)) {
          return iVar3;
        }
        iVar3 = *(int *)(in_ECX + 0x104);
        local_12[0] = 0;
        local_12[1] = 0;
        local_12[2] = 0;
        local_12[3] = 0;
        ((uint8_t *)&local_18)[3] = ((uint8_t *)&local_18)[3] & 1;
        local_13 = 0;
        local_12[4] = 0;
        local_12[5] = 0;
        iVar5 = 0;
        bVar1 = false;
        local_14 = local_24;
      }
      local_20 = *(int *)(in_ECX + 0xf0) - iVar5;
      param_2 = param_2 & 0xffffff00;
      iVar4 = FUN_002e3660(iVar3,&local_20,local_24,&param_2);
      if (iVar4 < 0) {
        if ((((uint8_t *)&local_18)[3] & 0xe) == 0) {
          return iVar4;
        }
        bVar1 = true;
      }
      else {
        iVar3 = iVar3 + local_20;
        iVar5 = iVar5 + local_20;
        local_12[0] = (uint8_t)(local_12[0] | ((uint32_t)(uint8_t)((uint32_t)local_20 >> 8) << ((local_13 & 0xf) << 1)));
        local_13 = local_13 + 1;
        local_12[local_13] = (byte)local_20;
        bVar6 = ((uint8_t *)&local_18)[3] | ('\x01' << (((uint8_t *)&local_18)[3] >> 1 & 7)) << 4;
        local_12[5] = local_12[5] | (char)param_2 << (((uint8_t *)&local_18)[3] & 0xe);
        ((uint8_t *)&local_18)[3] = bVar6 ^ ((((uint8_t *)&local_18)[3] & 0xfe) + 2 ^ bVar6) & 0xe;
        local_24 = local_24 + '\x01';
        if (local_24 == '\0') {
          local_24 = '\x01';
        }
        local_26 = local_26 + 1;
        in_ECX = local_1c;
      }
    } while (local_26 < *(byte *)(param_1 + 5));
  }
  if (((((uint8_t *)&local_18)[3] & 0xe) == 0) || (iVar3 = FUN_002e0960(&local_18,uVar2), -1 < iVar3)) {
    FUN_002e2c20(7,1);
    FUN_002e2c20(7,1);
    iVar3 = 0;
  }
  return iVar3;
}
