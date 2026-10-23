/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59EDC1A29010D4965DD93177CEB6334CC2072315BBA2BD9BB3EFF4B1EE491313
 * Entry: 0x0025b310, Ghidra index: 8537, label: FUN_0025b310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0025b310(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = D3D8LTCG__D3D_BlockOnResource_0();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return iVar1;
}
