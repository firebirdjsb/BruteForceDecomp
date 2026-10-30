/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 616C03BF83A483520A4A94EC3B1C13136F06D3FD3AEBD46BDAFD0D2D879F5D06
 * Entry: 0x00209f40, Ghidra index: 7328, label: FUN_00209f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* 0x001FEDB0 byte-buffer callee draft matches this source pointer;
 * host pointer address is preserved, while Xbox guest ABI is UNVERIFIED. */
extern char FUN_001fedb0(undefined4 flag, int *key, byte *data);
#include "bf_x86_word_lanes.h"
/* Original byte accesses preserve the rest of the reused incoming word.
 * Complete guest stack/register ABI and helper behavior remain unverified. */
char FUN_00209f40(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined1 uVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  piVar2 = param_2;
  cVar4 = FUN_001fedb0(param_1,param_2,reinterpret_cast<byte *>(param_3));
  bf_x86_word_store_byte(&param_3,0U,cVar4);
  if (cVar4 == '\0') {
    uVar5 = *(undefined1 *)(in_ECX + 0xc0);
    cVar4 = (char)param_1;
    bf_x86_word_store_byte(&param_3,0U,'\0');
    bVar1 = false;
    if (*piVar2 == 0x191e7141) {
      if (cVar4 == '\0') {
        uVar5 = *(undefined1 *)puVar3;
      }
      else {
        *(undefined1 *)puVar3 = uVar5;
      }
      bVar1 = true;
      bf_x86_word_store_byte(&param_3,0U,'\x01');
    }
    *(undefined1 *)(in_ECX + 0xc0) = uVar5;
    uVar5 = *(undefined1 *)(in_ECX + 0xc1);
    if ((!bVar1) && (*piVar2 == 0x15b41165)) {
      if (cVar4 == '\0') {
        uVar5 = *(undefined1 *)puVar3;
      }
      else {
        *(undefined1 *)puVar3 = uVar5;
      }
      bVar1 = true;
      bf_x86_word_store_byte(&param_3,0U,'\x01');
    }
    *(undefined1 *)(in_ECX + 0xc1) = uVar5;
    if ((!bVar1) && (*piVar2 == 0x3944a39)) {
      if (cVar4 == '\0') {
        *(undefined4 *)(in_ECX + 0xac) = *puVar3;
      }
      else {
        *puVar3 = *(undefined4 *)(in_ECX + 0xac);
      }
      bVar1 = true;
      bf_x86_word_store_byte(&param_3,0U,'\x01');
    }
    if (!bVar1) {
      bVar1 = false;
      if (*piVar2 == -0x1854e275) {
        puVar6 = (undefined4 *)(in_ECX + 0x7c);
        puVar7 = puVar3;
        if (cVar4 != '\0') {
          puVar6 = puVar3;
          puVar7 = (undefined4 *)(in_ECX + 0x7c);
        }
        FUN_0003d730(puVar6,puVar7);
        bVar1 = true;
        bf_x86_word_store_byte(&param_3,0U,'\x01');
      }
      if (!bVar1) {
        bVar1 = false;
        if (*piVar2 == -0x87a4b41) {
          if (cVar4 == '\0') {
            *(undefined4 *)(in_ECX + 0xc4) = *puVar3;
          }
          else {
            *puVar3 = *(undefined4 *)(in_ECX + 0xc4);
          }
          bVar1 = true;
          bf_x86_word_store_byte(&param_3,0U,'\x01');
        }
        if ((!bVar1) && (*piVar2 == 0x1e5d6c57)) {
          if (cVar4 == '\0') {
            *(undefined4 *)(in_ECX + 200) = *puVar3;
          }
          else {
            *puVar3 = *(undefined4 *)(in_ECX + 200);
          }
          bf_x86_word_store_byte(&param_3,0U,'\x01');
        }
      }
    }
    param_2 = (int *)0xf0060b38;
    FUN_0020d430(*(undefined4 *)(in_ECX + 0x10),param_1,&param_2,piVar2,puVar3,&param_3,1);
  }
  return (char)bf_x86_word_load_byte(&param_3,0U);
}
