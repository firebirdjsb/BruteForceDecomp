/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D83D50F8204A9107DF71C98909658215C2DB25D65B1FD260A7F1BCB55065C7B0
 * Entry: 0x00203550, Ghidra index: 7282, label: FUN_00203550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* 0x001FEDB0 byte-buffer callee draft matches this source pointer;
 * host pointer address is preserved, while Xbox guest ABI is UNVERIFIED. */
extern char FUN_001fedb0(undefined4 flag, int *key, byte *data);
#include "bf_x86_word_lanes.h"
/* Original XBE uses the low byte of the third incoming guest stack DWORD;
 * the input data pointer is independently preserved in EBP. Distinguish
 * that byte slot from the object pointed to by the original argument. */
char FUN_00203550(undefined4 param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  byte *pbVar5;
  char cVar6;
  byte bVar7;
  int in_ECX;
  
  pbVar5 = param_3;
  piVar4 = param_2;
  uVar3 = param_1;
  cVar6 = FUN_001fedb0(param_1,param_2,param_3);
  bf_x86_word_store_byte(&param_3,0U,(uint8_t)cVar6);
  if (cVar6 == '\0') {
    bVar7 = *(byte *)(in_ECX + 0x78) & 1;
    cVar6 = (char)uVar3;
    bf_x86_word_store_byte(&param_3,0U,UINT8_C(0));
    bVar2 = false;
    if (*piVar4 == 0x74c8d0d) {
      if (cVar6 == '\0') {
        bVar7 = *pbVar5;
      }
      else {
        *pbVar5 = bVar7;
      }
      bVar2 = true;
      bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
    }
    *(byte *)(in_ECX + 0x78) = *(byte *)(in_ECX + 0x78) ^ (*(byte *)(in_ECX + 0x78) ^ bVar7) & 1;
    bVar7 = *(byte *)(in_ECX + 0x80) & 1;
    if ((!bVar2) && (*param_2 == -0x11b45ce1)) {
      if (cVar6 == '\0') {
        bVar7 = *pbVar5;
      }
      else {
        *pbVar5 = bVar7;
      }
      bVar2 = true;
      bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
    }
    bVar1 = *(byte *)(in_ECX + 0x80);
    *(byte *)(in_ECX + 0x80) = bVar1 ^ (*(byte *)(in_ECX + 0x80) ^ bVar7) & 1;
    bVar7 = bVar1 >> 1 & 1;
    if ((!bVar2) && (*param_2 == -0x9499c66)) {
      if (cVar6 == '\0') {
        bVar7 = *pbVar5;
      }
      else {
        *pbVar5 = bVar7;
      }
      bVar2 = true;
      bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
    }
    *(byte *)(in_ECX + 0x80) =
         *(byte *)(in_ECX + 0x80) ^ (bVar7 << 1 ^ *(byte *)(in_ECX + 0x80)) & 2;
    bVar7 = *(byte *)(in_ECX + 0x48) >> 2 & 1;
    if ((!bVar2) && (*param_2 == 0x886701d)) {
      if (cVar6 == '\0') {
        bVar7 = *pbVar5;
      }
      else {
        *pbVar5 = bVar7;
      }
      bVar2 = true;
      bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
    }
    *(byte *)(in_ECX + 0x48) =
         *(byte *)(in_ECX + 0x48) ^ (bVar7 << 2 ^ *(byte *)(in_ECX + 0x48)) & 4;
    bVar7 = *(byte *)(in_ECX + 0x48) & 1;
    if ((!bVar2) && (*param_2 == -0x129b001d)) {
      if (cVar6 == '\0') {
        bVar7 = *pbVar5;
      }
      else {
        *pbVar5 = bVar7;
      }
      bVar2 = true;
      bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
    }
    bVar1 = *(byte *)(in_ECX + 0x48);
    *(byte *)(in_ECX + 0x48) = bVar1 ^ (*(byte *)(in_ECX + 0x48) ^ bVar7) & 1;
    bVar7 = bVar1 >> 1 & 1;
    if ((!bVar2) && (*param_2 == -0x1b278c4f)) {
      if (cVar6 == '\0') {
        bVar7 = *pbVar5;
      }
      else {
        *pbVar5 = bVar7;
      }
      bVar2 = true;
      bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
    }
    *(byte *)(in_ECX + 0x48) =
         *(byte *)(in_ECX + 0x48) ^ (bVar7 << 1 ^ *(byte *)(in_ECX + 0x48)) & 2;
    bVar7 = *(byte *)(in_ECX + 0x48) >> 3 & 1;
    if ((!bVar2) && (*param_2 == 0x366699f)) {
      if (cVar6 == '\0') {
        bVar7 = *pbVar5;
      }
      else {
        *pbVar5 = bVar7;
      }
      bVar2 = true;
      bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
    }
    *(byte *)(in_ECX + 0x48) =
         *(byte *)(in_ECX + 0x48) ^ (bVar7 << 3 ^ *(byte *)(in_ECX + 0x48)) & 8;
    if (!bVar2) {
      bVar2 = false;
      if (*param_2 == -0x1cfa1b6a) {
        if (cVar6 == '\0') {
          *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)pbVar5;
        }
        else {
          *(undefined4 *)pbVar5 = *(undefined4 *)(in_ECX + 0x44);
        }
        bVar2 = true;
        bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
      }
      if (!bVar2) {
        bVar2 = false;
        if (*param_2 == -0x8c16a46) {
          if (cVar6 == '\0') {
            *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)pbVar5;
          }
          else {
            *(undefined4 *)pbVar5 = *(undefined4 *)(in_ECX + 0x40);
          }
          bVar2 = true;
          bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
        }
        if (!bVar2) {
          bVar2 = false;
          if (*param_2 == -0x27c02b1) {
            if (cVar6 == '\0') {
              *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)pbVar5;
            }
            else {
              *(undefined4 *)pbVar5 = *(undefined4 *)(in_ECX + 0x74);
            }
            bVar2 = true;
            bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
          }
          if ((!bVar2) && (*param_2 == -0xb27afea)) {
            if (cVar6 == '\0') {
              *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)pbVar5;
            }
            else {
              *(undefined4 *)pbVar5 = *(undefined4 *)(in_ECX + 0x5c);
            }
            bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
          }
        }
      }
    }
    param_1 = 0xfe604ae;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar3,&param_1,param_2,2);
    if (((char)bf_x86_word_load_byte(&param_3,0U) == '\0') && (*param_2 == -0xd82d937)) {
      if (cVar6 == '\0') {
        *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)pbVar5;
      }
      else {
        *(undefined4 *)pbVar5 = *(undefined4 *)(in_ECX + 0x70);
      }
      bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
    }
    param_1 = 0xb6b92ba;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar3,&param_1,param_2,1);
    param_1 = 0x66f7e0f;
    FUN_00203350(uVar3,&param_1,param_2,pbVar5,&param_3);
  }
  return (char)bf_x86_word_load_byte(&param_3,0U);
}
