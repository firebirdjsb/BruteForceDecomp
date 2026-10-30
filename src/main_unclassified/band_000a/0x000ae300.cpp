/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59433F942AF62CF75715D35CE812BE73E75E93605F142F134CBBE23691CA8D52
 * Entry: 0x000ae300, Ghidra index: 2083, label: FUN_000ae300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0012aba0(void);
extern void FUN_0012a450(int param_1,undefined4 param_2,int *param_3);

void FUN_000ae300(float param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(unaff_EDI + 0x7c);
  puVar2 = (undefined4 *)*puVar1;
  while (puVar2 != puVar1) {
    if ((float)puVar2[4] < param_1 == ((float)puVar2[4] == param_1)) {
      puVar2[4] = (float)puVar2[4] - param_1;
      FUN_0012aba0();
    }
    else {
      puVar2 = (undefined4 *)FUN_0012a450(unaff_EDI + 0x78,local_4,puVar2);
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  return;
}
