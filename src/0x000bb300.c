/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC8877C61D1351DB0949B78DFB16CC848105F914277DF66B0C06BC6C92C809A7
 * Entry: 0x000bb300, Ghidra index: 2270, label: FUN_000bb300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bb300(void)

{
  int *in_ECX;
  
  if ((*(byte *)((int)in_ECX + 0x13) & 1) == 0) {
    (**(code **)(*in_ECX + 4))
              (in_ECX + 0xb,(float)(int)*(short *)((int)in_ECX + 0xe),(float)(int)(short)in_ECX[3],0
               ,0,0xff,1,1,in_ECX[8],0,0,0,0,0x3f800000,0x3f800000,0,0,0);
  }
  return;
}
