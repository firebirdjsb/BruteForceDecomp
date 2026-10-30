/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29858A28ABEC0EF45C15748CFB71C7F44EBA06E511423BAABF4CB73864300F9F
 * Entry: 0x00232ad0, Ghidra index: 7772, label: FUN_00232ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00232b5b) */

undefined4 FUN_00232ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_800 [2048];
  
  /* XBE 0x00232ADD: LEA EAX,[ESP+0x818] after SUB ESP,0x800
   * and three preserved-register pushes selects entry ESP+0x0C:
   * the third incoming guest DWORD, used as formatter arguments.
   * Original varargs ABI and later buffer growth remain unverified. */
  iVar2 = FUN_002eb322(local_800,0x800,param_2,&param_3);
  if (iVar2 != 0x7ff) {
    pcVar3 = local_800;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(local_800,(int)pcVar3 - (int)(local_800 + 1));
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(0);
}
