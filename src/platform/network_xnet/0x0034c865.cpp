/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 272BB2FECF7C933D5E084C1F172B8596E92CA4A60051CDBAFD5994EE7B2FCBCA
 * Entry: 0x0034c865, Ghidra index: 12973, label: FUN_0034c865
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
void FUN_0034c865(undefined2 param_1,undefined2 param_2)

{
  uint uVar1;
  byte bVar2;
  int *in_ECX;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar1 = in_ECX[2];
  pcVar5 = (char *)((uVar1 >> 0x12 & 0x3c) + 0x14 + *in_ECX);
  uVar3 = uVar1 & 7;
  if (3 < uVar3) {
    uVar6 = uVar1 >> 0x10 & 3;
    if (uVar6 == 0) {
      return;
    }
    uVar4 = uVar1 >> 4 & 7;
    if ((uVar3 == 2) || (uVar3 == 5)) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    uVar3 = (-(uint)bVar2 & 0xc) + uVar6 * 2;
    if (uVar4 < uVar3) {
      uVar3 = uVar4;
    }
    pcVar5 = pcVar5 + ((uVar1 >> 5 & 0x7f8) - uVar3) + 0xc;
    if (uVar6 == 1) {
      /* 0x0034c8c8/0x0034c8d0 load byte 1 of each 16-bit stack input;
       * the following ADD AL,0x18 and byte stores retain byte-width results. */
      *pcVar5 = bf_x86_word_load_byte(&param_1,1U) + '\x18';
      pcVar5[1] = bf_x86_word_load_byte(&param_2,1U) + '\x18';
      return;
    }
  }
  *(undefined2 *)pcVar5 = param_1;
  *(undefined2 *)(pcVar5 + 2) = param_2;
  return;
}
