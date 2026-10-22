/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF7F56ABDFC82D1776AAD38659AB4C7FE830E26CFD595721E0C4D8A2291AEC99
 * Entry: 0x001f49d0, Ghidra index: 7038, label: FUN_001f49d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001f49d0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int local_28;
  
  iVar1 = **(int **)(in_EAX + 0x9c);
  iVar3 = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)((*(int **)(in_EAX + 0x9c))[1] + 0xc) + 4);
    if (iVar1 == 2) {
      return 0;
    }
    if (iVar1 == 0x16) {
      return 0;
    }
  }
  else if (iVar1 == 5) {
    return 0;
  }
  FUN_000d1420(param_1);
  do {
    if (local_28 == 0) {
      return iVar3;
    }
    if (*(int *)(local_28 + 8) == 0) {
      FUN_001f35b0(0x3f800000);
      iVar3 = iVar3 + 1;
    }
    do {
      cVar2 = FUN_000d14d0();
      if (cVar2 == '\0') {
        local_28 = 0;
        break;
      }
    } while (local_28 == 0);
  } while( true );
}
