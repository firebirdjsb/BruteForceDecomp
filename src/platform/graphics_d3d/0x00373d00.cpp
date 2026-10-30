/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFC7F5EF872AA6BAEC8BD10194B525122425BD521ADC2449CEB8504E4751F9DB
 * Entry: 0x00373d00, Ghidra index: 13418, label: FUN_00373d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b790;
void FUN_00373d00(int *param_1,int *param_2,int *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(in_ECX + 0x10);
  if (uVar7 == 0) {
    uVar7 = *(uint *)(in_ECX + 0xc);
    iVar5 = (uVar7 >> 0x1c) - in_EAX;
    uVar4 = (uVar7 >> 0x14 & 0xf) - in_EAX;
    uVar7 = (uVar7 >> 0x18 & 0xf) - in_EAX;
    bVar1 = (&DAT_0037b790)[*(byte *)(in_ECX + 0xd)];
    *param_2 = 1 << (((int)uVar7 < 1) - 1U & (byte)uVar7 & 0x1f);
    *param_3 = 1 << ((iVar5 < 1) - 1U & (byte)iVar5 & 0x1f);
    *param_1 = 1 << (((int)uVar4 < 1) - 1U & (byte)uVar4 & 0x1f);
    bVar2 = *(byte *)(in_ECX + 0xd);
    bVar3 = 0;
    if ((bVar2 == 0xc) || ((0xd < bVar2 && (bVar2 < 0x10)))) {
      bVar3 = 1;
    }
    uVar6 = -(uint)bVar3 & 2;
    if ((int)uVar4 < (int)uVar6) {
      uVar4 = uVar6;
    }
    iVar5 = 1 << ((byte)uVar4 & 0x1f);
    if ((int)uVar7 < (int)uVar6) {
      uVar7 = uVar6;
    }
    if (bVar2 == 0xc) {
      uVar4 = iVar5 * 2;
    }
    else if ((bVar2 < 0xe) || (0xf < bVar2)) {
      uVar4 = iVar5 * (bVar1 & 0x3c) >> 3;
    }
    else {
      uVar4 = iVar5 * 4;
    }
    *param_4 = uVar4;
    *param_5 = (1 << ((byte)uVar7 & 0x1f)) * iVar5 * (bVar1 & 0x3c) >> 3;
    return;
  }
  *param_1 = (uVar7 & 0xfff) + 1;
  *param_2 = (uVar7 >> 0xc & 0xfff) + 1;
  *param_3 = 1;
  uVar7 = ((uVar7 >> 0x18) + 1) * 0x40;
  *param_4 = uVar7;
  *param_5 = *param_2 * uVar7;
  return;
}
