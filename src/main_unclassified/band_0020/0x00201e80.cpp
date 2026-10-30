/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F99A52250CEC93EC0721DACDA5E652C5B8C472880E389F5918BACE01C7213ABD
 * Entry: 0x00201e80, Ghidra index: 7267, label: FUN_00201e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
char FUN_00201e80(undefined4 param_1,int *param_2,undefined4 *param_3)

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
    if (*piVar3 == 0x1cd6c65a) {
      if (cVar5 == '\0') {
        *(undefined4 *)(in_ECX + 0x44) = *puVar4;
      }
      else {
        *puVar4 = *(undefined4 *)(in_ECX + 0x44);
      }
      bVar1 = true;
      bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
    }
    if (!bVar1) {
      bVar1 = false;
      if (*piVar3 == 0x186204df) {
        if (cVar5 == '\0') {
          *(undefined4 *)(in_ECX + 0x4c) = *puVar4;
        }
        else {
          *puVar4 = *(undefined4 *)(in_ECX + 0x4c);
        }
        bVar1 = true;
        bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
      }
      if (!bVar1) {
        bVar1 = false;
        if (*piVar3 == 0x443a484) {
          if (cVar5 == '\0') {
            *(undefined4 *)(in_ECX + 0x50) = *puVar4;
          }
          else {
            *puVar4 = *(undefined4 *)(in_ECX + 0x50);
          }
          bVar1 = true;
          bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
        }
        if (!bVar1) {
          bVar1 = false;
          if (*piVar3 == 0x3c650db) {
            if (cVar5 == '\0') {
              *(undefined4 *)(in_ECX + 0x48) = *puVar4;
            }
            else {
              *puVar4 = *(undefined4 *)(in_ECX + 0x48);
            }
            bVar1 = true;
            bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
          }
          if ((!bVar1) && (*piVar3 == 0x3c650db)) {
            if (cVar5 == '\0') {
              *(undefined4 *)(in_ECX + 0x48) = *puVar4;
            }
            else {
              *puVar4 = *(undefined4 *)(in_ECX + 0x48);
            }
            bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));
          }
        }
      }
    }
    param_1 = 0xc8cb44;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar2,&param_1,piVar3,0);
    param_1 = 0x37edc89;
    FUN_00201cb0(uVar2,&param_1,param_2,puVar4,&param_3);
  }
  return (char)bf_x86_word_load_byte(&param_3,0U);
}
