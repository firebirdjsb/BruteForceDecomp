/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A49D505E5385826BE2D57BC06859D9FB01C3F0A14C367CFA9440D22528725647
 * Entry: 0x00208a70, Ghidra index: 7317, label: FUN_00208a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
char FUN_00208a70(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  int in_ECX;
  
  puVar4 = param_3;
  piVar3 = param_2;
  uVar2 = param_1;
  cVar5 = FUN_001fedb0(param_1,param_2,param_3);
  bf_x86_word_store_byte(&param_3,0U,(uint8_t)cVar5);
  if (cVar5 == '\0') {
    cVar5 = (char)uVar2;
    bf_x86_word_store_byte(&param_3,0U,UINT8_C(0));
    bVar1 = false;
    if (*piVar3 == -0x1f71ca91) {
      if (cVar5 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *puVar4;
      }
      else {
        *puVar4 = *(undefined4 *)(in_ECX + 0x40);
      }
      bVar1 = true;
      bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
    }
    if (!bVar1) {
      bVar1 = false;
      if (*piVar3 == -0x12ae703d) {
        if (cVar5 == '\0') {
          *(undefined4 *)(in_ECX + 0x58) = *puVar4;
        }
        else {
          *puVar4 = *(undefined4 *)(in_ECX + 0x58);
        }
        bVar1 = true;
        bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
      }
      if (!bVar1) {
        bVar1 = false;
        if (*piVar3 == 0xe21b1b4) {
          if (cVar5 == '\0') {
            *(undefined4 *)(in_ECX + 0x50) = *puVar4;
          }
          else {
            *puVar4 = *(undefined4 *)(in_ECX + 0x50);
          }
          bVar1 = true;
          bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
        }
        if ((!bVar1) && (*piVar3 == -0x1dd4d6e)) {
          if (cVar5 == '\0') {
            *(undefined4 *)(in_ECX + 0x4c) = *puVar4;
          }
          else {
            *puVar4 = *(undefined4 *)(in_ECX + 0x4c);
          }
          bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
        }
      }
    }
    param_1 = 0xee3845fb;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar2,&param_1,piVar3,1);
    if (bf_x86_word_load_byte(&param_3,0U) == UINT8_C(0)) {
      if (*param_2 == 0x12876a96) {
        if (cVar5 == '\0') {
          *(undefined4 *)(in_ECX + 0x5c) = *puVar4;
        }
        else {
          *puVar4 = *(undefined4 *)(in_ECX + 0x5c);
        }
        bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
      }
      if ((bf_x86_word_load_byte(&param_3,0U) == UINT8_C(0)) && (*param_2 == 0xe63f6cd)) {
        if (cVar5 != '\0') {
          *puVar4 = *(undefined4 *)(in_ECX + 0x54);
          return '\x01';
        }
        *(undefined4 *)(in_ECX + 0x54) = *puVar4;
        bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
      }
    }
  }
  return (char)bf_x86_word_load_byte(&param_3,0U);
}
