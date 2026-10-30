/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E62698BDE1D3D98A2A6300D3BE526D8A386D38776BBE111D858D1E28D5538154
 * Entry: 0x002f21ca, Ghidra index: 10795, label: FUN_002f21ca
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <string.h>
void FUN_002f21ca(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  /* Original scratch at [EBP-0xc..EBP-1]: 12 raw bytes, with no field model. */
  uint16_t scratch_words[6];
  uint32_t overlapping_word;
  
  iVar3 = 0x3b7288;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x3b73e8;
    }
    if (param_3 == 0) {
      *param_1 = 0;
    }
    while (param_2 != 0) {
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      iVar3 = iVar3 + 0x54;
      param_2 = uVar1;
      if (uVar2 != 0) {
        puVar4 = (ushort *)(iVar3 + uVar2 * 0xc);
        if (0x7fff < *puVar4) {
          /* 0x002f2220-0x002f2222: three MOVSD copies, totaling 12 bytes.
           * 0x002f2223: DEC dword [EBP-0xa], two bytes into that scratch.
           * memcpy preserves the unaligned 4-byte overlap; subtraction wraps
           * as a 32-bit word. The callee's data format remains ABI_UNVERIFIED. */
          memcpy(scratch_words, puVar4, sizeof(scratch_words));
          memcpy(&overlapping_word, (unsigned char *)scratch_words + 2,
                 sizeof(overlapping_word));
          overlapping_word -= UINT32_C(1);
          memcpy((unsigned char *)scratch_words + 2, &overlapping_word,
                 sizeof(overlapping_word));
          puVar4 = scratch_words;
        }
        FUN_002f1fa8(param_1,puVar4);
      }
    }
  }
  return;
}
