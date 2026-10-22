/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D5786B5F0772A353C21FD0D058C1F941B078F0DED7A9BEADDEF4392937C9633
 * Entry: 0x001eb2b0, Ghidra index: 6878, label: FUN_001eb2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_001eb2b0(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int in_ECX;
  char *pcVar4;
  uint in_EDX;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    if (*(uint *)(in_ECX + 0x14) <= in_EDX) {
      return *(uint *)(in_ECX + 0x14);
    }
  }
  else {
    if (param_2 <= *(uint *)(in_ECX + 0x14)) {
      uVar2 = *(uint *)(in_ECX + 0x14) - param_2;
      if (in_EDX < uVar2) {
        uVar2 = in_EDX;
      }
      uVar1 = *(uint *)(in_ECX + 0x18);
      pcVar5 = (char *)(in_ECX + 4);
      pcVar3 = pcVar5;
      if (0xf < uVar1) {
        pcVar3 = *(char **)pcVar5;
      }
      pcVar3 = pcVar3 + uVar2;
      do {
        if (*pcVar3 == *param_1) {
          bVar7 = true;
          uVar2 = param_2;
          pcVar4 = pcVar3;
          pcVar6 = param_1;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            bVar7 = *pcVar4 == *pcVar6;
            pcVar4 = pcVar4 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar7);
          if (bVar7) {
            if (0xf < uVar1) {
              pcVar5 = *(char **)pcVar5;
            }
            return (int)pcVar3 - (int)pcVar5;
          }
        }
        pcVar4 = pcVar5;
        if (0xf < uVar1) {
          pcVar4 = *(char **)pcVar5;
        }
        if (pcVar3 == pcVar4) break;
        pcVar3 = pcVar3 + -1;
      } while( true );
    }
    in_EDX = 0xffffffff;
  }
  return in_EDX;
}
