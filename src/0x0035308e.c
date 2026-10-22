/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3E6BC1397B36B88702C74F6CB9B190EF6A7A19A917274A795B8CE69C44BBBCF
 * Entry: 0x0035308e, Ghidra index: 13076, label: FUN_0035308e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0035308e(char *param_1,uint param_2,uint *param_3)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  
  *param_3 = 0x200;
  while( true ) {
    while( true ) {
      if ((param_2 == 0) || (cVar1 = *param_1, cVar1 == '\0')) {
        return 1;
      }
      if (cVar1 != '\x01') break;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    }
    if (((param_2 < 2) || (bVar2 = param_1[1], bVar2 < 2)) || (uVar4 = (uint)bVar2, param_2 < uVar4)
       ) break;
    if (cVar1 == '\x02') {
      if (bVar2 != 4) {
        return 0;
      }
      cVar1 = param_1[3];
      cVar3 = param_1[2];
      *param_3 = (uint)CONCAT11(cVar3,cVar1);
      if (CONCAT11(cVar3,cVar1) < 0x58) {
        *param_3 = 0x200;
      }
    }
    param_1 = param_1 + uVar4;
    param_2 = param_2 - uVar4;
  }
  return 0;
}
