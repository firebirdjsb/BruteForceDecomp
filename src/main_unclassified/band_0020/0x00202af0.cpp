/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFAB2FAC68A640C0E5D90E582F630AE7C7457DA5858C226E33D4C9D2466D4AA5
 * Entry: 0x00202af0, Ghidra index: 7275, label: FUN_00202af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
char FUN_00202af0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int in_ECX;
  char cVar5;
  
  puVar3 = param_3;
  piVar2 = param_2;
  uVar1 = param_1;
  cVar4 = FUN_001fedb0(param_1,param_2,param_3);
  /* 0x00202b0c writes just AL to the reused third input slot;
   * 0x00202b35 reads that byte. Saved puVar3 is the original pointer. */
  bf_x86_word_store_byte(&param_3,0U,(uint8_t)cVar4);
  if (cVar4 == '\0') {
    param_1 = 0xfe604ae;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar1,&param_1,piVar2,2);
    cVar4 = (char)bf_x86_word_load_byte(&param_3,0U);
    if (bf_x86_word_load_byte(&param_3,0U) == 0U) {
      cVar5 = (char)uVar1;
      if (*param_2 == -0x188349b2) {
        if (cVar5 == '\0') {
          *(undefined4 *)(in_ECX + 0x48) = *puVar3;
        }
        else {
          *puVar3 = *(undefined4 *)(in_ECX + 0x48);
        }
        cVar4 = '\x01';
      }
      if ((cVar4 == '\0') && (*param_2 == 0x6d92de9)) {
        if (cVar5 != '\0') {
          *puVar3 = *(undefined4 *)(in_ECX + 0x4c);
          return '\x01';
        }
        *(undefined4 *)(in_ECX + 0x4c) = *puVar3;
        cVar4 = '\x01';
      }
    }
  }
  return cVar4;
}
