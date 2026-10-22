/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B5914D29BB0C5E37BD0B7F61022FB07617ECE13181E6029A3F6B53C0E88EF86
 * Entry: 0x0020f440, Ghidra index: 7411, label: FUN_0020f440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020f440(float param_1)

{
  float *pfVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar4 = *(int *)(in_ECX + 0xa8) + 1;
  if (0 < iVar4) {
    local_10 = 0;
    local_c = 0x18;
    local_8 = iVar4;
    do {
      iVar3 = 0;
      if (3 < iVar4) {
        iVar5 = 3;
        iVar2 = local_c;
        do {
          pfVar1 = (float *)(iVar2 + -8 + *(int *)(in_ECX + 0x80));
          *pfVar1 = param_1 * *(float *)(in_ECX + 0xb4) + *pfVar1;
          pfVar1 = (float *)(iVar2 + -4 + *(int *)(in_ECX + 0x80));
          *pfVar1 = param_1 * *(float *)(in_ECX + 0xb8) + *pfVar1;
          pfVar1 = (float *)(iVar2 + -8 + *(int *)(in_ECX + 0x80));
          if (100.0 < *(float *)(iVar2 + -8 + *(int *)(in_ECX + 0x80))) {
            *pfVar1 = *pfVar1 - 100.0;
          }
          pfVar1 = (float *)(iVar2 + -8 + *(int *)(in_ECX + 0x80));
          if (*(float *)(iVar2 + -8 + *(int *)(in_ECX + 0x80)) < -100.0) {
            *pfVar1 = *pfVar1 + 100.0;
          }
          pfVar1 = (float *)(iVar2 + -4 + *(int *)(in_ECX + 0x80));
          if (100.0 < *(float *)(iVar2 + -4 + *(int *)(in_ECX + 0x80))) {
            *pfVar1 = *pfVar1 - 100.0;
          }
          pfVar1 = (float *)(iVar2 + -4 + *(int *)(in_ECX + 0x80));
          if (*(float *)(iVar2 + -4 + *(int *)(in_ECX + 0x80)) < -100.0) {
            *pfVar1 = *pfVar1 + 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x80));
          *pfVar1 = param_1 * *(float *)(in_ECX + 0xb4) + *pfVar1;
          pfVar1 = (float *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x80));
          *pfVar1 = param_1 * *(float *)(in_ECX + 0xb8) + *pfVar1;
          pfVar1 = (float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x80));
          if (100.0 < *(float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x80))) {
            *pfVar1 = *pfVar1 - 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x80));
          if (*(float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x80)) < -100.0) {
            *pfVar1 = *pfVar1 + 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x80));
          if (100.0 < *(float *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x80))) {
            *pfVar1 = *pfVar1 - 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x80));
          if (*(float *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x80)) < -100.0) {
            *pfVar1 = *pfVar1 + 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x28 + *(int *)(in_ECX + 0x80));
          *pfVar1 = param_1 * *(float *)(in_ECX + 0xb4) + *pfVar1;
          pfVar1 = (float *)(iVar2 + 0x2c + *(int *)(in_ECX + 0x80));
          *pfVar1 = param_1 * *(float *)(in_ECX + 0xb8) + *pfVar1;
          pfVar1 = (float *)(iVar2 + 0x28 + *(int *)(in_ECX + 0x80));
          if (100.0 < *(float *)(iVar2 + 0x28 + *(int *)(in_ECX + 0x80))) {
            *pfVar1 = *pfVar1 - 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x28 + *(int *)(in_ECX + 0x80));
          if (*(float *)(iVar2 + 0x28 + *(int *)(in_ECX + 0x80)) < -100.0) {
            *pfVar1 = *pfVar1 + 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x2c + *(int *)(in_ECX + 0x80));
          if (100.0 < *(float *)(iVar2 + 0x2c + *(int *)(in_ECX + 0x80))) {
            *pfVar1 = *pfVar1 - 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x2c + *(int *)(in_ECX + 0x80));
          if (*(float *)(iVar2 + 0x2c + *(int *)(in_ECX + 0x80)) < -100.0) {
            *pfVar1 = *pfVar1 + 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x40 + *(int *)(in_ECX + 0x80));
          *pfVar1 = param_1 * *(float *)(in_ECX + 0xb4) + *pfVar1;
          pfVar1 = (float *)(iVar2 + 0x44 + *(int *)(in_ECX + 0x80));
          *pfVar1 = param_1 * *(float *)(in_ECX + 0xb8) + *pfVar1;
          pfVar1 = (float *)(iVar2 + 0x40 + *(int *)(in_ECX + 0x80));
          if (100.0 < *(float *)(iVar2 + 0x40 + *(int *)(in_ECX + 0x80))) {
            *pfVar1 = *pfVar1 - 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x40 + *(int *)(in_ECX + 0x80));
          if (*(float *)(iVar2 + 0x40 + *(int *)(in_ECX + 0x80)) < -100.0) {
            *pfVar1 = *pfVar1 + 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x44 + *(int *)(in_ECX + 0x80));
          if (100.0 < *(float *)(iVar2 + 0x44 + *(int *)(in_ECX + 0x80))) {
            *pfVar1 = *pfVar1 - 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x44 + *(int *)(in_ECX + 0x80));
          if (*(float *)(iVar2 + 0x44 + *(int *)(in_ECX + 0x80)) < -100.0) {
            *pfVar1 = *pfVar1 + 100.0;
          }
          iVar5 = iVar5 + 4;
          iVar3 = iVar3 + 4;
          iVar2 = iVar2 + 0x60;
        } while (iVar5 < iVar4);
      }
      if (iVar3 < iVar4) {
        iVar2 = (local_10 + iVar3) * 0x18;
        iVar3 = iVar4 - iVar3;
        do {
          pfVar1 = (float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x80));
          *pfVar1 = param_1 * *(float *)(in_ECX + 0xb4) + *pfVar1;
          pfVar1 = (float *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x80));
          *pfVar1 = param_1 * *(float *)(in_ECX + 0xb8) + *pfVar1;
          pfVar1 = (float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x80));
          if (100.0 < *(float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x80))) {
            *pfVar1 = *pfVar1 - 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x80));
          if (*(float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x80)) < -100.0) {
            *pfVar1 = *pfVar1 + 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x80));
          if (100.0 < *(float *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x80))) {
            *pfVar1 = *pfVar1 - 100.0;
          }
          pfVar1 = (float *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x80));
          if (*(float *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x80)) < -100.0) {
            *pfVar1 = *pfVar1 + 100.0;
          }
          iVar2 = iVar2 + 0x18;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_10 = local_10 + iVar4;
      local_c = local_c + iVar4 * 0x18;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}
