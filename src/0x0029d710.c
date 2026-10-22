/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CBCC475FC12DCFE4478D32C0EA28273CD0C8B12CA713DFBD24EE2486D567D1D
 * Entry: 0x0029d710, Ghidra index: 9462, label: FUN_0029d710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0029d710(uint param_1,uint param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 >> 8 & 0xff;
  uVar2 = param_1 >> 0x10 & 0xff;
  iVar1 = (int)(param_3 * 255.0);
  return (((int)(((param_2 >> 0x10 & 0xff) - uVar2) * iVar1) >> 8) + uVar2 & 0xff) << 0x10 |
         (((int)(((param_2 >> 8 & 0xff) - uVar3) * iVar1) >> 8) + uVar3 & 0xff) << 8 |
         ((int)(((param_2 & 0xff) - (param_1 & 0xff)) * iVar1) >> 8) + (param_1 & 0xff) & 0xff;
}
