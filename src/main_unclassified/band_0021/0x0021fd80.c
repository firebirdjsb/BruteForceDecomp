/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62F43252B357786BE5B0C6AB3570AF02B9E6B603C8A6FB210F8ED6EBCA51E7D4
 * Entry: 0x0021fd80, Ghidra index: 7558, label: FUN_0021fd80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
char FUN_0021fd80(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  uint8_t return_byte;
  int in_ECX;
  
  puVar4 = param_3;
  piVar3 = param_2;
  uVar2 = param_1;
  cVar5 = FUN_0015fc20(param_1,param_2,param_3);
  return_byte = (uint8_t)cVar5;
  bf_x86_word_store_byte(&param_3,0U,(uint8_t)cVar5);
  if (cVar5 == '\0') {
    cVar5 = (char)uVar2;
    bf_x86_word_store_byte(&param_3,0U,UINT8_C(0));
    bVar1 = false;
    if (*piVar3 == -0x149a0635) {
      if (cVar5 == '\0') {
        *(undefined4 *)(in_ECX + 0x7c) = *puVar4;
      }
      else {
        *puVar4 = *(undefined4 *)(in_ECX + 0x7c);
      }
      bVar1 = true;
      bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
    }
    if (!bVar1) {
      bVar1 = false;
      if (*piVar3 == -0x12ee0720) {
        if (cVar5 == '\0') {
          *(undefined4 *)(in_ECX + 0x80) = *puVar4;
        }
        else {
          *puVar4 = *(undefined4 *)(in_ECX + 0x80);
        }
        bVar1 = true;
        bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
      }
      if (!bVar1) {
        bVar1 = false;
        if (*piVar3 == -0x120ad993) {
          if (cVar5 == '\0') {
            *(undefined4 *)(in_ECX + 0x84) = *puVar4;
          }
          else {
            *puVar4 = *(undefined4 *)(in_ECX + 0x84);
          }
          bVar1 = true;
          bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
        }
        if (!bVar1) {
          bVar1 = false;
          if (*piVar3 == 0x3c650db) {
            if (cVar5 == '\0') {
              *(undefined4 *)(in_ECX + 0x90) = *puVar4;
            }
            else {
              *puVar4 = *(undefined4 *)(in_ECX + 0x90);
            }
            bVar1 = true;
            bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
          }
          if (!bVar1) {
            bVar1 = false;
            if (*piVar3 == 0x2225e10) {
              if (cVar5 == '\0') {
                *(undefined4 *)(in_ECX + 0x94) = *puVar4;
              }
              else {
                *puVar4 = *(undefined4 *)(in_ECX + 0x94);
              }
              bVar1 = true;
              bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
            }
            if ((!bVar1) && (*piVar3 == 0x2a1892c)) {
              if (cVar5 == '\0') {
                *(undefined4 *)(in_ECX + 0x98) = *puVar4;
              }
              else {
                *puVar4 = *(undefined4 *)(in_ECX + 0x98);
              }
              bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
            }
          }
        }
      }
    }
    param_1 = 0xfaf83b13;
    FUN_000ee450(uVar2,&param_1,piVar3);
    param_1 = 0xedf1bc9c;
    FUN_000ee450(uVar2,&param_1,param_2);
    /* Original 0x0021FEE3 reads the low byte of the modified argument
     * stack word after the helper callbacks. Later MOV AL,1 writes only
     * the return register, not this stack word. */
    return_byte = bf_x86_word_load_byte(&param_3,0U);
    if ((char)return_byte == '\0') {
      if (*param_2 == 0x193305dc) {
        if (cVar5 == '\0') {
          *(undefined4 *)(in_ECX + 0x88) = *puVar4;
        }
        else {
          *puVar4 = *(undefined4 *)(in_ECX + 0x88);
        }
        return_byte = UINT8_C(1);
      }
      if ((char)return_byte == '\0') {
        if (*param_2 == 0x61c3805) {
          if (cVar5 == '\0') {
            *(undefined4 *)(in_ECX + 0x8c) = *puVar4;
          }
          else {
            *puVar4 = *(undefined4 *)(in_ECX + 0x8c);
          }
          return_byte = UINT8_C(1);
        }
        if (((char)return_byte == '\0') && (*param_2 == -0x5382377)) {
          if (cVar5 != '\0') {
            *puVar4 = *(undefined4 *)(in_ECX + 0x9c);
            return '\x01';
          }
          *(undefined4 *)(in_ECX + 0x9c) = *puVar4;
          return_byte = UINT8_C(1);
        }
      }
    }
  }
  return (char)return_byte;
}
