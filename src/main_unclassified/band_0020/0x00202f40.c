/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 320CB01D45AE02FDBF082D43FA39528FC938D04D609B4D392D64629472DBA284
 * Entry: 0x00202f40, Ghidra index: 7278, label: FUN_00202f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* Original byte stores reuse the incoming argument slot; saved pointers stay
 * intact. Only lane 0 is replaced/read. Implicit helper register inputs and
 * the complete guest stack/native ABI remain ABI_UNVERIFIED. */
char FUN_00202f40(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int in_ECX;
  
  puVar3 = param_3;
  piVar2 = param_2;
  uVar1 = param_1;
  cVar4 = FUN_001fedb0(param_1,param_2,param_3);
  bf_x86_word_store_byte(&param_3,0U,cVar4);
  if (cVar4 == '\0') {
    cVar4 = (char)uVar1;
    bf_x86_word_store_byte(&param_3,0U,'\0');
    if (*piVar2 == -0x17bae799) {
      if (cVar4 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *puVar3;
      }
      else {
        *puVar3 = *(undefined4 *)(in_ECX + 0x40);
      }
      bf_x86_word_store_byte(&param_3,0U,'\x01');
    }
    param_1 = 0xe36da225;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar1,&param_1,piVar2,0);
    if (((char)bf_x86_word_load_byte(&param_3,0U) == '\0') && (*param_2 == -0x1cafaaf)) {
      if (cVar4 == '\0') {
        *(undefined4 *)(in_ECX + 0x54) = *puVar3;
      }
      else {
        *puVar3 = *(undefined4 *)(in_ECX + 0x54);
      }
      bf_x86_word_store_byte(&param_3,0U,'\x01');
    }
    param_1 = 0x32d173b;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar1,&param_1,param_2,0);
    param_1 = 0xfe604ae;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar1,&param_1,param_2,2);
    if (((char)bf_x86_word_load_byte(&param_3,0U) == '\0') && (*param_2 == 0x1d05c4b2)) {
      if (cVar4 != '\0') {
        *puVar3 = *(undefined4 *)(in_ECX + 0x60);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 0x60) = *puVar3;
      bf_x86_word_store_byte(&param_3,0U,'\x01');
    }
  }
  return (char)bf_x86_word_load_byte(&param_3,0U);
}
