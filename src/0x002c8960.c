/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBF7107E1B9E316623EB82C817028F90A43829ADD50406668942FE724F09CEB9
 * Entry: 0x002c8960, Ghidra index: 10127, label: FUN_002c8960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002c8960(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar3 = param_2;
    iVar2 = 0;
    while( true ) {
      if ((int)(uint)*(ushort *)(iVar3 + 0x1a) <= iVar2) {
        return iVar3;
      }
      param_2 = *(int *)(*(int *)(iVar3 + 0x1c) + iVar2 * 4);
      iVar1 = FUN_002c8550(param_1,param_3);
      if (iVar1 == 1) break;
      iVar2 = iVar2 + 1;
    }
  } while( true );
}
