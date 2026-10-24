/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC0F0B6F1659EDA49069658A03C112DFA2780DB7772B405C082D6B604809335A
 * Entry: 0x002e8e80, Ghidra index: 10547, label: FUN_002e8e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e8e80(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  /* The encoder consumes two guest 32-bit words, low word first. */
  puVar2 = param_1;
  iVar4 = 0;
  if (in_ECX[1] != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    do {
      iVar4 = (**(code **)(*in_ECX + 0x18))(&param_1);
      if (iVar4 < 0) {
        return iVar4;
      }
      cVar3 = (char)param_1;
      uVar7 = __allshl();
      *puVar2 = *puVar2 | (uint)uVar7;
      puVar2[1] = puVar2[1] | (uint)((ulonglong)uVar7 >> 0x20);
    } while (cVar3 < '\0');
    return iVar4;
  }
  uVar5 = *param_1;
  uVar6 = param_1[1];
  bVar1 = true;
  do {
    if (uVar5 == 0 && uVar6 == 0) {
      if (!bVar1) {
        return iVar4;
      }
LAB_002e8eae:
      cVar3 = '\0';
    }
    else {
      if ((uVar6 == 0) && (uVar5 < 0x80)) goto LAB_002e8eae;
      cVar3 = '\x01';
    }
    param_1 = (uint *)(uintptr_t)(((uint32_t)(uintptr_t)param_1 & UINT32_C(0xffffff00)) | ((uint32_t)((uint8_t)cVar3 << 7 | (uint8_t)uVar5 & UINT8_C(0x7f))));
    uVar5 = (uVar5 >> 7) | (uVar6 << 25);
    uVar6 = uVar6 >> 7;
    iVar4 = (**(code **)(*in_ECX + 0x18))(&param_1);
    bVar1 = false;
    if (iVar4 < 0) {
      return iVar4;
    }
  } while( true );
}
